#include <iostream>
//program to calcualate the area of a rectangle
using namespace std;

int main()
{
    int length, width;
    float area;

    cout << "enter the length and width";
    cin >>length >> width;

    area = length * width;
     cout << "area = " <<area;
    return 0;
}
