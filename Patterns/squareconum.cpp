#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose square you want to print : ";
    cin>> n;
    int s = 1;
    for(int i = 1; i<=n; i++ ){
        for(int j = 1; j<=n; j++){
            cout<<s;
            s = s +1;
        }
        cout<<endl;
    }
    return 0;
}
