#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int count_vowels(string str){
    int count=0;
    for(char c:str){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string str="sathya";
    int count=count_vowels(str);
    cout<<"The numebr of vowels in string : "<<count<<endl;
    return 0;
}