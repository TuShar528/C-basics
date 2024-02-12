// Ques: WAP to find the highest factor of a number 'n' (other than n itself)


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER n : ";
    cin>>n;
    for(int i = n/2;i>=1;i--){      // loop run minimum time
        cout<<i<<" ";
        break;                     // used to get out of the loop
    }
}