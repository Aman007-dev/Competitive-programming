#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int Multiples_of_3=(n-1)/3 ;
        long long int Multiples_of_5=(n-1)/5 ;
        long long int Multiples_of_15=(n-1)/15 ;
        long long int sum3= (Multiples_of_3)*(6+(Multiples_of_3 -1)*3)/2;
        long long int sum5= (Multiples_of_5)*(10+(Multiples_of_5-1)*5)/2;
        long long int sum15= (Multiples_of_15)*(30+(Multiples_of_15-1)*15)/2;
        long long int result= sum3 + sum5 - sum15;
        cout<<result;
    }
}