#include<iostream>
struct student
{
    std::string name;
    double gpa;
};
int main(){
    student s1;
    s1.name="sathya";
    s1.gpa=9.11;
    
    student s2;
    s2.name="DS";
    s2.gpa=9.00;

    std::cout<<s1.name<<'\n'<<s1.gpa<<'\n';
    std::cout<<s2.name<<'\n'<<s2.gpa<<'\n';
    
}
