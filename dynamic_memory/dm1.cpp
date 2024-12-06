#include<iostream>
int main(){
    char *pGrades=NULL;
    int size;
    std::cout<<"How many grades to enter"<<'\n';
    std::cin>>size;
    //new keyword is dynamic memory allocated
    pGrades=new char[size];
    for(int i=0;i<size;i++){
        std::cout<<"Enter grades "<< i+1<<":\n";
        std::cin>>pGrades[i];
    }
    for(int i=0;i<size;i++){
        std::cout<<pGrades[i]<<"\n";
    }
    delete[] pGrades;
}