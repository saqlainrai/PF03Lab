#include <iostream>
using namespace std;

main(){

	system("cls");
	
	string name;
	float mmarks;
	float imarks;
	float emarks;
	
	cout<<endl;

	cout << "Your Name= ";
	cin >> name;
	cout << endl;

	cout << "Matric Marks(out of 1100)= ";
	cin >> mmarks;
	cout << endl;

	cout << "Intermediate Marks(out of 550)= ";
	cin >> imarks;
	cout << endl;

	cout << "ECAT Marks(out of 400)= ";
	cin >> emarks;
	cout << endl;

	float mmarksp;
	float imarksp;
	float emarksp;
 
	mmarksp=mmarks/1100*10;
	imarksp=imarks/550*40;
	emarksp=emarks/400*50;

	float aggregate;

	aggregate = mmarksp+imarksp+emarksp;


	cout<< "Respected "<<name<<", Your aggregate is "<<aggregate;
	



	cout<<endl;
	cout<<endl;
	cout<<"               Thank you!!!!!                   "<<endl;
	cout<<"**********************************************"<<endl;

}