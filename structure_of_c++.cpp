#include<iostream>//pustaka bahasa c++ yang terletak di iostream atau library
using namespace std; //deklarasi namespace menggunakan std

class kelas{//OOP
    public://hak akses ex public:
    string nama="fadli";//data dan variabel: string data;
        public://hak akses fungsi ex public:
        void fungsi(){//fungsi void atau fungsi yang tidak ada nilai kembalian
            cout<<nama<<endl;
        }
};
void fungsi()//fungsi tanpa nilai kembalian dengan nama "fungsi"
{

}

int main(){//fungsi utama atau fungsi body atau entry point
    //single line comment
    /*multi line comment
    digunakan untuk komentar dengan banyak baris
    dua baris atau lebih*/

    kelas k;//object
    k.fungsi();

    return 0;//mengembalikan nilai ke nol setelah compile program
}