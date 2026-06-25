// Problem: Selection Sort (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/selection-sort/1

class Solution {
  public:
  
    void selectionSort(vector<int> &arr) {
        int n = arr.size();

        for(int j = 0; j <= n-2; j++){
            int min = j;

            for(int i = j+1; i <= n-1; i++){
                if(arr[min] > arr[i]){
                    min = i;
                }
            }

            swap(arr[j], arr[min]);
        }
    }
};

// Approach:
// Find the minimum element in the unsorted part.
// Swap it with the current position.
// Repeat for the remaining array.
// Time: O(n²)
// Space: O(1)