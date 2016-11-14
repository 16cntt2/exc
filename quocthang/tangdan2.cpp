#include<iostream>;
using namespace std;
 main ()
{
int a,b,c,max,min;
    cout<<"Nhap a :";
    cin>>a;
    cout<<"Nhap b :";
    cin>>b;
    cout<<"Nhap c :";
    cin>>c;
    min=a;
    if (min>b)
    min=b;
    if (min>c)
    min=c;
    max=a;
    if (max<b)
    max=b;
    if (max<c)
    max=c;
    cout<<"Sap xep tang dan"min<<" "<<(a+b+c)-(max+min)<<" "<<max<<endl;
}
