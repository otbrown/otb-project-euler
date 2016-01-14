// ep002.cpp
// sum of all even fibonacci terms up to 4 million
// Oliver Thomson Brown
// 2016-01-14

#include <iostream>
#include <chrono>

using std::cout;		using std::endl;

int solution() {
    int fib = 0;
    int sum = 2;
    int i = 1;
    int j = 2;

    while (fib < 4000000) {
        fib = i + j;
        if (fib % 2 == 0) sum += fib;
        i = j;
        j = fib;
    }

	return sum;
}

int main() {
	int answer;

	auto t_start = std::chrono::high_resolution_clock::now();
	answer = solution();
	auto t_finish = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> dt = t_finish - t_start;

    cout << "Solution is " << answer << endl 
         << "Solution took " << dt.count() << "ms" << endl;

	return 0;
}
