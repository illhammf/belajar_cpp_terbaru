#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Membuka file untuk dibaca
    ifstream inputFile("belajar.txt");

    // Jika file belajar.txt tidak ada
    if (!inputFile)
    {
        cout << "File tidak dapat dibuka!" << endl;
        return 1;
    }

    // Membaca file baris demi baris
    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    // Menutup file
    inputFile.close();

    return 0;
}