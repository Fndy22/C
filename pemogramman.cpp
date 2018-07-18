#include <iostream>
#include <ctime>
#include <cstdlib>

#include <string>
using namespace std;
class Mobil{
	private:
		string no_plat;
		int tarif,lama,masuk,keluar;
	public:
		void setno_plat(string x){
			no_plat=x;
		}
		string getno_plat(){
			return no_plat;
		}
		void settarif(int x){
			tarif=x;
		}
		int gettarif(){
			return tarif;
		}
		void setlama(int x){
			lama=x;
		}
		int getlama(){
			return lama;
		}
		void setmasuk(int x){
			masuk=x;
		}
		int getmasuk(){
			return masuk;
		}
		void setkeluar(int x){
			keluar=x;
		}
		int getkeluar(){
			return keluar;
		}
		
		
					
};

class Operator{
	private:
		string nama_operator;
	
	public:
	void setnama(string x){
			nama_operator=x;
		}
			string getnama(){
				return nama_operator;
			}
};
 

void parkir(){
		string n,s,a;
	int msk,k,l,t;
	Mobil m;
	Operator o; 
 char pilih;
   // tanggal / waktu sekarang berdasarkan sistem saat ini
   time_t now = time(0); 
   // ubah sekarang menjadi bentuk string
   char* dt = ctime(&now);
	   tm *ltm = localtime(&now);
	   

mulai:
system("CLS");	
cin.ignore();
cout <<"\t\t\t\tSelamat datang di mall amikom\n";
cout << "\n\t\t\t\t  " << dt << endl; 
cout<<"\t\t\t===========================================\n";
 
	cout<<"\n\t\t\t\tNama Operator : ";
	getline(cin,s);
	o.setnama(s); 
	cout<<"\t\t\t\tNo Plat : ";
		getline(cin,n);
		m.setno_plat(n);
	cout<<"\t\t\t\tJam Masuk: ";
		cin>>msk;
		m.setmasuk(msk);
  	 
  	cout<<"\n\t\t\t\tTekan 'y' untuk masuk : ";cin>>pilih;
  	system("CLS");
		if(pilih=='y' || pilih=='Y'){
			cout<<"\n\t\t\t\tJam Masuk Anda"<<m.getmasuk();
			cout<< "\n\t\t\t\t No Plat : "<<m.getno_plat();
			
		}else{
			cout<<"\n\t\t\t\tAnda salah memasukkan data";
			cout<<"tekan 'y' untuk kembali : ";cin>>pilih;
				if(pilih=='y' || pilih=='Y'){
					goto mulai;
				} 
		}
	system("CLS");	
	cout <<"\t\t\t\tSelamat datang di mall amikom\n";
	cout << "\n\t\t\t\t  " << dt << endl; 
	cout<<"\t\t\t===========================================\n";
	cout<<"\n\t\t\t\tTekan y untuk Keluar: ";cin>>pilih;
	  cout<<"\t\t\t\tJam Keluar: ";
			cin>>k;
			m.setkeluar(k);
			if(pilih=='y' || pilih=='Y'){
			  if (m.getkeluar() >= m.getmasuk()){
	          l = m.getkeluar() - m.getmasuk();
			  m.setlama(l);  
			}else{
		          l = (12-m.getmasuk()) + m.getkeluar();
				  m.setlama(l) ;                
			}
		    
			if (m.getlama() > 1){
		       t = 5000 + ((m.getlama() - 2)*500);
		       m.settarif(t);
		   }
		    else
		        m.settarif(5000);
		system("CLS");	
		cout <<"\t\t\t\t	Nota Parkir\n";
		cout << "\n\t\t\t\t  " << dt << endl; 
		cout<<"\t\t\t===========================================\n";
		    cout<< "\n\t\t\t\tNama Operator : "<<o.getnama();
			cout<< "\n\t\t\t\tNo Plat : "<<m.getno_plat();
		 	cout<<"\n\t\t\t\tTarif Parkir "<<m.getlama()<<" Jam "<<m.gettarif();
		cout<<"\n\t\t\t===========================================\n";
		}	

 
} 
void riwayat(){
	system("CLS");
	Mobil m; 
	cout<<"\n\tRiwayat Parkir\n";
	for(int i=0;i<4;i++){
		if(m.getno_plat()==""){
			cout<<"Data Kosong\n";
		}
		else{
			cout<< "\n\t\t\t\tNo Plat : "<<m.getno_plat()<<endl;
		 	cout<<"\n\t\t\t\tTarif Parkir "<<m.getlama()<<" Jam "<<m.gettarif()<<endl;
		}
	}
}
int main (){
system("CLS"); 
int jwb;
	do{
			
	cout<<"\t\t\t===========================================\n";
	cout<<"\n\t\t\t\t Sistem e-Parkir Mall Amikom\n\n";
	cout<<"\t\t\t===========================================\n";
	cout<<"\t\t\t\t1. Parkir \n"; 
	cout<<"\t\t\t\t2. Riwayat Parkir \n";
	cout<<"\t\t\t\t3. Keluar\n";
	cout<<"\n\t\t\t\tmasukkan pilihan : ";cin>>jwb;
	switch(jwb){
		case 1:parkir();break; 
		case 2:riwayat();break;
	}
}while(jwb!=3);
}
