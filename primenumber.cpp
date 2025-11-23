#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
//not an optimed code
/*
time complexity o(n)
space complexity o(1)*/
/*int main(){
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}*/
//optimed code
int main(){
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}