#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose pyramid pattern you want to print : ";
    cin>> n;
    int s = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout << ' ';
        }
        int s = 1;
        for (int j =0; j < i +1; j++){
            cout<<s;
            s = s + 1;
        }
        int k = i;
        for (int j = 0; j < i; j++){
            cout<<k;
            k = k -1;
        }
        cout<<endl;
        
    }
    
    return 0;
}