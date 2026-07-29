class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;   // candidate eating speed
            long long hoursNeeded = 0;

            for (int pile : piles) {
                hoursNeeded += (pile + mid - 1) / mid;   // ceil(pile / mid)
            }

            if (hoursNeeded <= h) {
                hi = mid;       // mid works — try to go slower (smaller k)
            } else {
                lo = mid + 1;   // mid too slow — need faster k
            }
        }

        return lo;
    }
};