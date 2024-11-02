#include <iostream>
using namespace std;

int main() {
    // Array untuk menampilkan nama karyawan terbaik
    string karyawanTerbaik[3] = {"Candra", "Dina", "Budi"};

    cout << "Daftar 3 Karyawan Terbaik:" << endl;
    
    // Looping untuk menampilkan nama karyawan terbaik
    for(int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << karyawanTerbaik[i] << endl;
    }

    return 0;
}
