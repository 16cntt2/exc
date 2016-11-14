#include <iostream>
using namespace std;

int main ()
{
   // Khai bao bien cuc bo:


   switch(hocluc)
   {
   case 'A' :
      cout << "Gioi!" << endl;
      break;
   case 'B' :
   case 'C' :
      cout << "Kha" << endl;
      break;
   case 'D' :
      cout << "Trung binh" << endl;
      break;
   case 'F' :
      cout << "Phai hoc lai!!" << endl;
      break;
   default :
      cout << "Gia tri khong hop le" << endl;
   }
   cout << "Hoc luc cua ban la " << hocluc << endl;

   return 0;
}
