class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // Convert n to long long to avoid overflow
        if (N < 0) {
            x = 1 / x;   // Invert x for negative powers
            N = -N;      // Use the absolute value of N
        }

        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) { // If N is odd
                result *= x;
            }
            x *= x; // Square the base
            N /= 2; // Divide the exponent by 2
        }
        return result;
    }
};
