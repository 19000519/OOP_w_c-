#include <iostream>

using namespace std;

int main()
{
    float a , b , c ,d ,e , sum , avg;
    cout << "enter 5 fraction numbers" << endl;
    cin>> a >> b >>c >>d >>e;

    sum = a + b+c+d+e;
    avg = sum/5;

    cout<< "sum = " <<sum <<endl;
    cout<< "avg = " <<avg <<endl;
    return 0;
}
