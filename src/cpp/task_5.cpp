/*
 * Author:
 * Date:
 * Name:
 */

class Problem5 {
    void bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
public:
    bool Triplet(const vector<int> nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        bubbleSort(sortedNums);
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
            int target = -sortedNums[i];
            while (left < right) {
                int currentSum = sortedNums[left] + sortedNums[right];
                if (currentSum == target) {
                    return true;
                } else if (currentSum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return false;
    }


};
