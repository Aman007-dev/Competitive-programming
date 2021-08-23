//Question- Print following pattern recursivly with absolutely no loops
    //* * * *        For n=4
    //* * *
    //* *
    //*
#include<bits/stdc++.h>
using namespace std;
void pattern_print(int i,int n){
    if(n==0)  return;
    if(i<n){
        //For printing column
        cout<<"* ";
    pattern_print(i+1,n);
    }else{
        //For printing rest of rows
        cout<<endl;
        pattern_print(0,n-1);
    }
}
int main(){
    pattern_print(0,4);
}