#include<iostream>
using namespace std;
main()
{
 int i,n,sum;
    cout<<"Nhap vao so nguyen n: "<<endl;
    cin>>n;
    sum=0;
    for(i=1;i<=(2*n+1);i=i+2)
        sum=sum+i;
    cout<<"result= "<<sum<<endl;
}
