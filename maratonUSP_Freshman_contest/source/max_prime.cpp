#include<iostream>
using namespace std;

int main(){
    int n=1;
    while(1){
    	cin>>n;
    	int fact=2;
    	int init=n;
    	while(fact<n&&n>1){
    	    while(fact<n&&n%fact==0){
	        n/=fact;
	    }
	    fact++;
    	}
    	cout<<n<<endl;
    }
}

