#include<iostream>
class pizza{
    public:
        std::string topping1;
        std::string topping2;
    pizza(){

    }
    pizza(std::string topping1){
        this->topping1=topping1;
    }
    pizza(std::string topping1,std::string topping2){
        this->topping1=topping1;
        this->topping2=topping2;
    }
};
int main(){
    pizza p1();
    pizza p2("pepperonium");
    pizza p3("mushroom","pepper");


    std::cout<<p2.topping1<<'\n';
    std::cout<<p3.topping1<<'\n';
    std::cout<<p3.topping2<<'\n';
}