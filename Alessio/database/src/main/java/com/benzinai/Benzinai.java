package com.benzinai;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.stage.Stage;

import java.sql.*;

public class Benzinai extends Application {
    // Componenti
    Label labelComune, labelProvincia, labelOutput;
    TextField inputComune, inputProvincia;
    Button cerca_comune;
    TextArea output;

    private static Scene scene;

    public static void main(String[] args) {
        launch(args);
    }

    // parte logica (backend)
    public void connect() {
        String url = "jdbc:sqlite:benzinai.db";
        try (Connection conn = DriverManager.getConnection(url)) {
            String comuneIn = inputComune.getText(); // Nella variabile "comune", c'è il testo inserito nella casella
                                                     // "inputComune"
            String provinciaIn = inputProvincia.getText(); // Nella variabile "provincia", c'è il testo inserito nella
                                                           // casella "inputProvincia"

            // Controllo se comune e provincia sono vuote

            if (comuneIn.equals("") && provinciaIn.equals("")) { // PUNTO 1
                output.setText("Non sono stati inseriti i valori");
            } else if ((!comuneIn.equals("") && provinciaIn.equals("")) // comune SI, provincia NO
                    || (comuneIn.equals("") && !provinciaIn.equals("")) // comune NO, provincia SI
                    || (!comuneIn.equals("") && !provinciaIn.equals(""))) { // comune SI, provincia SI
                // PUNTO 2 oppure 3 oppure 4

                String query1 = "SELECT * FROM anagrafica WHERE ";
                String query2 = "SELECT COUNT(*) AS numero_benzinai FROM anagrafica WHERE ";

                // Scrivo solo la parte comune delle query

                if (!comuneIn.equals("") && provinciaIn.equals("")) { // PUNTO 2 e 3
                    query1 = query1 + "Comune LIKE ? LIMIT 10";
                    query2 = query2 + "Comune LIKE ?";
                } else if (comuneIn.equals("") && !provinciaIn.equals("")) {
                    query1 = query1 + "Provincia LIKE ? LIMIT 10";
                    query2 = query2 + "Provincia LIKE ?";
                } else if (!comuneIn.equals("") && !provinciaIn.equals("")) {
                    query1 = query1 + "Comune LIKE ? OR Provincia LIKE ? LIMIT 20";
                    query2 = query2 + "Comune LIKE ? OR Provincia LIKE ?";
                }

                try (PreparedStatement p1 = conn.prepareStatement(query1);
                        PreparedStatement p2 = conn.prepareStatement(query2)) {

                    // p1.setString(i, paramtro); // Sostituisce l'i-esimo parametro (?) nella query
                    // select * from anagrafica WHERE Comune like ?(1) and Provincia like ?(2) and
                    // idImpianto = ?(2) limit 10
                    // arr_paramtri = [?, ?, ?]

                    if (!comuneIn.equals("") && provinciaIn.equals("")) { // PUNTO 2 e 3
                        p1.setString(1, "%" + comuneIn + "%");
                        p2.setString(1, "%" + comuneIn + "%");
                    } else if (comuneIn.equals("") && !provinciaIn.equals("")) {
                        p1.setString(1, "%" + provinciaIn + "%");
                        p2.setString(1, "%" + provinciaIn + "%");
                    } else if (!comuneIn.equals("") && !provinciaIn.equals("")) {
                        // SELECT * FROM anagrafica WHERE Comune LIKE ? OR Provincia LIKE ? LIMIT 10
                        p1.setString(1, "%" + comuneIn + "%");
                        p1.setString(2, "%" + provinciaIn + "%");

                        // SELECT COUNT(*) AS numero_benzinai FROM anagrafica WHERE Comune LIKE ? OR
                        // Provincia LIKE ?
                        p2.setString(1, "%" + comuneIn + "%");
                        p2.setString(2, "%" + provinciaIn + "%");
                    }

                    System.out.println(p1.toString());
                    System.out.println(p2.toString());

                    // Esegue le query
                    ResultSet rs = p1.executeQuery();
                    ResultSet rs2 = p2.executeQuery();
                    // rs è la tabella risultato, della query

                    /*
                     * arr_paramtri = ["%NAPOLI%", ?, ?]
                     * [1, 2, 3]
                     * 
                     * p1.setString(2, "%" + provinciaIn + "%");
                     * 
                     * arr_paramtri = ["%NAPOLI%", %NA%, ?]
                     * [1, 2, 3]
                     */

                    output.clear(); // Cancella il testo presente nella casella di output

                    // rs.next() -> cursore delle righe

                    while (rs.next()) { // finché riesci a posizionare il cursore sulla riga, finché esiste una righa,
                                        // vai alla prossima, scorre tutte le righe
                        int idImpianto = rs.getInt("IdImpianto");
                        String gestore = rs.getString("Gestore");
                        String nomeImpianto = rs.getString("Nome_Impianto");
                        String comune = rs.getString("comune");
                        output.appendText("Id impianto: " + idImpianto + "\n");
                        output.appendText("Gestore: " + gestore + "\n");
                        output.appendText("Nome: " + nomeImpianto + "\n");
                        output.appendText("Comune: " + comune + "\n");
                        output.appendText("==========================\n");
                    }

                    if (rs2.next()) {
                        int n = rs2.getInt("numero_benzinai");
                        output.appendText("\nNumero di righe totali: " + n + "\n");
                    }

                    System.out.println("Connection to SQLite has been established.");
                }
            }

        } catch (SQLException e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    private void setValues(Control c, double x, double y, double height, double width) {
        c.setLayoutX(x); // posizione orizzontale
        c.setLayoutY(y); // posizione verticale
        c.setPrefSize(width, height); // lunghezza, altezza
    }

    // Parte grafica (frontend)
    @Override
    public void start(Stage primaryStage) {
        Group g = new Group(); // Componente Padre, Finestra
        scene = new Scene(g, 800, 600);

        // Comune

        labelComune = new Label("Comune");
        setValues(labelComune, 10, 30, 25, 200); //

        inputComune = new TextField();
        inputComune.setPromptText("Comune");
        setValues(inputComune, 10, 60, 25, 400);

        // Provincia

        labelProvincia = new Label("Provincia");
        setValues(labelProvincia, 10, 90, 25, 200);

        inputProvincia = new TextField();
        inputProvincia.setPromptText("Provincia");
        setValues(inputProvincia, 10, 110, 25, 400);

        // Output

        labelOutput = new Label("Output");
        setValues(labelOutput, 10, 150, 25, 100);

        output = new TextArea();
        output.setEditable(false);
        setValues(output, 10, 180, 400, 600);

        cerca_comune = new Button("Cerca Comune");
        setValues(cerca_comune, 420, 60, 25, 200);

        g.getChildren().add(labelComune);
        g.getChildren().add(labelOutput);
        g.getChildren().add(labelProvincia);
        g.getChildren().add(inputProvincia);
        g.getChildren().add(inputComune);
        g.getChildren().add(output);
        g.getChildren().add(cerca_comune);

        cerca_comune.setOnMouseClicked(e -> connect());

        primaryStage.setTitle("Benzinai");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
}
