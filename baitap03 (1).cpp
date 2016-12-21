#include <iostream>
#include <fstream>
using namespace std;
int tinhngay(int monthyear[]);
int main()
{
    ifstream fi;
    ofstream fo;
    fi.open("baitap03.inp");
    fo.open("baitap03.out");
    int monthyear[2];
     for (int i=0; i<2; i++)
    {
        fi>>monthyear[i];
    }

    cout<<monthyear[0]<<"  "<<monthyear[1];
    fo<<tinhngay(monthyear);
    fi.close();
    fo.close();
}
int tinhngay(int monthyear[])
{
    int day;
    switch(monthyear[0])
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            day=31;
            break;
        case 2:
            if((monthyear[1]%400==0) || ((monthyear[1]%4==0) && (monthyear[1]%100!=0)))
                day=29;
            else
                day=28;
            break;
        default:
            day=30;
            break;
    }
    return day;
}
