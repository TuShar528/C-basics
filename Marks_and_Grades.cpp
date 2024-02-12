// TAKE PERCENTAGE BY USER AND PRINT GRADE 

// ============================================

#include<iostream>
using namespace std;
int main(){
    double a ;
    cout<<"Enter your percentage : ";
    cin>>a;
    if (a<=100 && a>=81){
        cout<<"very good";
    }
    else if ( a>=61){
        cout<<"good";
    }
    else if ( a>=40){
        cout<<"average";
    }
    else{
        cout<<"fail";
    }

}
