#include <iostream>
using namespace std;

//sum of digit numbers
int sumdigit(int num){
    int sum = 0;
    while (num > 0)
    {
        int rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    return sum;
    
}
int main(){
    int n = 0;
    cout<<"Enter the number to find its sum of digits : ";
    cin>>n;
    cout<<"The sum of digits of the number "<<n<<" is "<<sumdigit(n)<<'.';
    return 0;
}