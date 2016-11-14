#include<iostream>
using namespace std;
int main ()
{
int n,i,j;
cout<<"nhap chieu cao tam giac\n";
cout<<"You should enter a number <=50\n";
cin>>n;
for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
        cout<<"*";
        cout<<"\n";

}
return 0;
}
