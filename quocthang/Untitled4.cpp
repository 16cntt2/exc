#include<iostream>
using namespace std;
main()
{

   int n,dem;
   cout<<"Nhap vao so can kiem tra"<<endl;
   cin>>n;
   for(int i=2;i<n;i++)
    {
     if (n%i==0)
     {
       cout<<"Do ko phai la so nguyen to"<<endl;
       break;

     }
   
   else
   {
       cout<<"Do la so nguyen to"<<endl;
       break;
   }
   }
}



