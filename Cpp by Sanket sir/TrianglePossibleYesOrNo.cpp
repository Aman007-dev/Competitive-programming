#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b<c && b+c<a && c+a<b){  //sum of 2 sides must be greater than third side
            cout<<"No";
        }else{
            if( a*a + b*b == c*c || b*b +c*c == a*a || c*c + a*a == b*b ){ //pythagorus theorem
                cout<<"Yes";
            }else{
                cout<<"No";
            }
        }
    }
}