#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 2;
    int p = 0;

    if(n==1 || n==0){
        cout<<"n is not a Prime Number"<<endl;
        return 0;
    }
    else if( n < 0){
        cout<<"Negative numbers are not counted in prime numbers"<<endl;
        return 0;
    }
    else{
    while(i < n){
        if( n % i == 0){
        p = 1;
        break;
        }
        i++;
        
    }
    }
    
    if(p == 0){
        cout<<"n is a Prime Number"<<endl;
    }
    else{
        cout<<"n is not a Prime Number"<<endl;
    }
    return 0;
}