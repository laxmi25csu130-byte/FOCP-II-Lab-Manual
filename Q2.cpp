#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Please enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    cout << "The average of three numbers is : " << (num1 + num2 + num3) / 3;
    return 0;
}