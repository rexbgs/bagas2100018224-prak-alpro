#include "_hitung.h"

Hitung::Hitung() {
	cout<<"Program menghitung jumlah 3 integer\n";
	cout<<"Selamat berkarya\n";
}
istream&operator>>(istream& in,Hitung& masukan){
	cout<<"Masukkan nilai a : ";
	in>>masukan.a;
	cout<<"Masukkan nilai b : ";
	in>>masukan.b;
	cout<<"Masukkan nilai c : ";
	in>>masukan.c;
	
	return in;
}

ostream&operator<<(ostream& out,const Hitung& keluaran){
	out<<"nilai a : "<<keluaran.a<<endl;
	out<<"nilai b : "<<keluaran.b<<endl;
	out<<"nilai c : "<<keluaran.c<<endl;
	out<<"Jumlah 3 integer di atas : "<<keluaran.jumlah<<endl;
	
	return out;
}
