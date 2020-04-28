/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector <int> v = binaryMatrix.dimensions();
        int m = v[0] ;
        int n = v[1];
        int r = 0, c = n - 1;
        int result = -1;
        while(r < m && c >= 0) {
            if(binaryMatrix.get(r, c) ==  1) {
                result = c;
                c--;
            }
            else {
                r++;
            }
        }
        return result;
    }
};
