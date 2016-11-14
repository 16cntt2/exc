#include<iostream>
#include<cmath>
using namespace std;
int pown(int x, int y);
int tonglt(int n,int x);
main()
{
    int n,x,kq;
    cout<<"Nhap gia tri n: "<<endl;
    cin>>n;
    cout<<"Nhap gia tri x: "<<endl;
    cin>>x;
    kq=tonglt(n,x);
    cout<<kq;

}
int tonglt(int n,int x)
{
    int result,a;
    result=0;
    for (int i=1; i<=n; i++)
    {
      result=result+ pown(x,i);
    }

    return (result);
}
int pown(int x, int y)
{
    int t=1;
    t=t*a;
}
