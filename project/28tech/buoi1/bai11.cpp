#include <iostream>

int main() {
    unsigned long long n{};
    std::cin >> n;

    unsigned long long s{0};
    for (unsigned long long i = 2ULL; i <= (2ULL * n); i += 2ULL) {
        s += i;
    }

    std::cout << s;

    return 0;
}
