//Checking the number is odd or even

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n%2==0){
        cout <<"The entered number is even" << endl;

    }else{
        cout << "The entered number is odd" << endl;
    }
    return 0;
}
