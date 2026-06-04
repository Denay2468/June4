#include <iostream>
using namespace std;

int main (){
    try{
        cout<<"Salamat balajar di Prodi TI UMY"<<endl;
        cout<<"Pernyataan tidak ditampilkan"<<endl;

    }
    catch(int a){
        cout<<"Pengecualian akan di eksekusi"<<endl;
    }

    catch(...){
        cout<<"default pengecualian di eksekusi"<<endl;
    }
    return 0;
}