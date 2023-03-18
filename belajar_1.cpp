//Perhitungan IPK Mahasiswa UNY 

#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>

using namespace std;


int main() {
    long b,d ;
    string a,c,x;
    float z ,y,Bobot,total = 0,total2 = 0,IPK;
    cout << "Selamat Datang "<<endl;
    cout << "Masukkan Nama Mahasiswa  : ";  cin >> a;
    cout << "Masukkan NIM Mahasiswa   : ";  cin >> b;
    cout << "Masukkan Kelas Mahasiswa : ";  cin >> c;
    cout << "Masukkan Jumlah Matkul   : ";  cin >> d;
    {
    for (int i= 0; i < d ; i++){
        cout << endl;
        cout << "Masukkan Nama Matkul  : ";   cin >> x;
        cout << "Masukkan Jumlah SKS   : ";   cin >> y ;
        cout << "Masukkan Jumlah Nilai : ";   cin >> z ;

            if (z >= 86 && z <= 100) {
                Bobot = y * 4.00 ;
                cout << "Bobot NIlai : " << Bobot ; 
                cout  <<endl;
                cout << "Huruf : A"<<endl;}
                else if (z >= 81 && z <=86 ){
                    Bobot = y * 3.67;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : A-"<<endl;
                }else if (z >= 76 && z <=80 ){
                    Bobot = y * 3.33;
                    cout << "Bobot NIlai : " << Bobot ;
                    cout <<endl;  
                    cout << "Huruf : B+"<<endl;
                }else if (z >= 71 && z <=75 ){
                    Bobot = y * 3.00;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : B"<<endl;
                }else if (z >= 66 && z <=70 ){
                    Bobot = y * 2.67;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : B-"<<endl;
                }else if (z >= 61 && z <=65 ){
                    Bobot = y * 2.33;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : C+"<<endl;
                }else if (z >= 56 && z <=60 ){
                    Bobot = y * 2.00;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : C"<<endl;
                }else if (z >= 41 && z <=55 ){
                    Bobot = y * 1.00;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : D"<<endl;
                }else if (z >= 0 && z <= 40 ){
                    Bobot = y * 0,00;
                    cout << "Bobot NIlai : " << Bobot ;  
                    cout <<endl;
                    cout << "Huruf : E"<<endl;
                }else{
                    cout << "Nilai yang Anda Masukkan Salah, Sikahkan masukkan ulang" ;
                }
                total = total + Bobot;
                cout << "Total Bobot : " << total << endl ;
                total2 = total2 + y;
                cout << "Total SKS   : " << total2 << endl;
                }}
        cout << endl ;
        IPK = total / total2;
        cout << "Nilai IPK Anda : " << IPK;
        cin.get();
        return 0;   
 }
    


