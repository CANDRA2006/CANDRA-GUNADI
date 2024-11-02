#include <iostream>
#include <cstdlib>  // Untuk fungsi rand() dan srand()
#include <ctime>    // Untuk fungsi time()

using namespace std;

int main() {
    // Menginisialisasi random seed berdasarkan waktu saat ini
    srand(static_cast<unsigned>(time(0)));

    int angka_acak = rand() % 100 + 1;  // Angka acak antara 1 hingga 100
    int tebakan;
    int uang = 1000000;  // Pemain memulai dengan 1000000 uang
    int hadiah = 100; // Hadiah jika berhasil menebak

    cout << "\n==========SELAMAT DATANG DI PERMAINAN TEBAK ANGKA=========\n";
    cout << "Selamat datang di permainan Tebak Angka!\n";
    cout << "Anda harus menebak angka antara 1 dan 100.\n";
    cout << "Jika Anda berhasil menebak dengan benar, Anda akan mendapatkan uang!\n\n";

    cout << "Jumlah uang Anda saat ini: RP." << uang << endl;

    // Loop permainan
    while (true) {
        cout << "\nMasukkan tebakan Anda (1-100): ";
        cin >> tebakan;

        // Jika tebakan benar
        if (tebakan == angka_acak) {
            uang += hadiah;
            cout << "Selamat! Tebakan Anda benar. Anda mendapatkan Rp." << hadiah << "!\n";
            cout << "Jumlah uang Anda sekarang: Rp." << uang << endl;
            break;  // Keluar dari permainan jika tebakannya benar
        } else if (tebakan < angka_acak) {
            cout << "Tebakan Anda terlalu kecil.\n";
        } else {
            cout << "Tebakan Anda terlalu besar.\n";
        }

        // Mengurangi uang setiap kali salah tebak
        uang -= 100000;
        cout << "Anda kehilangan Rp.100000 karena salah tebak. Uang Anda sekarang: $" << uang << endl;

        // Jika uang habis, permainan berakhir
        if (uang <= 0) {
            cout << "Maaf, uang Anda habis! Permainan berakhir.\n";
            break;
        }
    }

    cout << "\nTerima kasih telah bermain!\n";
    return 0;
}
