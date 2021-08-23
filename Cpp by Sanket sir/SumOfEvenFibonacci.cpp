#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int N;
        cin>>N;
        long long int sum=0;
        int a=0,b=2,c=2;
        while(c<=N){
            sum+=c;
            c=(4*b)+a;
            a=b;
            b=c;
        }
        cout<<sum<<endl;
    }
}