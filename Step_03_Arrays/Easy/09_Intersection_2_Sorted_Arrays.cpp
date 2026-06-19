// Problem: Intersection of Two Sorted Arrays (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1

class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        
        vector<int> Inter;
        int i = 0;
        int j = 0;
        
        while(i < arr1.size() && j < arr2.size()){
            
            if(arr1[i] == arr2[j]){
                if(Inter.empty() || Inter.back() != arr1[i]) 
                    Inter.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i] < arr2[j]){
                i++;
            }
            else{                   // arr2[j] is smaller, move j
                j++;
            }
        }   
        return Inter;
    }
};

// Approach:
// Use two pointers to traverse both sorted arrays.
// If elements are equal add once and move both pointers.
// else move the pointer of smaller element.
// Skip duplicates while adding to the intersection.
// Time: O(n + m)
// Space: O(min(n, m))