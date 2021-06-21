#include <iostream>
using namespace std;
int main(){
	int a = 20;
	int b = 25;
	int *ptr, *ptr1;
	ptr = &a;
	ptr1 = &b;
	int t;
	t = *ptr + *ptr1;
	cout << " Tong 2 so = " << t;
	return 0;
}
