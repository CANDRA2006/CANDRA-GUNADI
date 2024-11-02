#include <iostream>
using namespace std;

int main(){
  system("CLS");
  string username1 = "CANDRA", password1 = "candra", username2 = "user", password2 = "user";
  int hitung = 0;

  char mahasiswa[100] = "CANDRA";
  int nim = 60324042;
  float nilai = 99.99;
  char grade[2] = "A";

  while (hitung < 3)
  {
    string username, password;

    cout << "Masukkan Username : ";
    cin >> username;
    cout << "Masukkan Password : ";
    cin >> password;

    // jika 
    if (username == username1 && password == password1) // username yang kita masukkan sama dengan username1 AND password yang kita masukkan sama dengan password1
    {
      cout << "\nDashboard Admin\n"; // maka akan tampil Dashboard Admin
      printf("Nama \t \tNIM \t \tNilai \tGrade \tAction \n");
      printf("%s \t%d \t%4.2f \t  %s \tEdit|Delete \n",mahasiswa,nim,nilai,grade);
      cout << mahasiswa << "\t\t" << nim << "\t" << nilai << "\t  " << grade << "\tEdit|Delete \n";
      return 1;
    }
    else if (username == username2 && password == password2)
    {
      cout << "\nDashboard User\n";
      printf("Nama \t \t NIM \t \t Nilai \t Grade \n");
      printf("%s \t %d \t %4.2f \t %s \t",mahasiswa,nim,nilai,grade);
      return 1;
    }
    else
    {
      cout << "Username atau Password yang anda masukkan salah\n\n";
      hitung++;
    }
  }
  
  cout << "Anda sudah salah memasukkan username/password " << hitung << " kali\nCoba lagi nanti!!!";
}