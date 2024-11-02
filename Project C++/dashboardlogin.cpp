#include <iostream>
using namespace std;

int main(){
    system("CLS");
    
    string data[2][2] = {
      {"admin","admin123"},
      {"user","user123"}
    };
    int jalan = 1;
    int hitung = 0;
    
    while (jalan == 1)
    {
      string username,password;
      int cek_user = 0;
      int cek_pw = 0;
      
      cout << "=====LOGIN=====\n";
      cout << "Masukkan Username : ";
      cin >> username;

      for (int i = 0; i < 2; i++)
      {
        if (username == data[i][0])
        {
          cek_user = 1;
        }
      }

      if (cek_user == 1)
      {
        cout << "Masukkan Password : ";
        cin >> password;

        for (int i = 0; i < 2; i++)
        {
          if (username == data[i][0] && password == data[i][1])
          {
            if (username == "admin")
            {
              system("CLS");
              cout << "Dashboard Admin";
              return 1;
            }
            else if (username == "user")
            {
              system("CLS");
              cout << "Dashboard User";
              return 1;
            }
          }
          else
          {
            cek_pw = 0;
          }
        }
        if (cek_pw == 0)
        {
          cout << "Password yang anda masukkan salah \n \n";
        }
      }
      else
      {
        cout << "Username tidak terdaftar \n \n";
      }

      hitung++;

      if (hitung >= 3)
      {
        cout << "Anda sudah salah " << hitung << " kali \ncoba lagi nanti";
        jalan = 0;
      }
    }
}