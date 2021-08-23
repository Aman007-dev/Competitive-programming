//You are given N numbers where N is a odd.Among those N numbers every number appears twice only one number appears once, Find the unique number.
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int result=0;
    while(N--){
        int num;
        cin>>num;
        result^=num;
    }
    cout<<result<<endl;
}
//Another method is first sorting the array then checking for the unique number but that is not that optimal as above method.