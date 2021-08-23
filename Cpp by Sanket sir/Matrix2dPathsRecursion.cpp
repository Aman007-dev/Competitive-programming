/*You are given a 2d matrix of dimension(n*m). You will start from top left cell and you want to go to bottom
right. At each point you can move either right or down. Print and count all possible paths.
*/ 
#include<bits/stdc++.h>
using namespace std;
int total_path=0;
void maze_path(int i,int j,int m,int n,string osf){
    //Base cases
    if(i==m-1&&j==n-1){
        total_path++;
        cout<<osf<<endl;
        return;
    }
    if(i>=m||j>=n){
        return;
    }
    maze_path(i,j+1,m,n,osf+"R");  //Right move
    maze_path(i+1,j,m,n,osf+"D");  //Left move  
}
int main(){
    //Base case- if at any stage i==m-1  and j==n-1  then we have reached the destination
    //another base case is that if i>m or j>n then return    (as we have exitted the matrix)
    //Recursive intution- We will consider a function f(i.j) that will give us path from (i,j) to (m-1,n-1)
    //and we will assume it is correct. 
    //Self Work- We will just run that function 2 functions that run from (0,0) and then inside that we recursively move it first to right and one more time call it for down wards,
    //then those will find us all the paths and we will just append r and d respectively.  
    maze_path(0,0,3,3,"");
}