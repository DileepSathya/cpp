#include<iostream>
double square(double length);
int main(){
    double length=6.0;
    double area=square(length);
    std::cout<<"area"<<area<<std::endl;
    return 0;

}
double square(double length){
    return length*length;
}