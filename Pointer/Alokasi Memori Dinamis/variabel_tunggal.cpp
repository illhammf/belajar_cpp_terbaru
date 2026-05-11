#include <iostream>
using namespace std;

int main() {

    // Alokasi memori untuk satu integer
    int* p = new int;

    // Inisialisasi pointer
    *p = 5;

    // Menampilkan nilai 
    cout << "Nilai yang disimpan di alamat yang ditunjuk oleh p: " << *p << endl;

    // Dealokasi memori
    delete p;

    return 0;
}