// Question 1
// Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order,
//  return a sorted array of only the integers that appeared in all three arrays.

vector<int> arraysIntersection(vector<int>& A, vector<int>& B, vector<int>& C) {
        int i = 0, j = 0, k = 0, R = A.size(), S = B.size(), T = C.size();
        vector<int> ans;
        while (i < R && j < S && k < T) {
            int a = A[i], b = B[j], c = C[k];
            if (a == b && b == c) {
                ans.push_back(a);
                ++i, ++j, ++k;
            } else {
                int mx = max({ a, b, c });
                if (a < mx) ++i;
                if (b < mx) ++j;
                if (c < mx) ++k;
            }
        }
        return ans;
    }