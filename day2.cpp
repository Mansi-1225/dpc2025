#include<iostream>
using namespace std;
int main(){
    int arr[9]={1, 2, 3, 5, 6, 7, 8, 9, 10};
    for(int i=1; i<=10; i++){
        bool missingElement =false;
        for(int j=1; j<9; j++){
            if(arr[j]==i){
            missingElement =true;
            break;
            }
        }
        if(missingElement==false){
            cout<<"missing element is : "<<i;
        }
    }
return 0;
 }        
