#include <iostream>

using namespace std;
int main(){
	int size, arr[100],i ;
	int *ptr;
	ptr = &arr[0];
	cout << "\n Nhap kich co mang : ";
	cin >> size;
	
	for ( i = 0;i < size ;i++){
		cout <<" Nhap arr[i] = ";
		cin >> arr[i];
	}
	cout << " ----------------Firt--------------";
	cout << " \n Hien thi cac phan tu ban dau :" ;
	for ( i = 0;i < size ;i++){
		cout << arr[i] << " ";
	}
	ptr = &arr[size - 1];
	cout << "\n -----------------Behind------------";
	cout << "\n Hien thi cac phan tu mang theo chieu dao nguoc :";
	for( i = size - 1; i >= 0;i--){
		cout << *ptr << " ";
		ptr--;
	}
	return 0;
	
}
