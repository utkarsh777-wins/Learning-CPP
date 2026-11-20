#include <iostream>
using namespace std;

/*

Two Sum (Target Pair)Given an array of integers nums and an integer target, return the indices of the two numbers that add up to target. 
Assume exactly one valid pair exists, and you cannot use the same element twice.
Goal: Achieve $O(n)$ time complexity in a single pass by storing visited values and their indices.Example:Input: nums = [2, 11, 7, 15], target = 9Output: [0, 2]

*/

int main() {

    int nums[] = {2, 11, 7, 15};
    int target = 9;
    int n = sizeof(nums)/sizeof(int);

    int maxVal = nums[0];
    for (int i=1; i<n; i++) {
        maxVal = (nums[i] > maxVal)? nums[i] : maxVal;
    }

    // precalculation
    int hash[maxVal] = {0};
    for (int j=0; j<n; j++) {
        hash[nums[j]]++;
    }

    int q = maxVal;
    while(q--) {
        int i=0;
        if (hash[q] >= 1) {
            if ((hash[i] + nums[q]) == target) {
                cout << "{" << i << ", " << q << "}" << endl;
                break;
            }
        }
    }

    return 0;

}