// Iterasi melalui array

#include <iostream>
using namespace std;

int main()
{

    // Inisialisasi array
    int angka[5] = {1, 2, 3, 4, 5};

    // Mengubah loop untuk iterasi melalui elemen-elemen araay
    for (int i = 0; i < 5; i++)
    {
        // Mengakses elemen array
        cout << "Elemen array indeks ke- " << i << ": " << angka[i] << endl;
    }

    return 0;
}