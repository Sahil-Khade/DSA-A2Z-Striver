// Problem: Insertion Sort (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/insertion-sort/1

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++){
            int j = i;

            while(j > 0 && arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
                j--;
            }
        }
    }
};

// Approach:
// Assume left part is sorted.
// Take one element and move it left until it reaches correct position.
// Time: O(n²)
// Space: O(1)