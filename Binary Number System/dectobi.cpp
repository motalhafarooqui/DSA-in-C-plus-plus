#include <iostream>
using namespace std;

int dectobi(int decNum){
    int ans = 0;
    int rem = 0;
    int pow = 1;
    while (decNum > 0)
    {
        rem = decNum%2;
        decNum = decNum/2;
        ans = ans + (rem*pow);
        pow = pow * 10;
    }
    return ans;
    
}

int main(){
    int decNum = 0;
    cout<<"Enter the decimal number you want to convert to binary : ";
    cin >> decNum;
    cout << "The binary number : "<< dectobi(decNum);
    return 0;
}