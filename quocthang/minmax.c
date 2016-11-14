#include<iostream>
using namespace std;
main()
{
    float a,b,c,max,min;
    cout<<"Nhap vao so a"<<endl;
    cin>>a;
    cout<<"Nhap vao so b"<<endl;
    cin>>b;
    cout<<"Nhap vao so c"<<endl;
    cin>>c;
    max=a;
    if (max<b)
    max=b;
    if (max<c)
    max=c;
    cout<<"max"<<max;
}
