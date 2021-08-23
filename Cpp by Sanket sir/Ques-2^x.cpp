#include<iostream>
using namespace std;
int main(){
    //method1- brute force, That is multiplying and updating in a loop
    //method2- Using XOR operator, If we observe that every power of 2 is just left shift of bitwise 1, 
    int t;
    cin>>t;
    while(t--){
        int x; //power of 2
        cin>>x;
        long long int result;
        for(int i=0;i<x;i++){
            result=1<<x;   //but in question x<=10^2 ,which makes a very very big number that we can not store so we need some other method 
        }
        cout<<result<<endl;

    }
}
//For this question also it is better to use the method in a^b 