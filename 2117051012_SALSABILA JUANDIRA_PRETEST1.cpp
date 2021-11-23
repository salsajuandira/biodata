#include <iostream>
using namespace std;

int main (){
	cout<<"   =======Masukan Biodata Anda========"<< endl;
	cout<< endl;
// input
	string variabel_nama;
	string variabel_jurusan;
	string variabel_alamat;
	string variabel_npm;
	cout<<"Masukan Nama Anda	: ";
	getline(cin,variabel_nama);
	cout<<"Masukan Jurusan Anda 	: ";
	getline(cin,variabel_jurusan);
	cout<<"Masukan Alamat Anda 	: ";
	getline(cin,variabel_alamat);
	cout<<"Masukan NPM Anda 	: ";
	getline(cin,variabel_npm);
	cout<< endl;
// output
	cout<<"   ===========Hasil Biodata==========="<< endl;
	cout<< endl;
	cout<<"Nama		: " <<variabel_nama<< endl;
	cout<<"Jurusan 	: " <<variabel_jurusan<< endl;
	cout<<"Alamat 		: " <<variabel_alamat<< endl;
	cout<<"NPM 		: " <<variabel_npm<< endl;
	cout<< endl;
	cout<<"   ===========Terima kasih============"<< endl;
	cout<< endl;
	
	return 0;
}
