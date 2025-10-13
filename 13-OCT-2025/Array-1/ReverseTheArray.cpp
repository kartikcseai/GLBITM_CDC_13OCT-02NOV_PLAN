void reverseArray(vector<int> &arr , int m) {
    int n = arr.size();
	// Declare vector BRR.
	vector<int> brr(n , 0);
	// Declare a varibale p
	int p = 0;
	// First fill the BRR in the same order as the original array upto Mth postion.
	for (int i = 0 ; i <= m ; i++) {
		brr[p++] = arr[i];
	}
	// Now fill the BRR in the reverse order till (m+1)th postion.
	for (int j = n - 1 ; j > m ; j--) {
		brr[p++] = arr[j];
	}
	// Now copy back the array ARR into array ARR.
	for (int i = 0 ; i < n  ; i++) {
		arr[i] = brr[i];
	}
}
