#include<iostream>
using namespace std;
int main(){   
    int n=3456;
    int last=n%10;
    n=n/10;
    int secondLast=n%10;
    n=n/10;
    int secondDigit=n%10;
    n=n/10;
    int First=n;
    cout<<last<<secondLast<<secondDigit<<First<<endl;  

    
}