// Source2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{
    int num1, sum;
    
    
    sum = 0;
    cout << "Enter a number(-1 to stop): ";
    cin >> num1;

    do {
        sum = sum + num1;

        cout << "Enter a number(-1 to stop): ";
        cin >> num1;
    }  while (num1 != -1);

    cout << "The total is " <<  sum << endl;

    return 0;


}


