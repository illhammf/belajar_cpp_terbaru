#include <iostream>
using namespace std;

int main()
{

    // Inisialisasi array 2D matris berordo 2x3
    int matriks[2][3] = {
        {1, 2, 3},
        {3, 5, 6}};

    // Mengakses elemen array 2D
    // Baris ke 1
    cout << "Elemen dibaris 1 kolom 1: " << matriks[0][0] << endl;
    cout << "Elemen dibaris 1 kolom 2: " << matriks[0][1] << endl;
    cout << "Elemen dibaris 1 kolom 3: " << matriks[0][2] << endl;

    // Baris ke 2
    cout << "Elemen dibaris 2 kolom 1: " << matriks[1][0] << endl;
    cout << "Elemen dibaris 2 kolom 2: " << matriks[1][1] << endl;
    cout << "Elemen dibaris 2 kolom 3: " << matriks[1][2] << endl;

    return 0;
}