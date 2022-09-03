#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main(){
	char nilai_mutu = 'A';
	maha nilai;
	nilai.set_nama("Rosinta Banjarnahor ");
	cout << " Nama : " << nilai.get_nama() << endl;
	nilai.set_npm("2117051069");
	cout << " NPM : " << nilai.get_npm() << endl;
	nilai.set_nilai_uts(80);
	cout << nilai.get_nilai_uts() << endl;
	nilai.set_nilai_uas(80);
	cout << nilai.get_nilai_uas() << endl;
	nilai.set_NA((80 + 80 )/ 2);
	cout << " Nilai Akhir : " << nilai.get_NA() << endl;
	cout << " Huruf Mutu : " << nilai_mutu;
	return 0;
	
};
