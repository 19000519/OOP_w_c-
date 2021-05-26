//Program to calculate simple interest
#include <iostream>
using namespace std;

int main()
{
    float amount, rate, interest;
    int time;
    cout << "enter the amount, rate and interest"  << endl;
    cin>> amount>> rate>> interest;

    interest = (amount*rate*time)/100;

    cout << "your simple interest is" <<interest;
    return 0;
}
