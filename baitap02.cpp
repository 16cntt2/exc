#include <iostream>
#include<fstream>
using namespace std;


int Sum(int N)
{
    int S = 0;
    while (N > 0)
    {
        int t = N % 10;

        S = S + t;

        N = N / 10;
    }
    return S;
}

int main()
{
    ifstream inp;
    ofstream out;
    inp.open("baitap02.inp");
    out.open("baitap02.out");
    int N;

    inp>>N;

    int result = Sum(N);
    out<<result;
    out.close();
    inp.close();

}
