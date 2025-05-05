
//Code to find the factorial of a number entered by the user.

/*
#include <iostream>
using namespace std;
int main() {
    int i, num, fact;
    fact = 1;
    cout << "Enter the number to get its factorial : ";
    cin >> num;
    for(int i = 1; i <=num; i++){
        fact = fact*i;
    }
    cout << "Factorial : " << fact;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
    int i, num, fact;
    fact = 1;
    cout << "Enter the number to get its factorial : ";
    cin >> num;
    i = 1;
    while(i <=num){
        fact = fact*i;
        i++;
    }
    cout << "Factorial : " << fact;
    return 0;
}
