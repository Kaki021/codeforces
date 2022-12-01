#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void exchange(vector<int> &nums,int l,int m,int r){
    reverse(nums.begin()+l,nums.begin()+m+1);
    reverse(nums.begin()+m+1,nums.begin()+r+1);
    reverse(nums.begin()+l,nums.begin()+r+1);
}

void merge_sort(vector<int> &nums,int l,int r){
    cout<<l<<" "<<r<<endl;
    if(l>=r) return;
    int mid=l+((r-l)>>1);
    merge_sort(nums,l,mid);
    merge_sort(nums,mid+1,r);
    int i=l,j=mid+1;

    /*原地排序*/
    while(i<j&&j<=r){
        while(i<j&&nums[i]<=nums[j])i++;
        int index=j;
        while(j<=r&&nums[j]<nums[i])j++;
        exchange(nums,i,index-1,j-1);
    }


}

int main(){
    int n=0;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    merge_sort(nums,0,n-1);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
