#include<iostream>
using namespace std;
int main(){
    float a , b ;
    char ch;
    cin>>a;
    cin>>ch;
    cin>>b;
    switch(ch){
        case '+' :
            cout<<a+b<<endl;
            break;
        case '-' :
            cout<<a-b<<endl;
            break;
        case '*' :
            cout<<a*b<<endl;
            break;
        case '/' :
            cout<<a/b<<endl;
            break;
        default :
            cout<<"INVALID OPERATOR";
    }

}