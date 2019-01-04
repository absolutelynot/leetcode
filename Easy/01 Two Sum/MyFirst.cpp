// Source : https://leetcode.com/problems/two-sum/description/
// Author : youweiya
// Time   : 2019-01-04

// Brute Force
//Time complexity : O(n ^ 2)For each element, we try to find its complement by looping through the rest of array which takes O(n) time.
//Therefore, the time complexity is O(n ^ 2).
//
//Space complexity : O(1).

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