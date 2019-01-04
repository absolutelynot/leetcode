
// hash O(n) 12ms
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hash;
		vector<int> result(2);
		int size = nums.size();
		for (int i = 0; i < size; ++i) {
			int numberToFind = target - nums[i];
			if (hash.find(numberToFind) != hash.end()) {
				result[0] = hash[numberToFind];
				result[1] = i;
				return result;
			}
			hash[nums[i]] = i;
		}
	}
};

// 8ms
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hash;
		vector<int> result(2);
		int size = nums.size();
		for (int i = 0; i < size; i++) {
			int numberToFind = target - nums[i];
			if (hash.find(numberToFind) != hash.end()) {
				result[0] = hash[numberToFind];
				result[1] = i;
				return result;
			}
			hash[nums[i]] = i;
		}
	}
};