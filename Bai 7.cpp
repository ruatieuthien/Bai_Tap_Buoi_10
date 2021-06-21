#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    int luachon, k = 10, i = 0;
    fstream f;
    string* hovaten=new string[100];
    float* toan = new float[100];
    float* ly = new float[100];
    float* hoa = new float[100];
    float* dtb = new float[100];
    char* xeploai = new char[100];
    // nhap sinh vien
    do
    {
        cout << "nhap danh sach sinh vien : \n";
        for ( i = i; i < k; i++)
        {
            cout << "ho va ten : ";
            cin >> *(hovaten + i);
            cout << " ";
            cout << " diem toan = ";
            cin >> *(toan + i);
            cout << " ";
            cout << " diem ly = ";
            cin >> *(ly + i);
            cout << " ";
            cout << " diem hoa = ";
            cin >> *(hoa + i);
            cout << " ";
            *(dtb + i) = (*(toan + i) + *(ly + i) + *(hoa + i)) / 3;
            // xep loai sinh vien 
            if (*(dtb + i) >= 9)
            {
                *(xeploai + i) = 'A';
            }
            else if (*(dtb + i) >= 7 && *(dtb + i) < 9)
            {
                *(xeploai + i) = 'B';
            }
            else if (*(dtb + i) >= 5 && *(dtb + i) < 7)
            {
                *(xeploai + i) = 'C';
            }
            else
            {
                *(xeploai + i) = 'D';
            }
        }
        return 0;
}
}
