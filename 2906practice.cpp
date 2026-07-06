//Give a non-empty array of integers nums, every element apperence except for one. find that single one. you are iplement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>  
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans ^= num;
        }
        return ans;
    }
};
int main() {
    Solution s;

    vector<int> nums = {4, 1, 2, 1, 2};

    cout << s.singleNumber(nums);

    return 0;
}

//Given an array nums of size n. return the majority element. The majority elememt is the element that appears more than Ln/2J times. You may assume that the majority element always exists in the array.

#include<iostream>
#include<vector>
using namespace std;

class solution {
public:
    int majorityElement(vector<int>&nums){
        int candidate =0;
        int count =0;
        for(int num:nums){
            if(count == 0){
               candidate = num;
            }
            if(num == candidate){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};
int main(){
     solution s;
     vector<int> nums = {4, 1, 2, 1, 1};

    cout << s.majorityElement(nums);

    return 0;
}
//reverse
#include<iostream>
#include<vector>
using namespace std;

