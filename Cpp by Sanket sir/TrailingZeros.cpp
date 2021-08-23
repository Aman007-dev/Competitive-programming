#include<iostream>
using namespace std;
int Fact(int n){
    if(n==0)
    return 1;
    return n*Fact(n-1);
}
int main(){
    long long int n;
    cin>>n;
    long long int Factorial= Fact(n);
    int Zeros=0;
    long long int x=5;
    while((n/x)>=1){
        Zeros+=(n/x);
        x=x*5;
    }
    cout<<Zeros<<endl;
}