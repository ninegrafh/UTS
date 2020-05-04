#include<iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b;
    char status;
    do{
    cout<<"Struktur Usia Wajib Sekolah"<<endl;
    cout<<"Usia Anak : ";
    cin>>a;
    b=18;
    if ((a<5) and (a>3))
        cout<<"usia "<<a<<" adalah Usia sekolah PAUD"<<endl;
    else if (a==5)
        cout<<"usia "<<a<<" adalah Usia sekolah TK A"<<endl;
    else if (a==6)
        cout<<"usia "<<a<<" adalah Usia sekolah TK B"<<endl;
    else if ((a>6) and (a<12))
        cout<<"usia "<<a<<" adalah Usia sekolah SD"<<endl;
    else if ((a>=12) and (a<15))
        cout<<"usia "<<a<<" adalah Usia sekolah SMP"<<endl;
    else if (a>b)
        cout<<"usia "<<a<<" melebihi usia wajib sekolah"<<endl;
    else
        cout<<"usia "<<a<<" Belum memasuki usia wajib sekolah"<<endl;

    cout<<"Apakah ingin menjalankan program lagi [Y/N]? ";
    cin>> status;
    }while(status=='Y'||status=='y');
    cout<<"Keluar dari loop"<<endl;

    system("pause");
    return 0;
}
