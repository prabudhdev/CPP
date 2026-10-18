#include <iostream>
using namespace std;
int main(){
    long long a;
    cout << "Enter a number :";
    cin >> a ;

    if (a % 2 == 0){
        cout << "Entered number is Even";

    }else{
        cout << "Entered number is odd";
    }
    return 0;
}