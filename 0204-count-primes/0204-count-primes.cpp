class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        // n strictly less than bola hai
        vector<char> isPrime(n, 1);
        
        // 2 ek prime number hai
        int count = 1;

        // Loop sirf odd numbers (3, 5, 7...) ke liye chalega
        for (long long i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                // i*i se start karke sirf odd multiples mark karenge (j += 2*i)
                for (long long j = i * i; j < n; j += 2 * i) {
                    isPrime[j] = 0;
                }
            }
        }

        // Sirf odd numbers count karenge
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};