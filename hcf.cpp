#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    vector <int>v;
    for(int i=1;i<=10;i++){
        if(a%i==0&&b%i==0){
            cout<<i<<" "<<endl;
        v.push_back(i);
        }
        }    
    cout<<"display elements of vector "<<endl;
    for(int value:v){
        cout<<value<<" "<<endl;
    }int maxvalue=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>maxvalue){
            maxvalue=v[i];
        }
    }cout<<"HCF OF a and b is: "<<maxvalue<<endl;

    return 0;
}