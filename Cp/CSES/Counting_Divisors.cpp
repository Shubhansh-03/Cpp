#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the number of divisors for each
// number up to 1000004
void calculateDivisors(long long numDivisors[])
{
    cout << "hehe";
    for (int i = 1; i < 1000005; i++) {
        for (int j = i; j < 1000005; j += i) {
            numDivisors[j]++;
        }
    }
}

int main()
{
    // Array to store the number of divisors for each number
    // up to 1000004
    long long numDivisors[1000005] = {};

    // Call the function to calculate the number of divisors
    calculateDivisors(numDivisors);

    // Read the number of integers
    long long n = 3;
    cin >> n;
    vector<int> arr(n+1);
    for(auto& i: arr){
        cin >> i;
    }
    for(int i=0; i < n; i++) {
        cout << numDivisors[arr[i]] << "\n";
    }
}