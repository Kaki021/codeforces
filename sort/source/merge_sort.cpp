#include<iostream>
#include<vector>
using namespace std;

void merge_sort(vector<int> &nums,int l,int r){
    if(l>=r) return;
    int mid=l+(r-l)>>1;
    merge_sort(nums,l,mid);
    merge_sort(nums,mid+1,r);


}

int main(){}
