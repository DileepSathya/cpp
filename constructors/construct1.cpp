#include<iostream>
class student{
    public:
        std:: string name;
        int age;
        student(std:: string name,int age){
            this->name=name;
            this->age=age;
        }
};
int main(){
    student s1("sathya",20);
    std::cout<<s1.name<<'\n'<<s1.age<<'\n';
    return 0;
}