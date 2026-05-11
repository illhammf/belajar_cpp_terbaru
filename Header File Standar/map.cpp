#include <iostream>
#include <map> // Menyediakan kelas map untuk mengelola pasangan kunci-nilai (key-value)
using namespace std;

int main() {
    map<string, int> m;
    m["satu"] = 1;
    m["dua"] = 2;
    
    cout << m["satu"] << endl;
    return 0;
}