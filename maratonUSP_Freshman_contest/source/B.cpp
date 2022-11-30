#include<iostream>
#include<vector>
using namespace std;

vector<int> primes;

bool isPrime(int n){ 
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int maxPrime(int n){
   int ans=1;
    for( auto x:primes){
        while(n%x==0){
            ans=max(ans,x);
            n/=x;
        }
    }
    return max(n,ans);
}

int main(){
   for(int i=2;i<10010;i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
   }
   int n=0;
   cin>>n;
   int maxFact=-1;
   string ans="null";
   for(int i=0;i<n;i++){
        string name;
        int id;
        cin>>name>>id;
        int max_prime=maxPrime(id);
        if(max_prime>maxFact){
            ans=name;
            maxFact=max_prime;
        }
   }
   cout<<ans<<endl;
}
