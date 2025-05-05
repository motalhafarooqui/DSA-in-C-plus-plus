//Code to find whether a number is positive or negative using ternary statement.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter Any number : ";
    cin >> n;
    cout<<(n>=0 ? "Positive" : "Negative")<<endl;

    return 0;
}
