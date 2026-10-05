class Solution {
public:
    string addBinary(string a, string b) {
        std::string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            result.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};