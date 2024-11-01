# def somma(x, y):
#     s = x + y
    
#     return s

# x = somma(4, 10)
# x1 = somma(4, 32)
# x2 = somma(4, 53)
# x3 = somma(4, 18)
# x4 = somma(4, 132)
# x5 = somma(4, 32112)
# x6 = somma(4, 3123)
# print(x, x1, x2, x3, x4, x5, x6)

# int x[20];

l = [0] * 20 # [0 for i in range(4)]

# for (int i = 0; i < N; i++)

# x = "ciao" -> len(x) = 4
# x = [1, 2, 3, 4] -> len(x) = 4
print(l)

n = len(l) # n è la dimensione di l, perché, la funzione len, restituisce la lunghezza o di una lista(array) o di una stringa

# for i in range(4) -> i assumerà i seguenti valori: 0, 1, 2, 3 -> [0, 4)

print("[", end="")
for i in range(n - 1): # i assume i valori che vanno da 0 a len(l) - 1
    print(l[i], end=",")
print(l[i], "]")

for x in l: # x assume i valori di l
    print(x, end=", ")


# for i in range(4):
#     for j in range(4):
#         print(j)
#     print(i)

# include <stdlib.h> <- random

import random

print("\nCaricamento array/lista")
j = 0 # indice
while j < n: # condizione
    x = random.randint(4, 10)
    l[j] = x
    j = j + 1  #j += 1 # j++ in C
    # j = j - 1  j -= 1
    # j = j * 1  j *= 1
    # j = j / 1  j /= 1

print("Array: ", l)

# Matrici

print("\n\n\n\n\n")

# l = [0] * 4 - > crea un'array di dimensione 4 riempito di zeri

# m = [[0] * 4 -> la struttura della riga for i in range(4)] crea la lista [0, 0, 0, 0] 4 volte, e mettile all'interno di un'altra lista

m = [[0] * 4 for i in range(4)] # m = [[0] * 4] * 4

print("M = ", m)

# m1 = [[random.randint(4, 10)] * 4  for i in range(4)] genero un numero random, e lo scrivo 4 volte

m1 = [[random.randint(4, 10) for x in range(4)] for i in range(4)] # genero 4 volte un numero random

print("M1 = ", m1)

def print_matrix1(matrix):
    # Questa funzione stampa una matrice n x m in questo formato:
    # [ 1 2 3 ]
    # [ 4 5 6 ]
    # [ 7 8 9 ]
    
    for r in matrix: # che valori assume r? 
        print(r)

def print_matrix2(matrix):
    # Questa funzione stampa una matrice n x m in questo formato:
    # 1 2 3
    # 4 5 6
    # 7 8 9
    
    rows = len(matrix) 
    cols = len(matrix[0])
    
    for i in range(rows): # itera sulle righe
        for j in range(cols): # itera sulle colonne
            elem = matrix[i][j]
            print(elem, end=" ")
        print()

print_matrix1(m1) # chimata a funzione, con input m1

print("\n\n")

print_matrix2(m1) # chimata a funzione, con input m1