#include <iostream>
using namespace std;
int main ()
{
	float persenPajak = 0.25, persenTunjangan = 0.10;
	
	string nama ;
	
	float gajiPokok,gajiBersih,tunjangan,pajak;
	
	cout<<"\n\t menghitung gaji karyawan \n\n";
	
	cout<<"nama karyawan : ";
	cin >> nama ;
	
	cout<<"gaji pokoknya : ";
	cin >> gajiPokok;
	
	tunjangan = persenTunjangan * gajiPokok;
	cout <<"\n Tunjangan sebesar = Rp. "<< tunjangan;
	
	pajak = persenPajak * (gajiPokok + tunjangan );
	cout <<"\n Pajaknya sebesar = Rp."<< pajak ;
	
	gajiBersih = gajiPokok + tunjangan - pajak;
	cout <<"\n\n Gaji bersih karyawan = Rp." << gajiBersih;
	
	cout << endl;
	
	return 0;
}
