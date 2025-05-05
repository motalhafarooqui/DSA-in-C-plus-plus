//Simple Calculator
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter First Number : " << endl;
    cin >> a;
    cout << "Enter Second Number : " << endl;
    cin >> b;
    cout << "The Sum is : " << (a+b) << endl;
    cout << "The Subtraction is : " << (a-b) << endl;
    cout << "The Multiplication is : " << (a*b) << endl;
    cout << "The Division is : " << static_cast<float>(a)/b << endl;
    cout << "The Modulo is : " << (a%b) << endl;
    return 0;
}