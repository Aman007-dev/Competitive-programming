#include<iostream>
#include<vector>
using namespace std;
void print(int v){
    cout<<"The value of v is"<<v<<endl;
}
void for_each(vector<int> &v, void(*func)(int)){
    for(int value:v){
        func(value);
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(6);
    int x=5;
    for_each(v, [&x](int v) {cout<<"value from lamda"<<v<<","<<x<<endl;});
    return 0;
}
//Must read from official cpp reference website
//Pre requisites is function pointer must