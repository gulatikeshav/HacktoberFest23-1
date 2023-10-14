/*
Leetcode 26. Remove Duplicates From Sorted Array

  Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
  The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

  Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

  Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. 
  The remaining elements of nums are not important as well as the size of nums.
  Return k.
  
  Example 1:

  Input: nums = [1,1,2]
  Output: 2, nums = [1,2,_]
  Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
  It does not matter what you leave beyond the returned k (hence they are underscores).

*/
#include <iostream>
#include <vector>

using namespace std;

class RemoveDuplicates {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for (const int num : nums) {
            if (i < 1 || num > nums[i - 1]) {
                nums[i++] = num;
            }
        }

        return i;
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    RemoveDuplicates rd;
    int length = rd.removeDuplicates(nums);

    cout << "Length after removing duplicates: " << length << endl;
    cout << "Updated vector: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
