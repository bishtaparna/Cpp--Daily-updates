// Program to generate tables of an integer using for loop

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter Integer: " <<endl;
    cin >> num;

    for(int i = 1; i<= 10; ++i)
    {
        cout << num <<" * "<< i << " = " << num * i << endl;
    }
}
