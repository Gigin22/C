#include<iostream>

using namespace std;

int main()
{
    int A[500];
    int i,n;
    int dat;
    cout<<"Masukkan Jumlah Bilangan = ";
    cin>>n;
    for (i=0;i<n;i++)
    {
        cout<<"Masukan bilangan ke "<<i+1<<" = ";
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        if (A[i]%2==0)
        {
            cout<<"Bilangan Genap"<<endl;
        }
        else
        {
            cout<<"Bilangan Ganjil"<<endl;
        }
    }
    ulang:
    cout<<"\nMasukkan yang anda cari = ";
    cin>>dat;
    if(dat=A[i])
    {
        cout<<"Data Tersedia";
        //goto Selesai;
    }
    else
    {
        cout<<"Data Tidak Tersedia";
        goto ulang;
    }

}
