#include <iostream>
using namespace std;

int main() {
    int nilai;
    char ulang;
    
    do {
        // Input nilai ujian
        cout << "\n========NILAI UJIAN========\n";
        cout << "Masukkan nilai ujian (0-100): ";
        cin >> nilai;

        // Menentukan grade nilai berdasarkan nilai ujian
        if (nilai >= 85 && nilai <= 100) {
            cout << "Grade A" << endl;
        } else if (nilai >= 70 && nilai <= 84) {
            cout << "Grade B" << endl;
        } else if (nilai >= 55 && nilai <= 69) {
            cout << "Grade C" << endl;
        } else if (nilai >= 41 && nilai <= 54) {
            cout << "Grade D" << endl;
        } else if (nilai >= 0 && nilai <= 40) {
            cout << "Grade E" << endl;
        } else {
            cout << "Maaf terjadi kesalahan input, nilai ujian harus antara 0-100!" << endl;
        }

        // Memberi pilihan untuk mengulang
        cout << "Apakah anda ingin mengulang? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}