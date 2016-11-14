#include<iostream>
using namespace std;
main ()
{
    int a,b;
    float x;
    cout << "Giai phuong trinh ax+b>0"<<endl;
    cout<<"Nhap vao a va b"<<endl;
    cin >> a>>b;
    if (a==0)
    cout<<"Phuong trinh luon dung voi moi x"<<endl;
    if (a>0)
    x=-b/a;
    cout<<"Phuong trinh co nghiem la: x>"<<x<<endl;
}
