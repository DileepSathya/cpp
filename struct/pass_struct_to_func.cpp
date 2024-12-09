#include<iostream>
struct student
{
    std::string name;
    double gpa;
};
void printstu(student &stu);
int main(){
    student s1;
    s1.name="sathya";
    s1.gpa=9.11;
    
    student s2;
    s2.name="DS";
    s2.gpa=9.00;
    printstu(s1);
    return 0;
    
}
void printstu(student &stu){
    std::cout<<stu.name<<'\n'<<stu.gpa<<'\n';

}
