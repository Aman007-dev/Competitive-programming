//Every object has 2 things --> 1. properties(also called data members)- that uniquely define an object. ex. if object is product then it's name, cost discount.
//2. functionalities(also called member functions)- that can be performed by an object. ex. if object is product then if it is available for buying is it's functionality.
#include<iostream>
using namespace std;
class Product{
    public:
    string name; //data members
    int cost;

    Product(){}  //default constructor
    Product(string n,int c){  //our own constructor
        name = n;
        cost = c;
    }
    //This concept of having multiple constructors in same class is called constructor overloading.
//3 types of visibility...1-Private(default visibility) 2-Public(which can be accessed easily from any where) 3-Protected(will discuss in inheritance)
    void display(){  //we can not call this member function simply by p1.display()...as it's visibilty is currently private.
        cout<<name<<" "<<cost<<endl;
    }
    private:
    void display1(){  //we can not call this member function simply by p1.display()...as it's visibilty is currently private.
        cout<<cost<<endl;
    }
    public:
    void display2(){  //we can not call this member function simply by p1.display()...as it's visibilty is currently private.
        display1();
    }
    void setData(string n,int c){
        name=n;
        if(c<0)  cost=0;
        else    cost=c;
    }
};
int main(){
    Product p1;  //calling default constructor
    Product p2("Shirt",2000); //calling own constructor
    p1.name="iphone"; //we are able to access the name easily because we have made member variables also public if they were private then we can access them by some setter function only of that class
    p1.setData("Mobile",2000); //benifit of using setter function is that we can write our buisness logic in it(suppose here we wrote cost can not be negative)
    p2.display2();
    // where are these objects like p1 , p2 stored in memory? --> Stack
    // these both objects have same memory size even if they are constructed using different constructors
    // samesize is because the constructor that does not assigns an object some variable value gives the variables some garbage value...So even after not assigning them a value they have same size
    // But these objects memory space has a extra pointer also called this: pointer and it points to object itself
    // suppose we decalred a constructor
    /* Product(string name,int c){  
        name = name;
        cost = c;
    } */
    //here we will not be able to differentiate which name is which one...So we can use this pointer here, insteade on name = name, we can do this->name=name;
    //this means we can access member variables by using this pointer

    //Important Thumb rule
    //If accessing by pointer use arrow (->) symbol (but when pointer wants to access its own property we will use dot pointer)
    //If accessing by object use dot(.) symbol

    Product* p=&p2; //Pointer to object
    p->display(); //called display using object pointer
    (*p).setData("iphone",50000); //called set using original object(*p), as p is pointer y=to object p2, so *p is p2
}