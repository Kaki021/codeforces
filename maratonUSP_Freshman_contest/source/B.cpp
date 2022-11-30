#include<iostream>
using namespace std;


int maxPrime(int n){
    int fact=2;
    while(fact<n&&n>1){
        while(fact<n&&n%fact==0){
	    n/=fact;
	 }
        fact++;
    }
    return n;
}

int main(){
    int n=0;
    cin>>n;
    string ans;
    int maxFac=0;
    for(int i=0;i<n;i++){
        string name;
	int id;
	cin>>name>>id;
	int max_prime=maxPrime(id);
	if(max_prime>maxFac){
	    ans=name;
	    maxFac=max_prime;
	}
    }
    cout<<ans;
}
