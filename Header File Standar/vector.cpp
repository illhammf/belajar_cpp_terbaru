#include <iostream>
#include <vector> // Menyediakan kelas vektor untuk mengelola array dinamis
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    
    cout << v[0] << endl;
    return 0;
}