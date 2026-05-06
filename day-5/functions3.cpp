//write a function that takes number of coffee shot return the total coffee volume if one shot =30ml


#include<iostream>
using namespace std;

int coffeeVolume(int shots){
    return shots * 30;

}

int main(){
    int shots=25;
    cout<<"enter no. of coffee shots:";
    cin>>shots;

    cout<<"enter volume of coffee:"<<coffeeVolume(shots)<<"ml"<<endl;
    return 0;
}