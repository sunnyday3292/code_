#include <iostream>
using namespace std;;
int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s3=="FizzBuzz"){
        cout<<stoi(s2)+2;
    }
    else if(s3=="Buzz"){
        if(s2=="Fizz") cout<<stoi(s1)+3;
        else if((stoi(s2)+2)%3==0) cout<<"Fizz";
        else cout<<stoi(s2)+2;
    }
    else if(s3=="Fizz"){
        if(s2=="Buzz") cout<<stoi(s1)+3;
        else if((stoi(s2)+2)%5==0) cout<<"Buzz";
        else cout<<stoi(s2)+2;
    }
    else{
        if((stoi(s3)+1)%15==0) cout<<"FizzBuzz";
        else if((stoi(s3)+1)%5==0) cout<<"Buzz";
        else if((stoi(s3)+1)%3==0) cout<<"Fizz";
        else cout<<stoi(s3)+1;
        
    } 
    
}