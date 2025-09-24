#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main() {
    vector<int> nums = {3,2,2,3};
    int val = 3;
    Solution sol;
    int k = sol.removeElement(nums, val);
    cout << "k = " << k << endl;
    cout << "Modified nums: ";
    for(int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}