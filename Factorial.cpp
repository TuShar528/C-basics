//PRINT THE FACTORIAL OF A GIVEN NUMBER 'N'

    //Print the sum of numbers upto n

    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter n : ";
        cin>>n;
        int sum = 0;
        for(int i = 1 ; i<=n ; i++){
            sum+=i;
        }
        cout<<sum;
    }

===============================================

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int factorial = 1;
    for(int i = 1; i<=n ; i++){
        factorial*=i;
    }
    cout<<factorial;
}


===================================================

//PRINT THE FACTORIAL OF FIRST 'N NUMBERS

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int factorial = 1;
    for(int i = 1 ;  i<=n ; i++){
        factorial=factorial*i;
        cout<<"The factorial of "<<i<<" is : "<<factorial<<endl;
    }
}