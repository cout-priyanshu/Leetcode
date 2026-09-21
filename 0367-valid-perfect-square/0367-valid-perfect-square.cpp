class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0) {
            return 0;
        }
        long r = num; 
        
        // Newton's method formula: r = (r + x/r) / 2
        while (r * r > num) {
            r = abs((r + num / r) / 2);
        }
        
        return r*r == num;
    }
};