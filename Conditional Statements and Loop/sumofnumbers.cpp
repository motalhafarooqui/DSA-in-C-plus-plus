//Code to find the sum of n natural numbers

#include <iostream>
using namespace std;
int main() {
    int a, sum, i;
    i = 1;
    sum = 0;
    cout << "Enter the number of natural numbers till which you wamt to add from 1 : " ;
    cin >> a;
/*   for(int i=1; i<=a; i=i+1){
        sum = sum + i;
        
    }
    cout<<"The sum is : "<< sum << endl;
*/
    while(i<=a){
        sum = sum + i;
        i = i+1;

    }
    cout << "Sum is : " << sum;

    return 0;
}


