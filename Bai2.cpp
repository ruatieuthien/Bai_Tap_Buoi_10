#include <iostream>
#include <stdio.h>
using namespace std;
void Swap2 (int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int x, y;
	cout << "\n Nhap x =";
	cin >> x;
	cout << "\n Nhap y = ";
	cin >> y;
	swap(x, y);
	cout << " \n Sau khi trao doi la :"	;
	cout << "\n So thu nhat x =" << x;
	cout << "\n So thu hai y =" << y;
	return 0;
}
