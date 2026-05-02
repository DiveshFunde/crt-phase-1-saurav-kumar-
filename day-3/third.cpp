//wap that takes an integer from user as input print all the numbers from 1 to n that is divisible by 2

#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    for(int i=1;i<=a;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}

