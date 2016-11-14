#include <iostream>
using namespace std;
int main( )
{
   const double INCREASE = 0.076*2;
   double old_salary, new_salary,salary_increase;
   //Nhap vao muc luong ban dau
   cout << "Enter original salary:\n";
   cin >> old_salary;


   salary_increase = (old_salary*INCREASE);
   new_salary = old_salary+salary_increase;

   // xuat ra luong moi cua nguoi do trong 1 nam
   cout << "The new annual  salary is " << new_salary
        << " dollars a year.\n";
   //Xuat ra luongm moi cua nguoi do trong mot thang
   cout << "The new monthly salary is " << (new_salary/12)
        << " dollars a month.\n";

   return 0;
}
