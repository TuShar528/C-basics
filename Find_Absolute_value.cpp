// TAKE INTEGER AS AN INPUT AND PRINT ITS ABSOLUTE VALUE

// ==================================================================================================

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a integer : ";
    cin>>x;
    // if (x>0){
    //     cout<<"Absolute value of x is : "<<x;    //MEANING OF ABOSOLUTE VALUE IS LIKE GIVING ITS 
    // }
    // else{
    //     cout<<"Absolute value of x is : "<<-x;   //POSITIVE VALUE , SAME LIKE MOD IN MATHS..
    // }


    //IF YOU WANT TO CHANGE N INTO ITS ABSOLUTE VALUE PERMANANTELY

    if (x<0) x=-x;
    cout<<x;


}
