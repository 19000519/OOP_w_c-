//fucnction called max that takes two parameters and displays the biggest of both

#include<iostream>
using namespace std;

void max(int a, int b)
{
    if (a > b)
    {
        cout<<a <<" greater than " <<b <<endl;
    }
    else 
    {
        cout <<b <<" greater than " <<a <<endl;
    }
}

int main()
{
    int number1, number2;
    cout<<"enter two numbers" <<endl;
    cin>>number1 >>number2;

    max(number1, number2);
    return 0;
}