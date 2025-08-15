#include<iostream>
using namespace std;
int main(){

   int n;
   bool isPrime=true;
   cout<<"enter a number to check if its prime or not : ";
   cin>>n;
   if(n<=0){
    cout<<"invalid value entered";
   }else{
    for(int i=2; n>i; i++){
        if(n%i==0){
        isPrime=false;
        break;
    }
   }
    }
    if(isPrime==true){
        cout<<"entered number is Prime.";
    } 
    else{
        cout<<"entered value is not prime";
    }
    return 0;
}
