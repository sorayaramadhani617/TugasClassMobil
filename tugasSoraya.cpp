#include <iostream>
#include <string>
using namespace std;
 
class mobil{
		public :
			int jumlhmobil;
			string merkmobil;
			void berkendara(string kecepatan);
};

void mobil::berkendara(string kecepatan){
	
	cout<< " Kecepatan Mobil :"<< kecepatan << endl;
}
int main (){
	mobil mobilbalap, mobilmetic;
	
	mobilmetic.jumlhmobil = 400;
	mobilmetic.merkmobil = "Jeep";
	mobilbalap.jumlhmobil = 200;
	mobilbalap.merkmobil = "Nissan";
	
	cout << "Mobil Balap : "<<endl;
	cout << "Jumlah Mobil: "<<mobilbalap.jumlhmobil<<" unit"<<endl;
	cout << "Merk Mobil  : "<<mobilbalap.merkmobil<<endl;
	
	mobilbalap.berkendara("120km/jam");
	
	cout << ""<<endl;
	
	cout << "Mobil Metic : "<<endl;
	cout << "Jumlah Mobil: "<<mobilmetic.jumlhmobil<<" unit"<<endl;
	cout << "Merk Mobil  : "<<mobilmetic.merkmobil<<endl;
	
	mobilmetic.berkendara("120km/jam");
	
}
