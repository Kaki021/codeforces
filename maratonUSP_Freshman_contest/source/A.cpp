#include<iostream>
using namespace std;

int main(){
    int T=0;
    cin>>T;
    for(int i=0;i<T;i++){
    	int k,t,n;
	cin>>k>>t>>n;
	int pos=(t+n)/k;
	if(pos%2==0){
	    cout<<"Thiago\n";
	}else{
	    cout<<"Nathan\n";
	}
    }
    return 0;    
}
