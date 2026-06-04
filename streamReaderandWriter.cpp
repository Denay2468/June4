#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string baris;
    ofstream outfile;
    outfile.open("contohfile.txt");
    cout << ">= Menulis File,\'q\' untuk keluar: " << endl;
    while(true){

        cout<<"- ";
        getline(cin, baris);

        if(baris == "q"){

            break;

        }
        outfile << baris << endl;
    }
    outfile.close();

    ifstream infile;
    infile.open("contohfile.txt");
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