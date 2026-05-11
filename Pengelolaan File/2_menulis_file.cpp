#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Membuka file untuk ditulis
    ofstream outputFile("belajar.txt");

    // Jika file belajar.txt tidak ada
    if (!outputFile)
    {
        cout << "File tidak dapat dibuka!" << endl;
        return 1;
    }

    // Menulis isi file
    outputFile << "Hai, nama saya Ilham Firmansyah." << endl;
    outputFile << "Sekarang saya sedang belajar bahasa pemrograman C++ di rumah." << endl;
    outputFile << "Semoga selalu dimudahkan proses pembelajarannya." << endl;
    outputFile << "Semangat!" << endl;

    // Menutup file
    outputFile.close();

    return 0;
}