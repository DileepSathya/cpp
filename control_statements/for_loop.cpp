#include<iostream>
int main(){

   int sum=0;
    for(int val=0;val<=10;++val){
        sum=sum+val;
    }
    std::cout<< "the sum of 1 to 10 is" <<sum<<std::endl;
    return 0;
}