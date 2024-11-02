#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int hitungFaktorial(int n) {
    int faktorial = 1;

    // Loop untuk menghitung faktorial
    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    return faktorial;
}

int main() {
    int angka;

    // Meminta input dari user
    cout << "Masukkan sebuah bilangan positif: ";
    cin >> angka;

    // Memeriksa apakah input valid
    if (angka < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else {
        // Memanggil fungsi hitungFaktorial dan menampilkan hasilnya
        cout << "Faktorial dari " << angka << " adalah: " << hitungFaktorial(angka) << endl;
    }

    return 0;
}
