#include <iostream>
using namespace std;

void Cekbiayaparkir(int BiayaParkir,int uang,int diskon,int Jam_Masuk,int Jam_Keluar,int Total_jam){
    int Totalbiaya,kembalian;

    Totalbiaya = BiayaParkir-diskon;
    kembalian = uang-Totalbiaya;
    cout<<"======================================================="<<endl;
    cout<<"                                                       "<<endl;
    cout<<"          PARKIR KENDARAAN RODA DUA DAN EMPAT              "<<endl;
    cout<<"            MALL GRAND INDONESIA JAKARTA               "<<endl;
    cout<<"             jl M.H Thamrin No 1,Menteng               "<<endl;
    cout<<"                                                       "<<endl;
    cout<<"      Jam Masuk           =  Jam  "<<Jam_Masuk<<endl;
    cout<<"      Jam Keluar          =  Jam  "<<Jam_Keluar<<endl;
    cout<<"      Lama Parkir         =  "<<Total_jam<<" Jam"<<endl;
    cout<<"      Biaya parkir        = Rp "<<BiayaParkir<<endl;
    cout<<"      Potongan Diskon     = Rp "<<diskon<<endl;
    cout<<"      Total Biaya Parkir  = Rp "<<Totalbiaya<<endl;
    cout<<"      Total Uang          = Rp "<<uang<<endl;
    cout<<"      Kembalian           = Rp "<<kembalian<<endl;
    cout<<"                                       "<<endl;
    cout<<"                   TERIMAKASIH  "<<endl;
    cout<<"======================================================="<<endl;
}

int jumlahuang(int BiayaParkir,int diskon){
    return (BiayaParkir-diskon);
}

int Totaljam(int Jam_masuk,int Jam_keluar){
    if(Jam_masuk>Jam_keluar){
    return((24-Jam_masuk)+Jam_keluar);
    }
    else if(Jam_masuk<Jam_keluar){
    return(Jam_keluar-Jam_masuk);
    }
}
int main(){
    int Jam_Masuk, Jam_Keluar, Lama_Parkir, kendaraan, nama_kendaraan, Total_jam;
    int pembayaran;
    char ulang;
    int BiayaParkir,diskon,uang;

    cout<<"                                                       "<<endl;
    cout<<"Program Menghitung Biaya Parkir"<<endl;
    cout<<"                                                       "<<endl;
    cout<<"   ============================================================"<<endl;
    cout<<"   |(1) biaya parkir Motor Reguler adalah Rp.5000/jam         |"<<endl;
    cout<<"   |(2) biaya parkir Mobil Reguler adalah Rp.10000/jam        |"<<endl;
    cout<<"   | #  biaya parkir Motor menambah 3000/jam diatas 12 jam    |"<<endl;
    cout<<"   | #  biaya parkir Mobil menambah 6000/jam diatas 12 jam    |"<<endl;
    cout<<"   ============================================================"<<endl;
    cout<<"                                                     "<<endl;

 do{
    cout<<"Pilih kendaraan yang di pakai : ";
    cin>>kendaraan;

if(kendaraan == 1 || kendaraan == 2 ){
    cout<<"Jam Masuk Kendaraan : ";
    cin>>Jam_Masuk;
    if(Jam_Masuk<=24){
    cout<<"Jam Keluar Kendaraan : ";
    cin>>Jam_Keluar;
    if(Jam_Keluar<=24){
    cout<<"___________________________________________________________________"<<endl;
    cout<<"                                                                   "<<endl;
    cout<<"                                ==================================="<<endl;
    cout<<"                                |   NO  |       METODE     | Dsc  |"<<endl;
    cout<<"                                |=================================|"<<endl;
    cout<<"                                |   1   |       TUNAI      |  -   |"<<endl;
    cout<<"                                |   2   |       GOPAY      |  5%  |"<<endl;
    cout<<"                                ==================================="<<endl;
    cout<<"                                               "<<endl;
    cout<<"Silahkan Pilih pembayaran yang ingin dipakai : ";
    cin>>pembayaran;

    Total_jam = Totaljam(Jam_Masuk,Jam_Keluar);

if(pembayaran  == 1 || pembayaran == 2 ){

    switch(pembayaran){

        case 1 :
            cout<<"Silahkan Masukkan Jumlah Uang : Rp.";
            cin>>uang;

            if(kendaraan==1){
                if(Total_jam > 12){
                BiayaParkir = ((Total_jam - 12)*6000)+60000 ;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
                }
            else if(Total_jam >= 2 && Total_jam <= 12){
                BiayaParkir = Total_jam*5000;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
            else if (Total_jam == 1 || Total_jam == 0){
                BiayaParkir = 5000;
                diskon = BiayaParkir*(0);
                BiayaParkir = BiayaParkir-diskon;
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
             }
            if(kendaraan==2){
                if(Total_jam > 12){
                BiayaParkir = ((Total_jam - 12)*12000)+120000 ;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
            else if(Total_jam >= 2 && Total_jam <= 12){
                BiayaParkir = Total_jam*10000;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }

            else if(Total_jam == 1 || Total_jam == 0){
                BiayaParkir = 10000;
                diskon = BiayaParkir*(0);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
             }
             break;

        case 2 :

            if(kendaraan==1){
                if(Total_jam > 12){
                        BiayaParkir = ((Total_jam - 12)*6000)+60000 ;
                        diskon = BiayaParkir*(0.05);
                        uang = jumlahuang(BiayaParkir,diskon);
                        Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
                }
            else if(Total_jam >= 2 && Total_jam <= 12){
                BiayaParkir = Total_jam*5000;
                diskon = BiayaParkir*(0.05);
                uang = jumlahuang(BiayaParkir,diskon);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }

            else if (Total_jam == 1 || Total_jam == 0){
                BiayaParkir = 5000;
                diskon = BiayaParkir*(0.05);
                uang = jumlahuang(BiayaParkir,diskon);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
             }
            if(kendaraan==2){
                if(Total_jam > 12){
                    BiayaParkir = ((Total_jam - 12)*12000)+120000 ;
                    diskon = BiayaParkir*(0.05);
                    uang = jumlahuang(BiayaParkir,diskon);
                    Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }

            else if(Total_jam >= 2 && Total_jam <= 12){
                BiayaParkir = Total_jam*10000;
                diskon = BiayaParkir*(0.05);
                uang = jumlahuang(BiayaParkir,diskon);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
            else if(Total_jam == 1 || Total_jam == 0){
                BiayaParkir = 10000;
                diskon = BiayaParkir*(0.05);
                uang = jumlahuang(BiayaParkir,diskon);
                Cekbiayaparkir(BiayaParkir,uang,diskon,Jam_Masuk,Jam_Keluar,Total_jam);
            }
             }
             break;
        }
    }
else{
    cout<<"Maaf Input anda salah"<<endl;
}
}
else{
    cout<<"Maaf Input Anda Salah"<<endl;
}

}
else{
    cout<<"Maaf Input Anda Salah"<<endl;
}
}
else{
    cout<<"Maaf Input anda salah"<<endl;
}
cout<<"apakah anda ingin mengulang?"<<endl;
cout<<"Jawab Y/N : "<<endl;
cin>>ulang;
}
while(ulang=='Y');

cout<<"Terima Kasih sudah menggunakan Program Parkir Ini"<<endl;

 return 0;
}
