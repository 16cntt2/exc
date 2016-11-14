#include <iostream>
#include<stdlib.h>
using namespace std;
main()
{
 int i, j, tich;
 tich = 0;
 for (i = 2; i <= 9; i++)
 {
  cout<<"bang cuu chuong "<< i <<" la : \n";
  for (j = 1; j <= 9; j++)
  {
   tich = i*j;
   cout<<i <<"x"<<j <<"="<<tich<<"\n";
  }
  cout<<"\n";
 }
 system("pause");
}
