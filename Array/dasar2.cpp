// Mengubah nilai elemen array

#include <iostream>
using namespace std;

int main()
{

    // Inisialisasi array
    int angka[5] = {1, 2, 3, 4, 5};

    // Mengubah nilai elemen ke tiga
    angka[2] = 10;
    // Mengakses elemet ke tiga array
    cout << "Elemen ke-3 setelah diubah: " << angka[2] << endl;

    return 0;
}