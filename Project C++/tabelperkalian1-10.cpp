#include <iostream>
using namespace std;

int main() {
    // Loop untuk baris (angka pertama dari perkalian)
    for (int i = 1; i <= 10; i++) {
        // Loop untuk kolom (angka kedua dari perkalian)
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";  // Tampilkan hasil perkalian, dengan tab sebagai pemisah
        }
        cout << endl;  // Ganti baris setelah setiap baris selesai
    }

    return 0;
}
