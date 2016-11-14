#include<iostream>
using namespace std;
long tongle(int n);
long tongle(int n)
{

    long tong=0;
    for (int i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            tong+=i;
        }
    }
    return(tong);
}
main()
{
    int n;
    cout<<"Nhap n:"<<endl;
    cin>>n;
    long result;
    result=tongle(n);
    cout<<"Tong la:"<<result;
}
