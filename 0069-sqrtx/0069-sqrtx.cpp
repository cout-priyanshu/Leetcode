class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        long r = x; 
        
        // Newton's method formula: r = (r + x/r) / 2
        while (r * r > x) {
            r = (r + x / r) / 2;
        }
        
        return r;
        
    }
};