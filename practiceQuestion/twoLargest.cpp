#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout << "Enter the number :";
    cin  >> a >> b ;

    if(a > b ){
        cout << "a is largest number";
    }else if(b > a){
        cout << "b is the largest number";

    }else{
        cout << "Both are equal";
    }
    return 0 ;
}