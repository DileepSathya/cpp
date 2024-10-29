#include<iostream>
int main(){
    int sum=0,val=1;
    while(val<=10){
        sum=sum+val;
        ++val;

    }
    std::cout<<"the sum of number from 1 to 10 are"<<sum<<std::endl;
    return 0;
}