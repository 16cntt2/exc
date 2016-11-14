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
    cout<<"Max la: "<<max<<endl;
    min=a;
    if (min>b)
    min=b;
    if (min>c)
    min=c;
    cout<<"Min la: "<<min<<endl;


}
