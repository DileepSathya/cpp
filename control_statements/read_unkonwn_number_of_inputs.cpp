#include<iostream>
int main(){
    int sum=0,val=1;
    std::cout<<"enter numbers and thn enter a non integer to abort the while loop"<<std::endl;
    while(std::cin>>val){
        sum+=val;
    }
    std::cout<<"the sum of the numbers entered is"<<sum<<std::endl;
    return 0;
}