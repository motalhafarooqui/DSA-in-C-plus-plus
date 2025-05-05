#include <iostream>
using namespace std;
int main() {
    int row, num;
    cout << "Enter the number of rows you want : ";
    cin >> row;
    cout << "Enter the number of stars you want : ";
    cin >> num;
    for(int i = 1; i<=row ; i++){
        for(int j = 1; j<=num; j++){
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}