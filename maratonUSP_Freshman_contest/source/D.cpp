#include<iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int grade=0;
        cin>>grade;
        sum+=grade;
    }
    if(sum>0){
        cout<<":)";
    }else if(sum==0){
        cout<<":|";
    }else{
        cout<<":(";
    }
    return 0;
}
