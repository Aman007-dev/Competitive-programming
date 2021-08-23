#include<iostream>
using namespace std;
int main(){
    //method1- brute force, That is multiplying and updating in a loop
    //method3(most optimised)- using dividing power upto they break down to 1 (Here used iterative can do it in recursive way also)
    int t;
    cin>>t;
    while(t--){
        long long int a,b,result=1;
        cin>>a>>b;
        while(b>0){
            if((b%2)!=0){
                result*=a;
            }
            b=b/2;
            a=a*a;
        }
        cout<<result<<endl;   
    }
    return 0;
}
//method2- Recursion, 
//Base case- if b=0  then result=1
//Recursive intution- If we assume we can calculate a^b from a function f(a,b) then lets call f(a,b-1) which makes it recursive
//Self work- return a*f(a,b-1);
//Time complexity- O(b) 
//Space complexity- O(b)   In recursive functions memory we call space complexity is the maximum space that function can take...and here function takes n call stack memory
