#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose inverted triangle pattern you want to print : ";
    cin>> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << ' ';
        }
        for (int j = 0; j < n-i; j++)
        {
            char ch = 'A';
            char ch2 = ch + i;
            cout<<ch2;
        }
        cout<<endl;
    }
    return 0;
}