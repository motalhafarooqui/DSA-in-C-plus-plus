//Find character lowercase or uppercase

#include <iostream>
using namespace  std;
int main() {
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    int num;
    num = int(ch);
    if(num>=65 && num<=90){
        cout<< "The entered character is uppercase" << endl;

    }else if(num>= 97 && num <= 122){
        cout<< "The entered character is lowercase" << endl;
    }else{
        cout << "The entered character is not the part of alphabet" << endl;
    }


    return 0;
}