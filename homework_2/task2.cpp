#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size();
    while (l < r){
        int mid = (l+r) / 2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] >= target)
            r = mid;
        else
            l = mid+1;}
return -1;
}

int main(void){
    int n, key; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    cin>>key;
    if(search(v, key) == -1)
        cout<<"false";
    else
        cout<<"true";

    return 0;
}
