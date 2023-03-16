//Perhitungan IPK Mahasiswa UNY 

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout << "Selamat Datang "<<endl;
    string x = "Masukkan Nama Mahasiswa : ";
    cout << x ;
    cin >> x ;
    int y ; 
    cout << "Masukkan NIM Mahasiswa : ";
    cin >> y;
    string z= "Masukkan Kelas Mahasiswa : ";
    cout << z ;
    cin >> z;

    {
    string x;  
    int y , z;
    float a ;
    cout << "Masukkan Nama Matkul : ";
    cin >> x;
    cout << "Masukkan Jumlah SKS : ";
    cin >> y ;
    cout << "Masukkan Jumlah Nilai : ";
    cin >> z ;
    
    // Percabangan Nilai
        if (z >= 86 ) {
            cout << "Bobot Nilai : " ;
            a = y * 4.00;
            cout << a <<endl;
            cout << "Huruf : A"<<endl;}
            else if (z >= 81 && z <=86 ){
                cout << "Bobot Nilai : " ;
                a = y * 3.67;
                cout << a <<endl;
                cout << "Huruf : A-"<<endl;
            }else if (z >= 76 && z <=80 ){
                cout << "Bobot Nilai : " ;
                a = y * 3.33;
                cout << a <<endl;
                cout << "Huruf : B+"<<endl;
            }else if (z >= 71 && z <=75 ){
                cout << "Bobot Nilai : " ;
                a = y * 3.33;
                cout << a <<endl;
                cout << "Huruf : B"<<endl;
            }


            {
                string x; 
                int y1 , z1;
                float b;
                cout << "Masukkan Nama Matkul : ";
                cin >> x;
                cout << "Masukkan Jumlah SKS : ";
                cin >> y1 ;
                cout << "Masukkan Jumlah Nilai : ";
                cin >> z1 ;
            
                if (z1 >= 86 ) {
                    cout << "Bobot Nilai : " ;
                    b = y1 * 4.00;
                    cout << b <<endl;
                    cout << "Huruf : A"<<endl;
                    } else if (z1 >= 81 && z1 <=86 ){
                        cout << "Bobot Nilai : " ;
                        b = y1 * 3.67;
                        cout << b <<endl;
                        cout << "Huruf : A-"<<endl;   
                    } else if (z1 >= 76 && z1 <=80 ){
                        cout << "Bobot Nilai : " ;
                        b = y1 * 3.33;
                        cout << b <<endl;
                        cout << "Huruf : B+"<<endl;
                    }else if (z1 >= 71 && z1 <=75 ){
                        cout << "Bobot Nilai : " ;
                        b = y1 * 3.33;
                        cout << b <<endl;
                        cout << "Huruf : B"<<endl;}
        {
            float hasil = a + b;
            float IPK = hasil / 2;
            cout << IPK;
        }
                
        }
    }
    return 0;
}

