#include<iostream>
class Human{
    public:
    std::string name;
    int age;
    void eat(){
        std::cout<<"This person eating"<<'\n';
    }
    void drink(){
        std::cout<<"This person drinking"<<'\n';
    }
};
int main(){
    Human h1;
    h1.name="sathya";
    h1.age=20;
    h1.eat();
    h1.drink();
    return 0;
}
