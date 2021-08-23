//Helps a lot in garbage collection
//3types--> 1. Unique pointer--> if we create a object using a unique pointer , then no other pointer can point to that object(we can now access that object by only that unique pointer only)
#include<bits/stdc++.h>
using namespace std;
struct player{
    int x,y;
    void display(){
        cout<<x<<"  "<<y<<endl;
    }
    ~player(){   //Destructor->function which is called just before when the struct is going to be removed from the stack frame
    cout<<"player destructed";
}
};
int main(){
    unique_ptr<player> ptr1 = make_unique<player>(); //makes a unique pointer to point a player object in heap...deletion of this pointer and object will be automatically done by smart pointers!!
    ptr1->x=10;
    ptr1->y=15;
    ptr1->display();
    // 2. Shared pointer--> in this we get the access of sharing the object.
    shared_ptr<player> ptr2=make_shared<player>();
    //shared pointer maintains a reference count which tells how many objects are pointing to it...as soon as that reference count becomes zero that is deleted
    //shared pointer has use count feature that tells the reference count.
    cout<<ptr2.use_count()<<endl;
    shared_ptr<player> ptr3=ptr2;
    cout<<ptr3.use_count()<<endl; //gives output 2 because now ptr2 and ptr3 both point to same object
    // 3. Weak pointer--> It is always used with shared pointer or another weak pointer passes through it.
    weak_ptr<player> ptrw(ptr3);
    cout<<ptrw.use_count()<<endl; //does not maintain a reference count ...gives use count of passes shared pointer
    //weak pointer even does not give permission to access object members
    //weak pointer is used for solving problem of dangling pointer(which does not point to specific location or we can say points to free locations)
    //it has a expired() function which helps us to know whether the object was deleted or not
    cout<<ptrw.expired()<<endl; // gives output 0 which means false

    
    unique_ptr<int>p1=make_unique<int>(); //unique pointer pointing to int object in heap
    unique_ptr<int[]>p2(new int[9]);  //Unique pointer pointing to int array in heap
}