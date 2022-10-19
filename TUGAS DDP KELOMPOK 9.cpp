#include <iostream>
using namespace std;

//KELOMPOK 9
//Jessen Ramadeksa Allen (2217051070)
//Ferdinand Lauren (2217051065)
//Maressia Anggel Firdaus (2217051028)

int bb[10],bj[10],trans[10], layanan[10], tBarang[10];
int total=0, jarak[10],berat[10], banyak,transport[10];
char pilihLayanan;
void masukan() {
            cout<<"Pengiriman Paket\n";
            cout<<"\n\nBerapa banyak jumlah barang yang akan dikirim = "; cin>>banyak;
            for (int i=0; i<banyak; i++){
                        cout<<"Masukan Berat barang yang dikirim (Kg) = "; cin>>berat[i];
                        cout<<"Masukan Jarak pengiriman (Km) = "; cin>>jarak[i];
            }
            system ("cls");          
}
void jenislayanan() {
                        for (int i=0; i<banyak; i++) {
                                    cout<<"\n***Pilih Jenis Layanan Pengiriman***\n";
                                    cout<<"====================================\n";
                                    cout<<"1. Express\n";
                                    cout<<"2. Regular\n";
                                    cout<<"Masukan Pilihan Anda (Ketik angka saja)= "; cin>>pilihLayanan;
                                    cout<<"\n:::Rincian Pembayaran Anda:::"<<endl;
                                    switch (pilihLayanan) {
                                                case '1' :
                                                            //harga layanan
                                                            if (jarak[i]<10) {
                                                                        layanan[i]=10000;
                                                            } else if (jarak[i]<20){
                                                                        layanan[i]=20000;
                                                            } else if (jarak[i]<50){
                                                                        layanan[i]=50000;
                                                            } else if (jarak[i]<100){
                                                                        layanan[i]=75000;
                                                            } else {
                                                                        layanan[i]=100000;
                                                            }
                                                            //harga transport
                                                            if (transport[i]=1) {
                                                                        if (jarak[i]<10){
                                                                        trans[i]=10000;
                                                                        }
                                                                        else if (jarak[i]<20){
                                                                        trans[i]=20000;
                                                                        }
                                                                        else if (jarak[i]<50){
                                                                        trans[i]=25000;
                                                                        }
                                                                        else if (jarak[i]<100){
                                                                        trans[i]=50000;
                                                                        }
                                                                        else {
                                                                        trans[i]=70000;
                                                                        }
                                                            } else {
                                                                        if (jarak[i]<10){
                                                                        trans[i]=2000;
                                                                        }
                                                                        else if (jarak[i]<20){
                                                                        trans[i]=5000;
                                                                        }
                                                                        else if (jarak[i]<50){
                                                                        trans[i]=12000;
                                                                        }
                                                                        else if (jarak[i]<100){
                                                                        trans[i]=20000;
                                                                        }
                                                                        else {
                                                                        trans[i]=30000;
                                                                        }
                                                            }
                                                break;
                                                case '2':
                                                            //Layanan
															if (jarak[i]<10){
                                                            layanan[i]=5000;
                                                            }
                                                            else if (jarak[i]<20){
                                                            layanan[i]=10000;
                                                            }
                                                            else if (jarak[i]<50){
                                                            layanan[i]=15000;
                                                            }
                                                            else if (jarak[i]<100){
                                                            layanan[i]=40000;
                                                            }
                                                            else {
                                                            layanan[i]=60000;
                                                            }
                                                            
                                                            //Transportasi           
                                                            if (transport[i]=1) {
                                                                        if (jarak[i]<10){
                                                                        trans[i]=10000;
                                                                        }
                                                                        else if (jarak[i]<20){
                                                                        trans[i]=20000;
                                                                        }
                                                                        else if (jarak[i]<50){
                                                                        trans[i]=25000;
                                                                        }
                                                                        else if (jarak[i]<100){
                                                                        trans[i]=50000;
                                                                        }
                                                                        else {
                                                                        trans[i]=70000;
                                                                        }
                                                            } else {
                                                                        if (jarak[i]<10){
                                                                        trans[i]=2000;
                                                                        }
                                                                        else if (jarak[i]<20){
                                                                        trans[i]=5000;
                                                                        }
                                                                        else if (jarak[i]<50){
                                                                        trans[i]=12000;
                                                                        }
                                                                        else if (jarak[i]<100){
                                                                        trans[i]=20000;
                                                                        }
                                                                        else {
                                                                        trans[i]=30000;
                                                                        }
                                                            }
                                                           
                                   
                                                break;
                        }
            }
                       
                        system ("cls");
            }

void transportasi() {
            for (int i=0; i<banyak; i++) {
                        cout<<"|===========================================|\n";
                        cout<<"|---Pilih Jenis Transportasi yg Digunakan---|\n";
                        cout<<"|\t1. Transportasi Laut\t\t    |\n";
                        cout<<"|\t2. Transportasi Darat\t\t    |\n";
                        cout<<"|===========================================|\n";
                        cout<<"Masukan Pilihan Anda = "; cin>>transport[i];
            }
            system ("cls");
}
void beratbarang() {
            for (int i=0; i<banyak;i++) {
                        if (berat[i]<=2){
                                    bb[i]=5000;
                        }
                        else if (berat[i]<=5) {
                        bb[i]=7000;
                        }
                        else if (berat[i]<=15) {
                        bb[i]=10000;
                        }
                        else {
                        bb[i]=25000;
                        }
                       
            }
}

void jarakpengiriman() {
            for (int i=0; i<banyak;i++) {
            if (jarak[i]<10){
            bj[i]=5000;
            }
            else if (jarak[i]<20) {
            bj[i]=10000;
            }
            else if (jarak[i]<50) {
            bj[i]=30000;
            }
            else if (jarak[i]<100) {
            bj[i]=70000;
            }
            else {
            bj[i]=100000;
            }
}
}
void rincian() {
            for(int i=0;i<banyak;i++) {
                        cout<<":::Rincian Pembayaran Barang Anda::: "<<i+1<<endl;
                        cout<<"=======================================\n";
                        cout<<"Biaya berat barang\t\t="<<bb[i]<<endl;
                        cout<<"Biaya Jarak Pengiriman\t\t="<<bj[i]<<endl;
                        cout<<"Biaya Transportasi\t\t="<<trans[i]<<endl;
                        cout<<"Biaya Layanan\t\t\t="<<layanan[i]<<endl;
                        tBarang[i] = bb[i]+total+layanan[i]+trans[i]+bj[i];
                        cout<<"Total\t\t\t\t="<<tBarang[i]<<endl;
                       
            }
}
void totalbayar() {
            for(int i=0;i<banyak;i++) {
                        total = bb[i]+total+layanan[i]+trans[i]+bj[i];
            }
            cout<<"Total biaya yang harus dibayar adalah = "<<total<<endl;
}
void penutup() {
            cout<<" Terimakasih Telah Menggunakan Layanan Kami \n";
            cout<<"\t\t\t----------------\t\t\t";
}
int main() {
            masukan();
            jenislayanan();
            transportasi();
            beratbarang();          
            jarakpengiriman();
            rincian();
            totalbayar();
            penutup();
}