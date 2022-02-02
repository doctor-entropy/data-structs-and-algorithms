#include <iostream>
#include <vector>
#include <algorithm>

long MaxPairwiseProductFast(const std::vector<long>& numbers) {

    long first = numbers[0];
    long second = numbers[1];

    long max;
    long run;

    if (first > second) {
        max  = first;
        run = second;
    } else {
        max = second;
        run = first;
    }

    int n = numbers.size();

    for (int i=2; i < n; ++i) {

        if (numbers[i] > max) {
            run = max;
            max = numbers[i];
        } else if (numbers[i] > run) {
            run = numbers[i];
        } else {}

    }

    return max * run;
}

int main() {
    long n;
    std::cin >> n;
    std::vector<long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProductFast(numbers) << "\n";
    return 0;
}
