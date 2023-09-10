// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should rearrange the elements of nums such that the modified array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]
// Explanation:
// The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
// The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
// Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions. 
#include<iostream>
using namespace std;
#include<bits/stdc++.h> 

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> temp;
    vector<int> positive;
    vector<int> negative;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            positive.push_back(nums[i]);
        }else{
            negative.push_back(nums[i]);
        }
    }

    int i=0;
    int j=0;
    while(i<positive.size() && j<negative.size()){
        temp.push_back(positive[i]);
        i++;
        temp.push_back(negative[i]);
    }
    return temp;

        
}
int main() {
    vector<int> ans={3,1,-2,-5,2,-4};
    vector<int> temp;
    temp=rearrangeArray(ans);
    for(int i:temp){
        cout<<i<<endl;
    }
    return 0;
}
