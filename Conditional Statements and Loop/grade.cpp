//Grade Calculator for schoools

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Marks of the strudent : ";
    cin >> n;
    if (n >= 90){
        cout << "Grade - A" << endl;
        
    }else if( n>=70 && n<90){
        cout<<"Grade - B"<<endl;

    }else if( n>=60 && n<70){
        cout<<"Grade - C" << endl;

    }else if(n>=40 && n<60){
        cout << "Grade - D" << endl;

    }else{
        cout << "Failed"<<endl;
    }

    return 0;
}
