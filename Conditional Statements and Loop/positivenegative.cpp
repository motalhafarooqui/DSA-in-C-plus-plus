
//Code for checking if a number is positive or negative

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if (n>=0){
        cout << "The entered number is positive." << endl;

    } else{
        cout << "The entered number is negative." << endl;
    }

    return 0;
}