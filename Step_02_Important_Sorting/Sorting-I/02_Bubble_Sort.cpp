// Problem: Bubble Sort (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/bubble-sort/1

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {

        int n = arr.size();

        for(int i = 1; i <= n - 1; i++){
            for(int j = 0; j <= n - 1 - i; j++){
                if(arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};

// Approach:
// Compare adjacent elements and swap if they are in wrong order.
// After each pass, the largest element moves to its correct position at the end.
// Repeat for n-1 passes.
// Time: O(n²)
// Space: O(1)