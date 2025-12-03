// Recursive Function
int searchRec(vector<int>& vec, int low, int high, int K) {
    if(low > high) return -1;

    int mid = low + (high - low) / 2;

    if(vec[mid] == K)
        return mid;

    // Check if left half is sorted
    if(vec[low] <= vec[mid]) {
        // Check if K lies in left sorted part
        if(K >= vec[low] && K < vec[mid])
            return searchRec(vec, low, mid - 1, K);
        else
            return searchRec(vec, mid + 1, high, K);
    }
    // Else right half is sorted
    else {
        // Check if K lies in right sorted part
        if(K > vec[mid] && K <= vec[high])
            return searchRec(vec, mid + 1, high, K);
        else
            return searchRec(vec, low, mid - 1, K);
    }
}

// Main function required by GFG
int Search(vector<int> vec, int K) {
    return searchRec(vec, 0, vec.size() - 1, K);
}
