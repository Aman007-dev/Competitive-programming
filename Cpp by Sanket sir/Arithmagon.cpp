#include<iostream>
using namespace std;
int main(){
    //Arithmagon- Polygon have some number at its vertices,then its edges have some weight allotted which are sum of the subsequent left and right vertex.
    //question- Given edge weight. Find the value of vertices?

    int x,y,z;
    cin>>x>>y>>z;
    int v1,v2,v3;
    // x+y+z=2*(v1+v2+v3)
    // v1+v2=x
    // v2+v3=y
    // v3+v1=z
    v1=((x+y+z)/2)-(y); 
    v2=((x+y+z)/2)-(z);
    v3=((x+y+z)/2)-(x);
    cout<<x<<" "<<y<<" "<<z<<endl;
}