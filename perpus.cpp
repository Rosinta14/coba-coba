#include <iostream> 
#include <conio.h> 
#include <string.h> 
#include <dos.h> 
#include<iomanip>
#include<cstdlib> 
using namespace std; 
struct buku 
{
	int kodeB,sewa,stock;
	char judul[20];
	int b;
}buku[100]; 
struct pinjam 
{
	int kodepinjam,d,kB,tglpin,tglbalik,dipinjem;
	char namap[40];
	char alamat[40];
	char status;
}pinjembuku[100]; 


int main(){
	system("cls"); 
	
	int jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok;
	int b =-1; 
	int d =-1;
	char yn,ch,temp;
	
	//membuat username dan password
	login:
	string user = "";
	string pass = "";
	
	cout<<"\t ------- Program Aplikasi Sederhana Perpustakaan --------\n";
	cout << "\t  Username : "; cin>>user;
	cout << "\t  Password : ";
	ch = _getch();
    while(ch != 13){ //character 13 is enter
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
    }
    cout<<endl;
	if(user == "fauzan" && pass == "123"){
		cout << " Anda berhasil login. " << endl;
		system("pause");
		system("cls");
		goto mulaimenu;
	}else{
		cout<<" Password Anda Salah \n";
   	    system("pause");
   	    system("cls");
	 	goto login;
	}
	//end membuat username dan password
	
	mulaimenu: //mulai menu
	int pil; 
	cout<<"---- Aplikasi Perpustakaan ----"<<endl;
    cout<<"-------- Menu ----------\n";
    cout<<" 1. Input Buku        \n";
    cout<<" 2. Daftar Buku       \n";
    cout<<" 3. Peminjaman      \n";
    cout<<" 4. Pengembalian    \n";
    cout<<" 5. Laporan   \n";
    cout<<" 6. Exit                \n";
    cout<<"----------------------\n";
    cout<<"Masukan Pilihan anda[ 1 s.d. 6 ] = ";cin>>pil; 
    
	if(pil ==1){ //input buku 
		inbuk:
		system("cls");
//		cout<<"\n"<<endl;	
		cout<<"\t Input Buku : \n"; 
		cout<<"\t________"<<endl;
		cout<<endl;
		b++;
			cout<<" Masukan data buku Ke \t: "<<b+1<<endl; 
			cout<<" Kode Buku \t:";scanf("%d%c", &buku[b].kodeB, &temp);
			cout<<" judul Buku\t:";gets(buku[b].judul);
			cout<<" Harga Sewa \t:";scanf("%d%c", &buku[b].sewa, &temp);
			cout<<" Jumlah Buku\t:";scanf("%d%c", &buku[b].stock, &temp);
			cout<<endl;
			cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) :";cin>>yn;
			if(yn=='y'||yn=='Y'){
				goto inbuk;
			}else{
				cout << " Data Berhasil Disimpan " << endl;
				system("pause");
				system("cls");
				goto mulaimenu;
			}
		{
			cout << " Data Berhasil Disimpan " << endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}	
		
	}else if( pil == 2 ){ // melihat daftar buku yang sudah di masukkan
		system("cls");
		cout<<"\n"<<endl;
		cout<<"\t Daftar Buku"<<endl;
		cout<<"\t_____"<<endl;
		cout<<"------------------------------------------------------------------\n";
		cout<<" No  Kode Buku     Judul Buku    Harga Sewa    Jumlah Buku     Buku Keluar \n";
		cout<<"------------------------------------------------------------------\n";
		for(c=0;c<=b;c++){
			stok = buku[c].stock-pinjembuku[c].dipinjem;
			cout<<setw(2)<<c+1<<setw(8)<<buku[c].kodeB<<setw(22)<<buku[c].judul<<setw(10)<<buku[c].sewa<<setw(14)<<stok<<setw(12)<<pinjembuku[c].dipinjem;
			cout<<endl;
		}
		cout<<endl;
		system("pause");
		system("cls");
		goto mulaimenu;
		
	}else if(pil == 3){ // Input transaksi peminjaman Buku
		transaksipinjem:
			d++;
			system("cls");
//			cout<<"\n"<<endl;
			cout<<"\t Transaksi Peminjaman : \n";
			cout<<"\t________\n"<<endl;
			cout<<endl;
				cout<<" Masukan data Pinjaman Ke \t: "<<d+1<<endl;
				cout<<" Kode Pinjaman \t:";scanf("%d%c", &pinjembuku[d].kodepinjam, &temp);
				cout<<" Kode Buku \t:";scanf("%d%c", &pinjembuku[d].kB, &temp);
						
				for(c=0;c<=b;c++){
					if(buku[c].kodeB == pinjembuku[d].kB){
						cout<<" Judul Buku \t:"<<buku[c].judul<<endl;
					}else{
						cout<<" Data buku Tidak Ditemukan \n";
						system("pause");
						system("cls");
						goto transaksipinjem;
					}
				}
				
				cout<<" Nama Penyewa Buku \t:";gets(pinjembuku[d].namap);
				cout<<" Alamat Penyewa \t:";gets(pinjembuku[d].alamat);
				cout<<" Tanggal Pinjam (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglpin, &temp);
				cout<<" Tanggal Balik (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglbalik, &temp);
				lp = (pinjembuku[d].tglbalik-pinjembuku[d].tglpin)/1000000;
				cout<<" Lama Pinjaman \t:"<<lp<<" Hari"<<endl;
				cout<<" banyak buku yang di pinjam  \t:";scanf("%d%c", &pinjembuku[d].dipinjem, &temp);
				hs = pinjembuku[d].dipinjem*buku[d].sewa;
				cout<<" Harga Sewa \t:"<<hs;
				cout<<endl;
				cout<<" Status dipinjam (y) ? \t:";cin>>pinjembuku[d].status;
				cout<<endl;
			cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) :";cin>>yn;
			
			if(yn=='y'||yn=='Y'){
				goto transaksipinjem;
			}else{
				cout << " Data Berhasil Disimpan " << endl;
				system("pause");
				system("cls");
				goto mulaimenu;
			}
			
	}else if(pil == 4){ 
		system("cls");
		pengembalian:
//			cout<<"\n"<<endl;	
			cout<<"\t Masukan kode Peminjaman :";cin>>kodepin; //memasukan kode peminjaman 
			cout<<"\t________"<<endl;
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
						goto mulaimenu;
					}else{
						cout << " Data Berhasil Disimpan " << endl;
						system("pause");
						system("cls");
						goto mulaimenu;
					}
				}else{
					cout << " Data Tidak Di temukan " << endl;
					cout<<" Apakah ingin mengulang kembali ? (y/n) : ";cin>>yn;
					if(yn == 'Y' || yn == 'y'){
						system("cls");
						goto pengembalian;	
					}else{
						system("cls");
						goto mulaimenu;	
					}
				}
			}
	}else if(pil == 5){ 
		system("cls");
			cout<<"\n"<<endl;	
			cout<<"\t laporan Perpustakaan\n"; 
			cout<<"\t________"<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
			cout<<" No  Kode Peminjam  Judul Buku  Nama Peminjam    Alamat           Tanggal Pinjam  Tanggal Balik   Status   Buku Keluar \n";
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
		system("pause");
		system("cls");
		goto mulaimenu;
		
	//footer
	}else if(pil == 6){ //keluar
		cout<<"-- Anda Telah Logout -- \n";
		system("pause");
		system("cls");
		goto login;
		
	}else{ //jika inputan semua salah 
		system("cls");
		goto mulaimenu;
	}	
	
	
}
