// TAKE POSITIVE INTEGER INPUT AND TELL IF ITS DIVISIBLE BY 5 AND 3

// ===================================================================

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive number : ";
    cin>>x;
    if (x%5==0 && x%3==0){
        cout<<x<<" is divisible by both 5 and 3";
    }
    else {
        cout<<x<<" is not divisible by both 5 and 3";
    }
}
