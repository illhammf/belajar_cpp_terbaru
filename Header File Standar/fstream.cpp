#include <fstream> // Untuk operasi file, seperti membaca dari dan menulis ke file
using namespace std;

int main() {
    ofstream myfile("Belajar.txt");
    myfile << "Saya sedang belajar bahasa C++" << endl;
    myfile.close();
    return 0;
}