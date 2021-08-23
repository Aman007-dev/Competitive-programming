#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    // bruteforce
    for(int i=2;i<number;i++){
        if(i%number==0){
            cout<<"Number is prime";
            break;
        }
    }
    cout<<"Number is not prime";

    // Small optimisation is that we can run loop of checking prime from 2 to just root of number as after it has no factor
    // for(int i=2;i<number;i++){}

}