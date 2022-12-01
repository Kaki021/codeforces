#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double x,y;
    double v1,v2;
    cin>>x>>y>>v1>>v2;
    double dsc=sqrt(pow(x/2,2)+pow(y,2));
    cout<<setprecision(15)<<fixed<<max(v1,dsc*v1/(2*x-dsc))<<endl;
    return 0;
}
