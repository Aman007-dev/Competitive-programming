// THIS pointer
// What happens when a object is created in memory (considering any memory like stack, heap etc?
//  Firstly a certain block of memory is given to the object, then memory is acclocated according to object, alongside a property is attached 
 // to the object called THIS pointer. This special pointer stores its own address.
 #include<bits/stdc++.h>
 using namespace std;
 void FastIO(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
 }
class Product {
private: // access modifier 1. public 2. private 3. protected
    std::string name;
    std::string desc;
    int price;
    float discount;

    
public:
    void set_name(std::string name) {
        this->name = name;   //Here , we could have just written name=name, but this pointer helps us.
    }    
    void set_desc(std::string d) {
        desc = d;
    }  
    void set_price(int p) {
        if(p <= 0) {
            std::cout<<"Invalid price";
            return;
        }
        price = p;
    }  
    void set_discount(int d) {
        discount = d;
    }
    void display() {
        std::cout<<"Name: "<<name<<"\n"<<"Desc: "<<desc<<"\n"<<"Price "<<price<<"\n";
    }

    Product* get_address() {
        std::cout<<sizeof(this)<<"\n";
        return this;  
    }
    // We can use pointers as "ptr-> "to access its functions and other way is "(*ptr). " , these both will do same thing.
};

int main(int argc, char const *argv[]) {
    Product iphone;
    iphone.set_name("I Phone 12");
    iphone.set_desc("Lorem ipsum");
    iphone.set_price(100000);
    iphone.set_discount(10.0);
    iphone.display();

    std::cout<<&iphone<<"\n";
    std::cout<<iphone.get_address()<<"\n";

    return 0;
}