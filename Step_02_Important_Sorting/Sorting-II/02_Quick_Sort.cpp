// Problem: Quick Sort (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/quick-sort/1

// Partition function
int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int* arr, int low, int high) {
    if(low < high){
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Approach:
// Pick last element as pivot.
// Place pivot at its correct position.
// Recursively sort left and right parts.
// Time: O(n log n) average, O(n²) worst
// Space: O(log n)   // recursion stack