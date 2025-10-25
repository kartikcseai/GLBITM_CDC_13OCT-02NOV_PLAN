vector<int> Smallestonleft(int arr[], int n) {
    vector<int> ans;
    set<int> s; // stores elements seen so far

    for (int i = 0; i < n; i++) {
        auto it = s.lower_bound(arr[i]); // first element >= arr[i]
        if (it == s.begin()) {
            ans.push_back(-1); // no smaller element
        } else {
            it--; // move to smaller element
            ans.push_back(*it);
        }
        s.insert(arr[i]);
    }
    return ans;
}
