#include <iostream>
using namespace std;
int main(){
	int size,them;
	int newsize;
	cout << "Nhap kich thuoc ban dau cua mang: ";
	cin >> size;
	cout << endl;
	int *arr = new int[size];
	cout << "Kich thuoc ban dau: " <<size <<endl;
	cout << " ------ Nhap mang ------- " << endl;
	for(int i = 0;i < size;i++){
		cout << "Nhap arr[i] = ";
		cin >> *(arr + i);
	}
	cout << " -------- size moi -------" << endl;
	cout << " Nhap size moi cua mang :\n ";
	cin >> newsize;
 	cout << " \n ";
	int *resize = new int[newsize];
	for(int i = 0;i < newsize;i++){
		resize[i] = arr[i];
	}
	delete[] arr;
	// them phan tu va mang 
	cout << " ----------- Them Phan tu ---------------" << endl;
	do
	{
		cout << " Nhap so phan tu muon them vao mang :";
		cin >> them;
		cout << " \n ";
	}while( them > ( newsize - size));
	cout << " Nhap gia tri cua phan tu them vao mang : ";
	for(int i = size; i < (size + them); i++){
		cout << " Nhap arr[i] = ";
		cin >> *(resize + i);
		cout << "\n ";
	}
	
	cout << " Mang sau khi them phan tu la : ";
	for(int i = 0; i < (size + them);i++)
	{
		cout << *(resize + i) << " ";
	}
	cout << endl;
	//Xóa phan tu mang
	cout << " --------- Xoa Phan tu -------------" << endl;
	int xoa;
	cout << " Nhap vi tri cua phan tu muon xoa trong mang : " ;
	cin >> xoa;
	int check = 0;
	for(int i = 0; i < (size + them); i++){
		if(resize[i] == resize[xoa]){
			check = 1;
		}
		if(check == 1)
		{
			resize[i] = resize[i + 1];
		}
	}
	if(check == 1){
		size + them--;
	}
	cout << " Mang sau khi xoa 1 phan tu la :";
	for (int i = 0; i < (size + them);i++){
		cout << *(resize + i) << " ";
	}
	cout << "\n";
	// tim vi tri cua phan tu mang bat ki khi nguoi dung muon tim kiem
	int z , check1 = 0;
	cout << " Nhap phan tu muon tim kiem o trong mang z = ";
	cin >> z;
	for(int i = 0; i < (size + them);i++){
		 if( z == resize[i]){
		 	cout << " vi tri cua phan tu " << z << " trong mang la " << i << endl;
			 check1 = 1;
		}
	}
	if( check1 == 0)
	{
		cout << " Khong tim thay phan tu trong mang";
	}
	return 0;
}
