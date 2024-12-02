#include<iostream>
void bakepizza();
void bakepizza(std::string toopings);
int main(){
    bakepizza();
    bakepizza("onion");
}
void bakepizza(){
    std::cout<<"here is ur pizza\n";
}
void bakepizza(std::string toopings){
    std::cout<<"here is ur pizza with"<<toopings<<std::endl;
}