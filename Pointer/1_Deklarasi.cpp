#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi variabel
    int a = 5;

    // Pointer p menyimpan alamat variabel a
    int* p = &a;

    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << p << endl;
    cout << "Nilai yang disimpan di alamat yang ditunjuk oleh p: " << *p << endl;

    return 0;
}