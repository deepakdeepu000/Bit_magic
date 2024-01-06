#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve_arr(int n) {
    vector<int> sieve(n + 1, 0);

    for (int i = 2; i * i <= n; i++) {
        if (sieve[i] == 0) {
            for (int j = i * i; j <= n; j += i) {
                if (sieve[j] == 0) {
                    sieve[j] = i;
                }
            }
        }
    }

    return sieve;
}

int degreeSum(vector<int> &sieve, int num) {
    if (num == 1) {
        return 0;
    }

    int primeFactor = sieve[num];
    int count = 0;

    // Count the power of the prime factor in the number
    while (num % primeFactor == 0) {
        num /= primeFactor;
        count++;
    }

    return count + degreeSum(sieve, num);
}

int sumOfPowers(int a, int b) {
    int sum = 0;
    vector<int> sieve = sieve_arr(b);

    for (int i = a; i <= b; i++) {
        sum += degreeSum(sieve, i);
    }

    return sum;
}

int main() {
    // Example 1
    int a1 = 9, b1 = 12;
    cout << "Example 1 Output: " << sumOfPowers(a1, b1) << endl;

    // Example 2
    int a2 = 24, b2 = 27;
    cout << "Example 2 Output: " << sumOfPowers(a2, b2) << endl;

    return 0;
}
