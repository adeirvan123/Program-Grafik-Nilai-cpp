#include <iostream>
using namespace std;

int main () {
	int arr[10];
	cout<<"PROGRAM GRAFIK NILAI"<<endl<<endl;
	
	for (int i = 0; i<sizeof(arr)/sizeof(int); i++) {
		cout<<"Masukkan jumlah mahasiswa dengan nilai ";
				cout<<(i*10)+1<<"-"<<(i*10)+10<<": ";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"GRAFIK"<<endl<<endl;
	
		for (int i = 0; i<sizeof(arr)/sizeof(int); i++) {
			if(i==0) {
				cout<<"0-10  : ";
			}else if (i==9) {
				cout<<"91-100: ";	
			}else{
					cout<<(i*10)+1<<"-"<<(i*10)+10<<" : ";
				}
		for(int j=0; j<arr[i]; j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
