#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        long long int sum=0,sqsum;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
            sqsum+=(x*x);
        }
        cout<<((sum*sum)-sqsum)/2<<endl;
    }
    return 0;
}