#include<iostream>
using namespace std;
main ()
{
    int n;
    cout<<"Nhap vao so"<<endl;
    cin>>n;
    if (n<=3)
    {
    switch (n)
        {
         case 0:
         cout<<"Hello from the else "<<endl;
         break;
         default:
         cout<<"Hello from the second if"<<endl;

        }
        cout << "End\n";
        cout << "Start again\n";
    }
    if (n>3)
    {
    switch (n)
        {
         case 0:
         cout<<"Hello from the else "<<endl;
         break;
         default:
         cout<<"Hello from the second if"<<endl;
        }
        cout << "End again\n";
cout << "Start again\n";
    }
}
