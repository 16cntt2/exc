#include<iostream>
using namespace std;
main()
{
 double a,b,c,d,i,result;
 char lc;
    cout<<"Nhap vao so a"<<endl;
    cin>>a;

    cout<<"Nhap vao so b"<<endl;
    cin>>b;
    cout<<"Nhap vao so c"<<endl;
    cin>>c;
    cout<<"Nhap vao so d"<<endl;
    cin>>d;

    cout<<"Nhap vao lua chon cua ban"<<endl;
    cin>>lc;
    switch (lc)
    {
        case '+':
            cout <<(a/b+c/d)<<endl;
        break;
        case '-':
            cout<<(a/b-c/d);
        break;
        case '*':
            cout<<(a/b*c/d);
        break;
        case '/':
            cout <<((a/b)*(d/c))<<endl;
        break;

    }

}
