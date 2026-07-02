// Problem: Reverse String (LeetCode)
// Link: https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(0, s, s.size() - 1);
    }

    void reverse(int l, vector<char>& arr, int r){
        if(l >= r) return;

        swap(arr[l], arr[r]);
        reverse(l + 1, arr, r - 1);
    }
};

// Approach:
// Swap first and last characters.
// Move both pointers towards the center using recursion.
// Stop when both pointers meet or cross.
// Time: O(n)
// Space: O(n)   // recursion stack