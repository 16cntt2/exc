#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream  in;
    ofstream out;

    in.open("baitap01.inp");
    out.open("baitap01.out");
    int n;

    in>>n;
    for (int i=n-1; i>=1; i--)
    {
        if ((n%i==0)&&(i%2!=0))
        {
            cout<<i;
            out << i << endl;
            break;
        }
    }
    out.close();
    in.close();
}
