#include <iostream>

using namespace std;
int jumlah[100],sub_total[100],harga[100],pilih_makan,pilih_minum,pilih_extra;
string menu[100];
int total_bayar;
int i=0;
bool kembali=false;
bool selesai=false;

void makanan(){
    kembali=false;
    cout << "---------------------------------------\n";
    cout << "\t**DAFTAR MAKANAN**\n";
    cout << "1. Bakso Biasa         :       Rp. 12000" << endl;
    cout << "2. Bakso Urat          :       Rp. 16000" << endl;
    cout << "3. Bakso Telor         :       Rp. 16000" << endl;
    cout << "4. Bakso Jumbo         :       Rp. 20000" << endl;
    cout << "5. Bakso Iga           :       Rp. 25000" << endl;
    cout << "6. Bakso Mercon Jumbo  :       Rp. 50000" << endl;
    cout << "----------------------------------------------\n";
    cout << "Pilih 0 Untuk Kembali Ke Daftar Menu." << endl << endl;
    while(kembali==false){
        cout << "Pilih Menu Makanan : ";
        cin  >> pilih_makan;
        if (pilih_makan<=6){
            if (pilih_makan==0){
                kembali=true;
                system("CLS");
            }else{
                switch (pilih_makan){
                    case 1 :
                        menu[i]="Bakso Biasa\t";
                        harga[i]=12000;
                        break;
                    case 2 :
                        menu[i]="Bakso Urat\t";
                        harga[i]=16000;
                        break;
                    case 3 :
                        menu[i]="Bakso Telor\t";
                        harga[i]=16000;
                        break;
                    case 4 :
                        menu[i]="Bakso Jumbo\t";
                        harga[i]=20000;
                        break;
                    case 5 :
                        menu[i]="Bakso Iga\t";
                        harga[i]=25000;
                        break;
                    case 6 : 
                        menu[i]="Bakso Mercon Jumbo";
                        harga[i]=50000;
                        break;
                    default :
                        menu[i]="";
                        harga[i]=0;
                }
                cout << "Jumlah Porsi " << menu[i] << " : ";
                cin  >> jumlah[i];
                cout << endl;
                sub_total[i]=jumlah[i]*harga[i];
                total_bayar += sub_total[i];
                i++;
            }
        }else{
            cout << "Menu tidak tersedia" << endl;
        }
    }
}
void minuman(){
    kembali=false;
    cout << "---------------------------------------\n";
    cout << "\t**DAFTAR MINUMAN**\n";
    cout << "1. Teh Manis(Es/panas)    :   Rp.  4000" << endl;
    cout << "2. Es Jeruk               :   Rp.  4000" << endl;
    cout << "3. Es Buah                :   Rp.  8000" << endl;
    cout << "----------------------------------------\n";
    cout << "Pilih 0 Untuk kembali ke daftar menu Utama." <<endl<<endl;
    while (kembali==false){
        cout << "Pilih Minuman : ";
        cin  >> pilih_minum;
        if (pilih_minum<=3){
            if (pilih_minum==0){
                kembali=true;
                system("CLS");
            }else{
                switch (pilih_minum){
                    case 1 :
                        menu[i]="Teh Manis(Es/Panas)";
                        harga[i]=4000;
                        break;
                    case 2 :
                        menu[i]="Aqua Botol\t";
                        harga[i]=4000;
                        break;
                    case 3 :
                        menu[i]="Es Jeruk\t";
                        harga[i]=5000;
                        break;
                    default :
                        menu[i]="";
                        harga[i]=0;
                }
                cout << "Jumlah Porsi " << menu[i] << " : ";
                cin >> jumlah[i];
                cout << endl;
                sub_total[i]=jumlah[i]*harga[i];
                total_bayar += sub_total[i];
                i++;
            }
        }else{
            cout << "Menu tersedia" << endl;
        }
    }
}

void extra(){
    kembali=false;
    cout << "------------------------------------------\n";
    cout << "\t**DAFTAR EXTRA**\n";
    cout << "1. Kupat         :          Rp.  1000" << endl;
    cout << "2. Pangsit       :          Rp.  1000" << endl;
    cout << "3. Kerupuk       :          Rp.  2000" << endl;
    cout << "4. Sosis         :          Rp.  3000" << endl;
    cout << "------------------------------------------\n";
    cout <<"Pilih 0 Untuk Kembali Ke Daftar Menu." <<endl<<endl;
    while(kembali==false){
        cout << "Pilih Tambahan : ";
        cin  >> pilih_extra;
        if (pilih_extra<=4){
            if (pilih_extra==0){
                kembali=true;
                system("CLS");
            }else{
                switch (pilih_extra){
                    case 1 :
                        menu[i]="Kupat\t\t";
                        harga[i]=1000;
                        break;
                    case 2 :
                        menu[i]="Pangsit\t\t";
                        harga[i]=1000;
                        break;
                    case 3 :
                        menu[i]="Kerupuk\t\t";
                        harga[i]=2000;
                        break;
                    case 4 :
                        menu[i]="Sosis\t\t";
                        harga[i]=3000;
                        break;
                    default :
                        menu[i]="";
                        harga[i]=0;
                }
                cout << "Jumlah Porsi "<< menu[i] <<" : ";
                cin  >> jumlah[i];
                cout << endl;
                sub_total[i]=jumlah[i]*harga[i];
                total_bayar += sub_total[i];
                i++;
            }
        }else{
            cout << "Menu tidak tersedia" << endl;
        }
    }
}
void jumlah_bayar (){
    cout<<endl;
	cout<<"\t\t\tINVOICE PEMBELIAN BAKSO IF\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"No	Nama Menu    	  	Harga	     Jumlah            Sub Total " <<endl;
	cout<<"-------------------------------------------------------------------------\n";
	for (int a=0;a<i;a++){
        cout<<a+1<<".	"<<menu[a]<<"	"<<harga[a]<<"	   	"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"-------------------------------------------------------------------------\n";
	cout<<"Total Pembayaran = Rp. "<<total_bayar<<endl;
}
int main()
{
    system("color 70");
    int pilihan;
    while (selesai==false){
        cout << "----------------------------------------------------------\n";
        cout << "\t***DAFTAR MENU WARUNG BAKSO IF***\n";
        cout << "1. MAKANAN" <<endl;
        cout << "2. MINUMAN" <<endl;
        cout << "3. TAMBAHAN" <<endl;
        cout << "----------------------------------------------------------\n";
        cout << "Tekan 0 jika selesai melakukan pemesanan." <<endl<<endl;
        cout << "Pilihan : ";
        cin  >> pilihan;
        if (pilihan<=3){
            system("CLS");
            if (pilihan==0){
                selesai = true;
                system("CLS");
            }else{
                switch (pilihan){
                    case 1 :
                        makanan();
                        break;
                    case 2 :
                        minuman();
                        break;
                    case 3 :
                        extra();
                        break;
                    default :
                        return main();
                }
            }
        }else{
            cout << "Pilihan Tidak Valid!" << endl;
            system("PAUSE");
            system("CLS");
        }
    }
	jumlah_bayar();
    return 0;
}
