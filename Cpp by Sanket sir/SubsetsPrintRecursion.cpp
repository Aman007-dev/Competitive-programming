//Given an array, Print all the subsets of the given array using recursion.
#include<bits/stdc++.h>
using namespace std;
void print_subset(int* arr,int i,int n,string osf){
    if(i==n){
        cout<<"["<<osf<<"]"<<endl;
        return;
    }
    //when we choose the element to be included
    print_subset(arr,i+1,n,osf+to_string(arr[i])+" ");
    //when we choose the element is not included
    print_subset(arr,i+1,n,osf);
}
int main(){
    //Base case- for empty array there is no subset
    //Recursive intution- Suppose we have array {1,2,3}   We first write a function that turn by turn goes to every case and make different calls such that one add current value and one does not
    //Self work- f(arr,i,osf)    f(arr,i+1,osf+arr[i])and f(arr,i+1,osf)
    //i- denotes current value index   osf- output so fat
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print_subset(a,0,n,"");
}