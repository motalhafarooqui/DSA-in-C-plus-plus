//Code to check whether the person is eligible for vote or not

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age of the person : ";
    cin >> age;
    if (age >= 18){
        cout << "You can vote" << endl;

    }else{
        cout << "You cannot vote" << endl;
    }

    return 0;

}
