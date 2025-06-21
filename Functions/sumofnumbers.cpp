#include <iostream>
using namespace std;

//sum of n numbers
int sum(int a){
    int s = 0;
    for (int i = 1; i <=a; i++)
    {
        s = s + i;
    }
    
    return s;
}
int main(){
    int n = 0;
    cout<<"Enter the number to find its sum from 1 to itself : ";
    cin>>n;
    cout<<"The sum from 1 to "<<n<<" is "<<sum(n);
    return 0;
}