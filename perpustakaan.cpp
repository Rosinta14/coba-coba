#include <iostream> 
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h> 
#define MAX 1000 

using namespace std; 

int nomer[MAX];
int head=-1;
int tail=-1;

bool IsEmpty(){ 
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}
bool IsFull(){ 
   if(tail == MAX-1){
       return true;
   }else{
       return false;
   }
}
void AntrianMasuk(int no){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;
}
void AntrianKeluar(){
    if(IsEmpty()){
        cout<<"Antrian sudah kosong ! ";
        getch();
    }else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}

void Clear(){
     head=tail=-1;
}

void View(){
     if(IsEmpty()){
         cout<<"Antrian kosong ! ";

     }else {
         system("cls");
         for(int a=head;a<=tail;a++){
              cout << "==============================="
                   << "\n >> No. Antri : [" << nomer[a] << "]"
                   << "\n==============================="<< endl;
         }
     }
}


void Loading(){
	for(int i = 0 ; i<=100; i++){
		system("cls");
	
		cout<<"\t\t Loading ..."<<i<<"%"<<endl;
		for(int j = 1;j<=i; j++){
		if(j%2==0){
			cout<<"|";
			
		}			
	}cout<<endl;
	usleep(10); 
	}getch;
	system("cls");
}
struct buku 
{
	int kodeB,sewa,stock,b;
	char judul[20];

}buku[100]; 
struct pinjam 
{
	int kodepinjam,d,kB,tglpin,tglbalik,dipinjem;
	char namap[40];
	char alamat[40];
	char status;
}pinjembuku[100]; 

int main(){
	Loading();
	system("cls");
	
	int jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok,pil; 
	int b =-1; 
	int d =-1;
	char yn,ch,temp;

Antrian:
    int choose, p=1, urut; 
    do{
        system("cls");
        cout << "\n\n===== PROGRAM ANTRIAN MEMINJAM BUKU ====="
             << "\n==============================="
             << "\n|1. Tambah Antrian            |"
             << "\n|2. Panggil Antrian           |"
             << "\n|3. Lihat daftar antrian      |"
             << "\n|4. Format                    |"
             << "\n|5. Exit                      |"
             << "\n|6. Masuk                     |"
             << "\n===============================";
        cout << "\nChoose ! "; cin >> choose;
        cout << "\n\n";
        if(choose == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=p;
                AntrianMasuk(urut);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "              ||" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if(choose == 2){
            cout << "=================================" << endl;
            cout << "No. Antri : [" << nomer[head] << "]";
            cout << "\n=================================" << endl;
            AntrianKeluar();
            cout << "Silahkan Dipanggil !" << endl;
        }
        else if(choose == 3){
            View();
        }
        else if(choose == 4){
            Clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(choose == 5){
        }
        else if(choose == 6){
        	cout << " Data Berhasil Disimpan " << endl;
			system("pause");
			system("cls");
			goto login;
        }
        else{
            cout << "Masukan anda salah ! \n"<< endl;
        }
    }while(choose!=6);


login:
	string user = "";
	string pass = "";
	cout<<"\t ------- Program Aplikasi Perpustakaan Sederhana --------\n";
	cout << "\t  Username : "; cin>>user;
	cout << "\t  Password : ";
	ch = _getch();
    while(ch != 13){ 
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
    }
    cout<<endl;
	if(user == "Rosalia" && pass == "123"){
		cout<<endl<<endl;
		cout << "  Login Berhasil. " << endl;
		system("pause");
		system("cls");
		goto menu;
	}else{
		cout<<" Maaf Password yang Anda Masukkan Salah \n";
   	    	system("pause");
   	    	system("cls");
	 goto login;
	}
menu: 

    cout<<"-------------------------------------"<<endl;
    cout<<"-------- Menu Perpustakaan ----------\n";
    cout<<"-------------------------------------"<<endl;
    cout<<" 1. Input Buku        \n";
    cout<<" 2. Daftar dan Laporan Buku       \n";
    cout<<" 3. Peminjaman      \n";
    cout<<" 4. Pengembalian    \n";
    cout<<" 5. Exit                \n";
    cout<<"----------------------\n";
    cout<<"Masukan Pilihan anda [ 1 s.d. 5 ] = ";cin>>pil; 
    
	if(pil ==1){ 
		inbuk:
		system("cls");	
		cout<<"\t Input Buku : \n"; 
		cout<<"________________________"<<endl<<endl;
		cout<<endl;
		b++;
			cout<<" Masukan data buku Ke \t: "<<b+1<<endl; 
			cout<<" Kode Buku \t:";scanf("%d%c", &buku[b].kodeB, &temp);
			cout<<" Judul Buku\t:";gets(buku[b].judul);
			cout<<" Harga Sewa \t:";scanf("%d%c", &buku[b].sewa, &temp);
			cout<<" Jumlah Buku \t:";scanf("%d%c", &buku[b].stock, &temp);
			cout<<endl;
			cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) :";cin>>yn;
			if(yn=='y'||yn=='Y'){
				goto inbuk;
			}else{
				cout << "Data Berhasil Disimpan " << endl;
				system("pause");
				system("cls");
				goto menu;
			}
		{
			cout << " Data Berhasil Disimpan " << endl;
			system("pause");
			system("cls");
			goto menu;
		}
	}else if(pil == 2 ){
		system("cls");
		cout<<" Daftar Buku"<<endl;
		cout<<"________________________"<<endl<<endl;
		cout<<"-------------------------------------------------------------------\n";
		cout<<" No Kode Buku   Judul Buku   Harga Sewa   Jumlah Buku   Buku Keluar\n";
	
		cout<<"-------------------------------------------------------------------\n";
			for(c=0;c<=b;c++){
			stok = buku[c].stock-pinjembuku[c].dipinjem;
			cout<<setw(2)<<c+1<<setw(8)<<buku[c].kodeB<<setw(22)<<buku[c].judul<<setw(10)<<buku[c].sewa<<setw(14)<<stok<<setw(12)<<pinjembuku[c].dipinjem;
			cout<<endl;
		}	cout<<"\n"<<endl<<endl;;	
			
			cout<<" laporan Perpustakaan\n"; 
			cout<<"________________________"<<endl<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
			cout<<" No  Kode Antrian  Judul Buku  Nama Peminjam    Alamat           Tanggal Pinjam  Tanggal Balik   Status   Buku Keluar \n";
			cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
			for(g=0;g<=b;g++){ 
				if(pinjembuku[g].kB==buku[g].kodeB){
					cout<<setw(2)<<g+1<<setw(10)<<pinjembuku[g].kodepinjam<<setw(13)<<buku[g].judul<<setw(12)<<pinjembuku[g].namap
					<<setw(14)<<pinjembuku[g].alamat<<setw(20)<<pinjembuku[g].tglpin<<setw(10)<<pinjembuku[g].tglbalik
					<<setw(12)<<pinjembuku[g].status;
					if((pinjembuku[g].status == 'y') || (pinjembuku[g].status == 'Y')){
						cout<<" (di Pinjam) "<<endl;
					}else{
						cout<<" (di kembalikan) "<<endl;
					}
					cout<<setw(12)<<pinjembuku[g].dipinjem;	
					cout<<endl;
				}
			}
		cout<<endl;
		system("pause");
		system("cls");
		goto menu;
		
	}else if(pil == 3){
		transaksipinkem :
			d++;
			system("cls");
			cout<<"\n"<<endl;
			cout<<" Transaksi Peminjaman : "<<endl;
			cout<<"________________________"<<endl<<endl;
			cout<<endl;
				cout<<" Masukan data Pinjaman Ke \t :"<<d+1<<endl;
				cout<<" Kode Antrian \t\t\t :";scanf ("%d%c", &pinjembuku[d].kodepinjam, &temp);
				cout<<" Kode Buku \t\t\t :";scanf ("%d%c", &pinjembuku[d].kB, &temp);

				cout<<" Nama Penyewa Buku \t\t:";gets(pinjembuku[d].namap);
				cout<<" Alamat Penyewa \t\t:";gets(pinjembuku[d].alamat);
				cout<<" Tanggal Pinjam (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglpin, &temp);
				cout<<" Tanggal Balik (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglbalik, &temp);
				lp = (pinjembuku[d].tglbalik-pinjembuku[d].tglpin)/1000000;
				cout<<" Lama Pinjaman \t\t\t:"<<lp<<" Hari"<<endl;
				cout<<" Banyak buku yang di pinjam  \t:";scanf("%d%c", &pinjembuku[d].dipinjem, &temp);
				hs = pinjembuku[d].dipinjem*buku[d].sewa;
				cout<<" Harga Sewa \t\t\t:"<<hs;
				cout<<endl;
				cout<<" Status dipinjam (y) ? \t\t:";cin>>pinjembuku[d].status;
				cout<<endl;
			cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) :";cin>>yn;
			
			if(yn=='y'||yn=='Y'){
				goto transaksipinkem;
			}else{
				cout << " Data Berhasil Disimpan " << endl;
				system("pause");
				system("cls");
				goto menu;
			}
				
		}else if(pil == 4){ 
		system("cls");
		pengembalian:
	
			cout<<"\t Masukan kode Antrian :";cin>>kodepin;  
			cout<<"________________________"<<endl<<endl;
			cout<<endl;
			for(f=0;f<=d;f++){ 
				if(pinjembuku[f].kodepinjam==kodepin){
					cout<<" Nama Penyewa Buku \t:"<<pinjembuku[f].namap;
					cout<<endl;
					cout<<" Alamat Penyewa \t:"<<pinjembuku[f].alamat;
					cout<<endl;
					if(buku[f].kodeB==pinjembuku[f].kB){
						cout<<" Judul Buku \t:"<<buku[f].judul<<endl;
					}
					cout<<" Tanggal Pinjam (DDMMYYYY)\t:"<<pinjembuku[f].tglpin;
					cout<<endl;
					cout<<" Tanggal Balik (DDMMYYYY)\t:"<<pinjembuku[f].tglbalik;
					cout<<endl;
					lp = (pinjembuku[f].tglbalik-pinjembuku[f].tglpin)/1000000;
					cout<<" Lama Pinjaman \t:"<<lp<<" Hari"<<endl;
					cout<<endl;
					cout<<" banyak buku yang di pinjam  \t:"<<pinjembuku[f].dipinjem;
					cout<<endl;
					hs = pinjembuku[f].dipinjem*buku[f].sewa;
					cout<<" Harga Sewa \t:"<<hs<<endl;
					cout<<" Status : "<<pinjembuku[f].status;
					if((pinjembuku[f].status == 'y') || (pinjembuku[f].status == 'Y')){
						cout<<" (di Pinjam) "<<endl;
					}else{
						cout<<" (di kembalikan) "<<endl;
					}
					cout<<endl;
					cout<<" Sudah di kembalikan ? (y/n) : ";cin>>yn;
					if((yn == 'Y') || (yn == 'y')){
						cout<<" ganti status ( input n ) :";
						cin>>pinjembuku[f].status;
						cout << " Data Berhasil Disimpan " << endl;
						system("pause");
						system("cls");
						goto menu;
					}else{
						cout << " Data Berhasil Disimpan " << endl;
						system("pause");
						system("cls");
						goto menu;
					}
				}else{
					cout << " Data Tidak Di temukan " << endl;
					cout<<" Apakah ingin mengulang kembali ? (y/n) : ";cin>>yn;
					if(yn == 'Y' || yn == 'y'){
						system("cls");
						goto pengembalian;	
					}else{
						system("cls");
						goto menu;	
					}
				}
			}
	}else if(pil == 5){ 	
		system("cls");
		cout<<endl<<endl;
		cout<<"--- Anda Telah Logout --- \n";
		cout<<"-- Terimakasih telah menggunakan layanan kami -- \n";
		system("pause");
		system("cls");
		goto login;
		
	}else{ 
		system("cls");
		goto menu;
	}	
	
	
}
