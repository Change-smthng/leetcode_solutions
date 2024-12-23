#include <iostream>
#include <vector>
#include <algorithm> // For max function

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0;
        int n = nums.size();
        for (int i = 0; i <= maxi; i++) {
            if (i == n - 1) {
                return true;
            }
            maxi = max(maxi, nums[i] + i); // Update the maximum reachable index
        }
        return false;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Input array
    vector<int> nums = {2, 3, 1, 1, 4};

    // Call the canJump function and store the result
    bool result = solution.canJump(nums);

    // Output the result
    if (result) {
        cout << "You can jump to the last index!" << endl;
    } else {
        cout << "You cannot jump to the last index." << endl;
    }

    return 0;
}
