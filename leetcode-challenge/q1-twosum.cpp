/*

https://leetcode.com/problems/two-sum/
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> standardSolution(vector<int>& nums, int target) {
    // Time complexity: O(n2)
    vector<int> v;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
}

vector<int> advancedSolution(vector<int> &nums, int target) {
    // Time complexity: O(n)
	unordered_map<int, int> hash;
	for (int i = 0;; ++i) {
        // In this question, we need to find two numbers that sum to the target
        // By using hashmap, store all past values in the hash table
        // Then, iterate through the elements in vector. And check if the sum of both numbers matched.
        // Case 1: if the sum of the two numbers is equal to the target, then we are done
        // Case 2: if the sum of the two numbers is not equal to the target, add numbers to the hash table until we find the target.
        auto it = hash.find(target - nums[i]);
        
        if (it != hash.end()) 
            return vector<int> {i, it->second};
            
        hash[nums[i]] = i;
    }
}

int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = standardSolution(nums, target);
    for (int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    vector<int> advancedResult = advancedSolution(nums, target);
    for (int i=0; i<advancedResult.size(); i++){
        cout << advancedResult[i] << " ";
    }
    cout << endl;
}