#include <iostream>
using namespace std;

int main()
{

const double artificialsweetener = 0.001;
int cans;
double SweetnerMouse;
double WeightMouse;
double Sweetneryou;
double WeightYou;

// GIOI THIEU
cout << "This program calculates how many cans of soda it will take to kill  !\n";
cout << "Each cans contains 0.001 (0.1%) of artificial sweetener\n" << endl;
//Nhap vao luong chat ngot nhan tao can de giet chet con chuot bang gam
cout << "Enter the amount of Artificial Sweetner needed to kill a mouse in grams: \n";
cin >> SweetnerMouse;
//Nhap vao khoi luong cua con chuot
cout << "Enter the weight of the mouse in grams: \n";
cin >> WeightMouse;
//Nhap vao khoi luong mong muon cua nguoi an kieng
cout << "Enter the weight of the dieter in grams at which dieter will be stopped dieting: \n";
cin >> WeightYou;

Sweetneryou= (SweetnerMouse/WeightMouse) * WeightYou;

cans = (Sweetneryou/artificialsweetener);
//So luong lon soda se giet chet nguoi an kieng
cout << "The amount cans soda would kill the dieter is: " <<cans <<"can";

return 0;


}
