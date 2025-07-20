#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    // printf("hehe");
    vector<int> nums = {-1,2,-3,1,-2,3};
    int n = nums.size();
        int pos = 0, neg = 1;
        while(pos < n && neg < n) {
            if(nums[pos] >= 0) pos += 2;
            else if(nums[neg] < 0) neg += 2;
            else {
                int temp = nums[pos];
                nums[pos] = nums[neg];
                nums[neg] = temp;
            }
        }
        for(auto i: nums){
            cout << i << " ";
        }
}
int main() {

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}