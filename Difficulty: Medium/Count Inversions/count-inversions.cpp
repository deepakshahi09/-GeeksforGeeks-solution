class Solution {
	public:
	#define pb push_back
	long long count = 0;
	void merge(vector<int> &arr, int left, int mid, int right) {
		int i = left;
		int j = mid + 1;
		vector<int>temp;
		while (i <= mid && j <= right) {
			if (arr[i] <= arr[j]) {
				temp.pb(arr[i++]);
			} else {
				count += (mid - i + 1);
				temp.pb(arr[j++]);
			}
		}
		while (i <= mid) {
			temp.pb(arr[i++]);
		}
		while (j <= right) {
			temp.pb(arr[j++]);
		}
		for (int k = 0; k<temp.size(); k++) {
			arr[left + k] = temp[k];
		}
	}
	void divide(vector<int> &arr, int left, int right) {
		//   int mid= ((left^right) + (left&right)>>1);
		int mid = left + (right - left)/2;
		if (left<right) {
			divide(arr, left, mid);
			divide(arr, mid + 1, right);
			merge(arr, left, mid, right);
		}
		
	}
	int inversionCount(vector<int> &arr) {
		// Code Here
		count = 0;
		divide(arr, 0, arr.size() - 1);
		return count;
		
	}
};
