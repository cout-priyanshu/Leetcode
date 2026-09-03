class Solution {
private:
    // Helper function to calculate the sum of the squares of all digits
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;       // Get the last digit
            totalSum += digit * digit; // Square it and add to sum
            n = n / 10;               // Remove the last digit
        }
        return totalSum;
    }

public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        // Loop until we reach 1 (happy) OR we see a number we've already calculated (cycle)
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);      // Add current number to our history
            n = getNext(n);      // Calculate the next number in the chain
        }
        
        // If we broke the loop because n == 1, it's happy. 
        return n == 1;
    }
};