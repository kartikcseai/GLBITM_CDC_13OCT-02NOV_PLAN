// Leetcode 278
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                right = mid; // mid could be the first bad version, so we continue searching on the left half
            } else {
                left = mid + 1; // mid is a good version, search on the right half
            }
        }
        
        return left; // left will be the first bad version when the loop ends
    }
};
