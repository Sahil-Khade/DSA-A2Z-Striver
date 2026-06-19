// Problem: Union of 2 Sorted Arrays (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        vector<int> Union;
        int i = 0;
        int j = 0;
        
        while(i < a.size() && j < b.size()){
            
            if(a[i] < b[j]){
                if(Union.empty() || Union.back() != a[i]) Union.push_back(a[i]);
                i++;
            }
            else if(b[j] < a[i]){
                if(Union.empty() || Union.back() != b[j]) Union.push_back(b[j]);
                j++;
            }
            else{
                
                if (Union.empty() || Union.back() != a[i]) Union.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        while(i < a.size()){
            if(Union.empty() || a[i] != Union.back()) Union.push_back(a[i]);
            i++;
        }
        
        while(j < b.size()){
            if(Union.empty() || b[j] != Union.back()){
                Union.push_back(b[j]);
            }
            j++;
        }
        
        return Union;
        
    }
};

// Approach:
// Use two pointers to traverse both sorted arrays.
// Add the smaller element while avoiding duplicates.
// If elements are equal, add once and move both pointers.
// Add remaining elements.
// Time: O(n + m)
// Space: O(n + m)   // output array excluded: O(1) extra space