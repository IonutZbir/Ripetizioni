module com.benzinai {
    requires javafx.controls;
    requires javafx.fxml;
    requires java.sql;

    opens com.benzinai to javafx.fxml;

    exports com.benzinai;
}
