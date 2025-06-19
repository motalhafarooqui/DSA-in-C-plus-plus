#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose triangle pattern you want to print : ";
    cin>> n;
    
    for(int i = 1; i<=n; i++ ){
        int s = 1;
        for(int j=1; j<=i; j++){
            cout<<s;
            s = s+1;
        }
        cout<<endl;
        
    }
    return 0;
}