#include <iostream>

using namespace std;

//globális
double adokulcs=0.27;

int main()
{
    //lokális
    double egysegar=1000;
    double fizOsszeg=egysegar+egysegar*adokulcs;
    cout<<fizOsszeg;

    return 0;
}
