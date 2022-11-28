#include <iostream>

#include <iomanip>

using namespace std;



struct Pembayaran {

       int Kuantitas;

       int Harga_Bayar[20]; //harga setelah dikurang diskon

       int Harga_Total;

       

};

struct Data_Barang {

       int Kode_Barang;

       int Harga_Barang;

       int Jumlah_Harga_Barang; //Harga barang * kuantitas

       int Diskon;

       

       char* Nama_Barang;

       

       struct Pembayaran Bayar;

       };


Data_Barang DB[20];
int Harga_Total;
int x;

int main()
{

 cout<<"SELAMAT DATANG DI SUPERMART"<<endl;

    cout<<"Masukkan jumlah barang yang ingin dibeli : ";

    cin>>x;

 for (int i=0; i<x; i++)

  { cout<<"Masukkan data barang ke-"<<i+1<<endl; 

    cout<<"Kode Barang : "; 

    cin>>DB[i].Kode_Barang;   

     

    if(DB[i].Kode_Barang==001)

  {
    DB[i].Nama_Barang="Sabun Sunsilk"; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=5000; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=0; cout<<"diskon : "<<DB[i].Diskon<<endl;
  }

  

  else if(DB[i].Kode_Barang==002)

  {
    DB[i].Nama_Barang="Susu Nasional "; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=10000; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=10; cout<<"diskon : "<<DB[i].Diskon<<endl;
  }

  

   else if(DB[i].Kode_Barang==003)

  {
    DB[i].Nama_Barang="Saos SASA  "; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=5000; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=20; cout<<"diskon : "<<DB[i].Diskon<<endl;;
  }

  

  



  else 
  {
    cout<<"data tidak ada"<<endl;

    ("pause");

  return 0;
  }

    cout<<"Kuantitas : "; 

    cin>>DB[i].Bayar.Kuantitas;

    DB[i].Jumlah_Harga_Barang=DB[i].Bayar.Kuantitas*(DB[i].Harga_Barang-(DB[i].Harga_Barang*DB[i].Diskon/100));

    Harga_Total=Harga_Total+DB[i].Jumlah_Harga_Barang;

    cout<<"Harga Bayar :"<<DB[i].Jumlah_Harga_Barang<<endl;

    cout<<"Total Harga :"<<Harga_Total<<endl;

    

    

}

} 