#include<iostream>
using namespace std;
main()
{
    int i,gt,n;
    cout<<"Nhap n tu ban phim "<<endl;
    cin>>n;
    gt=1;
    for(i = (n % 2==0)? 2 : 1; i <= n; i += 2)
    gt *= i;
    cout<<"Result = "<<gt;

}
