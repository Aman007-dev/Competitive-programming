//Mirror numbers are those when rotated 180 degrees gives original number.
//Mirror Numbers example- 181,69   
//Question - Given a number n, find all mirror number of length n
//given examples- if n=2 then 
#include<bits/stdc++.h>
using namespace std;
vector<string> mirror(int n,int m){
    //base cases
    if(n==0)   return {" "};
    if(n==1)   return {"0","1","8"};
    //recursive tasks to calculate all mirror numbers of n-2
    vector<string>temp= mirror(n-2,m);
    vector<string> result;
    for(string s:temp){
        if(n!=m)   result.push_back("0"+s+"0");
        result.push_back("1"+s+"1");
        result.push_back("6"+s+"9");
        result.push_back("9"+s+"6");
        result.push_back("8"+s+"8");
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<string>result=mirror(n,n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }
}