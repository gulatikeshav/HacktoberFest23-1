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
