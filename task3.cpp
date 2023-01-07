#include <iostream>
using namespace std;

main(){

	float lbs=0.45;
	float kgs;
	float input;
	
	cout<<endl;
	cout << "Weight in Pounds(lbs)= ";
	cin >> input;
	cout << endl;
	kgs = input * lbs;

	cout<< "Weight in Kilograms will be(kgs)= "<<kgs;
	cout<<endl;

}