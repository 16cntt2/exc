#include<iostream>
using namespace std;
main()
{
    int n;
    cout <<"Nhap n"<<endl;
    cin>>n;
    if (n<=0)
    {
        switch(n)
        {
            case 0:
            cout<<"medium";
            break;
            default:
            cout<<"small";
        }
    }
    else cout<<"Large";
}
