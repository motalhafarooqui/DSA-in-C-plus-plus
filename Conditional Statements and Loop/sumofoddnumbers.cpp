#include <iostream>
using namespace std;
int main() {
    int a, sum, i;
    i = 1;
    sum = 0;
    cout << "Enter the number of natural numbers till which you wamt to add odd from 1 : " ;
    cin >> a;
    /*for(int i=1; i<=a; i=i+2){
        sum = sum + i;
        
    }
    cout<<"The sum is : "<< sum << endl;
*/
    while(i<=a){
        sum = sum + i;
        i = i+2;

    }
    cout << "Sum is : " << sum;
    return 0;
}