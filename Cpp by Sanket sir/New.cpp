#include<iostream>
using namespace std;
int main(){
    //simple pointer to a int variable
    int n;
    int *ptr=&n;
    //pointer to an array
    int a[10];
    int *arrptr=a;
    //init a variable in heap
    int *var=new int(10);
    cout<<*var<<endl;
    //init a 1d array with all zeros in heap
    int *ptrarr=new int[10]();
    for(int i=0; i<10; i++){
        cout<<ptrarr[i]<<" ";
    }
    //int a 2d array in heap
    int rows,cols;
    cin>>rows>>cols;
    int **ptr2d=new int*[rows]; //just initialises a primary array of pointers
    //now initialising secondary arrays
    for(int i=0; i<rows; i++){
        ptr2d[i]=new int[cols]; //we can also make secondary arrays of different sizes
    }









}