#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Jika file belajar.txt ada, kemudian diganti namanya menjadi berhasil.txt
    if (rename("belajar.txt", "berhasil.txt") == 0) {
        cout << "File berhasil diganti nama." << endl;
    }

    // Jika tidak ada fle belajar.txt
    else {
        cout << "Gagal mengganti nama file." << endl;
    }
    return 0;
}