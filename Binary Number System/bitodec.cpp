#include <iostream>
using namespace std;

int BiToDec(int biNum){
    int rem = 0;
    int ans = 0;
    int pow = 1;
    while (biNum > 0)
    {
        rem = biNum % 10;
        biNum = biNum / 10;
        ans = ans + (rem*pow);
        pow = pow*2;
    }
    return ans;
}

int main(){
    int biNum = 0;
    cout<<"Enter the binary number you want to convert to binary : ";
    cin >> biNum;
    cout << "The decimal number : "<< BiToDec(biNum);
    return 0;
}