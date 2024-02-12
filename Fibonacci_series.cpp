// Que : Print the fibonacci series upto 'n' . 
// ---------------------------------------------------

// BY FOR LOOP ->

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a = 0 , b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1;i<n;i++){
        int next = a + b;
        a=b;
        b=next;
        cout<<next<<" ";
    }
}

================================================================

// BY WHILE LOOP ->

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n : ";
    cin>>n;
    int a = 0 , b = 1;
    cout<<a<<" "<<b<<" ";
    int i = 2;
    while(i<n){
        int next = a+b;
        a = b;
        b = next;
        cout<<next<<" ";
        i++;
        
    }
}