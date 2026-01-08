#include <iostream>
#include <random>
#include <chrono>

int main() {
    const int T = 10000; // Number of random numbers
    const int MIN = 100000;     // 1e5
    const int MAX = 999999;     // Just below 1e6

    // Initialize 64-bit Mersenne Twister RNG
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(MIN, MAX);

    //std::cout << T << "\n";  // Print number of test cases
    for (int i = 0; i < T; ++i) {
        std::cout << dist(rng) << "\n";
    }

    return 0;
}
