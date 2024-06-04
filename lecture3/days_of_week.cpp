#include <bits/stdc++.h>
using namespace std;

int main() {
	int number;
	cin>>number;

	// if(number == 1) {
	// 	cout<<"Mon";
	// }else if(number == 2) {
	// 	cout<<"Tue";
	// }else if(number == 3) {
	// 	cout<<"Wed";
	// }else if(number == 4) {
	// 	cout<<"Thu";
	// }else if(number == 5) {
	// 	cout<<"Fri";
	// }else if(number == 6) {
	// 	cout<<"Sat";
	// }else if(number == 7) {
	// 	cout<<"Sun";
	// }else {
	// 	cout<<"You enetered invalid number";
	// }


	switch(number) {
		case 1:
			{
				cout<<"Mon";
				break;
			}

		case 2:
			{
				cout<<"Tue";
				break;
			}
		case 3:
			{
				cout<<"Wed";
				break;
			}
		case 4:
			{
				cout<<"Thu";
				break;
			}
		case 5:
			{
				cout<<"Fri";
				break;
			}
		case 6:
			{
				cout<<"Sat";
				break;
			}
		case 7:
			{
				cout<<"Sun";
				break;
			}
	}

	return 0;
}
