#include <iostream>
using namespace std;

int main() {
    // Mendefinisikan jumlah kandang dan jumlah sapi per kandang
    const int jumlahKandang = 3;
    const int sapiPerKandang = 5;

    // Array multi-dimensi untuk merepresentasikan kesehatan sapi
    int kandang[jumlahKandang][sapiPerKandang] = {
        {1, 1, 0, 1, 1},  // Kandang 1: 4 sapi sehat, 1 tidak sehat
        {0, 1, 1, 0, 1},  // Kandang 2: 3 sapi sehat, 2 tidak sehat
        {1, 1, 1, 1, 0}   // Kandang 3: 4 sapi sehat, 1 tidak sehat
    };

    int totalSehat = 0; // Variabel untuk menghitung total sapi sehat

    // Loop melalui setiap kandang dan setiap sapi di dalamnya
    for (int i = 0; i < jumlahKandang; i++) {
        int sehatPerKandang = 0; // Menghitung sapi sehat per kandang
        for (int j = 0; j < sapiPerKandang; j++) {
            if (kandang[i][j] == 1) {
                sehatPerKandang++;
            }
        }
        cout << "Kandang " << (i + 1) << ": " << sehatPerKandang << " sapi sehat" << endl;
        totalSehat += sehatPerKandang;
    }

    cout << "Total sapi sehat yang siap disembelih: " << totalSehat << endl;

    return 0;
}
