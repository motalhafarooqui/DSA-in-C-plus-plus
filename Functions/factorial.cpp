#include <iostream>
using namespace std;

//Factorial of a number
int fact(int a){
    int f = 1;
    if (a==0)
    {
        f = 1 ;
    }else{
        for (int i = 1; i <=a; i++){
            f = f*i;
        }
    }
    return f;
}
int main(){
    int n = 0;
    cout<<"Enter the number to find its factorial : ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}