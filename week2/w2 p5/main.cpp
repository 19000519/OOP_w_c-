#include <iostream>

using namespace std;

int main()
{
    float degree, farhenheit, constant = (9/5);

    cout << "enter a degree centigrade value" << endl;
    cin>> degree;

    farhenheit = (degree * constant) + 32;

    cout << "your conversion to farhenheit is " << farhenheit;

    return 0;
}
