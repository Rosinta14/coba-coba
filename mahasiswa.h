#include <iostream>
using namespace std;

		
class maha {
private :
		struct data{
			string nama;
			string npm;
			float nilai_uts;
			float nilai_uas;
		}data;
		float NA;
		
	public :
		maha(){
			this -> data.nama = "";
			this -> data.npm = "";
			this -> data.nilai_uts = 0;
			this -> data.nilai_uas = 0;
			this -> NA = 0;
		}
	void set_nama(string nama){
			this -> data.nama = nama;
		}
		
		string get_nama(){
			return this -> data.nama;
		}
	void set_npm(string npm){
			this -> data.npm = npm;
		}
		
		string get_npm(){
			return this -> data.npm;
		}
	void set_nilai_uts(float nilai_uts){
			this -> data.nilai_uts = nilai_uts ;
		}
		
		float get_nilai_uts(){
			return this -> data.nilai_uts;
		}
	void set_nilai_uas(float nilai_uas){
			this -> data.nilai_uas = nilai_uas ;
		}
		
		float get_nilai_uas(){
			return this -> data.nilai_uas;
		}
	void set_NA(float NA){
			this -> NA = NA ;
		}
		
		float get_NA(){
			return this -> NA;
		}
	
};

int main(){
	
	maha nilai;
	nilai.set_nama("Rosinta Banjarnahor ");
	cout << nilai.get_nama();
	nilai.set_npm("2117051069");
	cout << nilai.get_npm() << endl;
	nilai.set_nilai_uts(80);
	cout << nilai.get_nilai_uts() << endl;
	nilai.set_nilai_uas(80);
	cout << nilai.get_nilai_uas() << endl;
	nilai.set_NA((80 + 80 )/ 2);
	cout << nilai.get_NA() << endl;
	return 0;
	
};
