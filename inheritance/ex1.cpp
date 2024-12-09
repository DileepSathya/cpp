#include<iostream>
class Animal{
    public:
        void eat(){
            std::cout<<"animal eating\n";
        }
};

class dog:public Animal{
    public:
        void bark(){
            std::cout<<"dog barking\n";
        }
};

class cat:public Animal{
    public:
        void meow(){
            std::cout<<"cat meowing\n";
        }
};

int main(){
    dog d;
    cat c;
    
    c.eat();
    c.meow();
    d.eat();
    d.bark();
    return 0;

}