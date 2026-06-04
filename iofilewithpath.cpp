#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    string baris,namaFile;
    cout << "Masukkan nama file (dengan path): ";
    getline(cin, namaFile);

    ofstream outfile;

    outfile.open(namaFile + ".txt" , ios::out);
    cout << ">= Menulis File,\'q\' untuk keluar: " << endl;

    while (true){

        cout<<"- ";
        getline(cin, baris);

        if(baris == "q"){

            break;

        }
        outfile << baris << endl;
    }

    outfile.close();

    ifstream infile;
    infile.open(namaFile + ".txt" , ios::in);
    cout << ">= Membaca File: " << endl;

    if(infile.is_open()){
        while(getline(infile, baris)){

            cout << "- " << baris << endl;

        }
        infile.close();
    }else{
        cout << "Tidak dapat membuka file!" << endl;
        return 0;
    }
}