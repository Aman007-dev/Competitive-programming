#include<bits/stdc++.h>
using namespace std;
void FastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void function(int n){
    cout<<"first";
}
void function(char *n){
    cout<<"second";
}
char func(int k,char a){
    cout<<"Hey \n";
    return a;
}
int sq(int x){
    return x*x;
}
int cub(int x){
    return x*x*x;
}
int gun(int x,int (*func)(int)){
    return func(x);
}
int main(){
    FastIO();
    //Types of Pointers:

    // 1. Void Pointer -
    void *ptr=new int;  //We can allocate any type of memory to Void pointer.
    //It's main issue is we can not dereference it .
    //*ptr=5;
    //To dreference it We have to Typecaste it into a certain type.
    *(int *)ptr=5;
    cout<<*(int *)ptr<<"\n";
    //Another thing to note for Void pointer is that we can allocate and type caste different size memory
    //Like initialize or allocate with new bool but while type casting convert it into long long int.

    //2. Null Pointer -
    // We initialize it with any type of pointer but then equate it to NULL or nullptr
    int *pn1=NULL;
    int *pn2=nullptr;
    //Here also we can not dereference it.
    // cout<<*pn1<<"\n";

    // Now we see we can create Null pointer by using any of NULL or nullptr
    // But there is difference between NULL and nullptr , NULL is the integer constant equal to 0 whereas nullptr is variable of nullptr_t
    // In C++ 17 , when we print NULL and nullptr we get different outputs.
    //cout<<nullptr<<endl;
    //This gives output as "nullptr"
    cout<<NULL<<"\n"; 
    
    //We made 2 functions of same name but they take different arguments, so when we pass NULL as an argument then it gives a compile time error.
    //function(NULL);
    //But when we pass nullptr as a argument, it is passed as character pointer , so 2nd function is executed
    //Here it is giving error but check on online compiler it is perfect.
    //function(nullptr);

    //3. Dangling pointer - 
    // We know when we initialize something in heap with new, it gives us a pointer to access it. 
    int *pd1=new int;
    cout<<pd1<<endl;
    delete pd1;
    cout<<pd1<<endl;
    // We see after deleting the pointer , it is still giving same address, it is because the pointer is in stack but the address stored by is
    // in heap. We deleted it from heap but it's address is still in stack, this pointer is called Dangling Pointer.

    // 4. Wild Pointer - 
    int *pwild;  //Declared but not initialized
    //It can cause memory leak, as it contains garbage value and if it gets that data as garbage that is confidential then it can cause harm.

    //5. Function Pointer - 
    //We can use function pointer same as the function to which it is pointing.
    char (*p)(int ,char)=func;
    cout<<p(5,'A')<<endl;

    //use of Function pointer
    cout<<gun(10,cub)<<endl;
}