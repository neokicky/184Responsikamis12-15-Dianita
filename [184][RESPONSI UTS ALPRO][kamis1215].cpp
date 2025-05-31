#include<iostream>
#include<string>
using namespace std;
string user = "admin";
string password = "1994";

void admin(){
	string username,pasword;
	cout << "Hallo admin Selamat datang "<<endl;
	cout << "masukan  username anda = ";
	cin  >> username;
	cout << "\nmasukan  pasword anda = ";
	cin  >> pasword;
	
	
}
void login(){;
	string usr;
	string pw;
	cout << "masukkan username anda : ";
	cin >> usr;
	cout << "masukkan password anda : ";
	cin >> pw;
	do {
	if (usr == user && pw == password){
		cout << "username benar dan password benar"<<endl;	
	}else{
		cout << "username salah dan password salah "<< endl;
		login();
	}
	}while (pw != password);
}
void mahasiswa(){
	string username,pasword;
	cout << "Hallo mahasiswa Selamat datang "<<endl;
	cout << "masukan  username anda = ";
	cin  >> username;
	cout << "\nmasukan  pasword anda = ";
	cin  >> pasword;
	
	
}

void anu(){
	string ubah;
	cout<<"kamu mauubah data kelas";
	cin>>ubah;
	
}


void adminA(){
	int pilihan;
	cout << "1. lihat jadwal \n2. lihat kelas \n3. unduh"<<endl;
	cout<<"apa yang mau kamu ubah ";
	cin>>pilihan;
	if (pilihan=1){
		   anu();
	}	 
	else if (pilihan=2) {
		  mahasiswa();
	}else {
		cout << "eror";
	}


}
int main(){
	int isi;
	cout<<"1.admin \n2.mahasiswa";
	cout<<"\nanda menjadi apa : ";
	cin>>isi;
	login();
	adminA();
	

}
