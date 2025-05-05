//Code to find the sum of even numbers which are between 1 and n.

#include <iostream>
using namespace std;
int main() {
    int a, evenSum, i;
    i = 2;
    evenSum = 0;
    cout << "Enter the number of natural numbers till which you want to add even from 1 : " ;
    cin >> a;
    /*for(int i=1; i<=a; i=i+2){
        sum = sum + i;
        
    }
    cout<<"The sum is : "<< sum << endl;
*/
    while(i<=a){
        evenSum = evenSum + i;
        i = i+2;

    }
    cout << "Sum is : " << evenSum;
    return 0;
}
