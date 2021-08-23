#include<iostream>
using namespace std;
void hello(){
    cout<<"Hello World";
}
void hello1(){
    cout<<"Hello World";
}
int fun(int n){
    cout<<"Fun with"<<n<<endl;
    return n;
}
int main(){
    void (*ptr)()=hello; //creates a pointer named ptr which stores address of function hello
    //pointer was of void because the function it was pointing to was also of void type

    // if we just write ptr --> it gives address of function whereas, ptr() calls tye function
    ptr();
    auto ptr1=hello1; // auto keyword which we can use to make writing func pointer easy
    //when ititialzing func ptr using & withfunction name is optional

    //func ptr does not behave like normal pointers as functions are not stored in stack or heap
    cout<<ptr<<" "<<*ptr<<endl; //as it returns 1, tells us that this pointer points to a function

    int(*ptrint)(int)=fun; //init func ptr to function fun which takes an argument of type int and return value of type int
    ptrint(10); //calling function fun using its ptr and giving argument 10
}