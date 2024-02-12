// Ques: WAP to find the highest factor of a number 'n' (other than n itself)
// =============================================================================

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // int f = 1;     USED TO STORE HIGEST FACTOR OF N
    for ( int i = 1 ; i <= n ; i++ ){
         if (n%i==0)  //f=i;
         cout<<i<<" ";

    }
    // cout<<f<<endl;
}



//QUE 2 -> write a code to print hcf b/w 2 numbers

#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    for(int i = 1;i<=b;i++){
        if(a%i==0 && b%i==0){
            cout<<"hcf : "<<i<<endl;
        }
    }
}