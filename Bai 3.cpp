# include <iostream>
using namespace std;
int main(){
	int n;
	int arr[100]; int S = 0;
	cout << "Nhap so phan cua mang n = \n";
	cin >> n;
	int *ptr;
		ptr = arr;
	for(int i = 0; i < n; i++){
		cout << " Nhap a[i] = ";
		cin >> arr[i];
	}

	cout << " Mang sau khi nhap :\n ";
	for (int i = 0; i < n;i++){
		cout << arr[i] <<" ";
	}
	for (int i = 0;i < n; i++){
		S = S + *ptr;
		ptr++;
	}
	
	cout << "\nTong cac phan tu cua mang la:" << S;
	return 0;
}
