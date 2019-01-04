// Source : https://leetcode.com/problems/two-sum/description/
// Author : youweiya
// Time   : 2019-01-04

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