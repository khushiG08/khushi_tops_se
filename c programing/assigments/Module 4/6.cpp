#include <iostream>
using namespace std;

int main()
{
    int first, second, add, subtract, multiply;
    float divide;
    
    cout << "Please enter two number: ";
    cin >> first;
    cin >> second;
    
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;
    
    cout << endl <<"Addition = " << add;
    cout << endl <<"Subtraction = " << subtract;
    cout << endl <<"Multiplication = " << multiply;
    cout << endl <<"Division = " << divide; 

}