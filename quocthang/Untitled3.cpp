#include<iostream>
using namespace std;
main()
{
    int n,x,s;
    cout<<"Nhap vao n"<<endl;
    cin>>n;

    if (n%2!=0)
        x=1;s=1;

        while (x<=n)
        {
        s=s*x;
        x=x+2;
        }

     cout<<s;
     if (n%2==0)

        x=2;s=1;
        while (x<=n)
        {
        s=s*x;
        x=x+2;
        }


}
