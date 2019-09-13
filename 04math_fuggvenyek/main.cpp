#include <iostream>
#include <math.h>

#define PI  3.14
#define ADOKULCS    0.27
#define ESC 27

using namespace std;

int main()
{
    int alap=2;
    int kitevo=3;
    int hatvany=pow(alap,kitevo);
    cout<<hatvany<<endl;
    double gyok=sqrt(8);
    cout.precision(2);
    cout<<fixed<<gyok<<endl;

    const double pi=3.14;
    double t=2*4*PI;
    cout<<t;
    return 0;
}
