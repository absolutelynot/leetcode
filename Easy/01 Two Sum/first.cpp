// Source : https://leetcode.com/problems/two-sum/description/
// Author : youweiya
// Time   : 2019-01-04


//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//Example:
//Given nums = [2, 7, 11, 15], target = 9,
//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].


// ±©Á¦ËÑË÷
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int size = nums.size();
		vector<int> result(2);
		for (int i = 0; i < size; i++) {
			result[0] = i;
			for (int j = i + 1; j < size; j++) {
				if (nums[i] + nums[j] == target) {
					result[1] = j;
					return result;
				}
			}
		}
	}
};