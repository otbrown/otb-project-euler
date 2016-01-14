// ep002.cpp
// sum of all even fibonacci terms up to 4 million
// Oliver Thomson Brown
// 2016-01-14

#include <iostream>
#include <chrono>

using std::cout;		using std::endl;

int solution() {
    int fib = 0;
    int sum = 0;
    int fib1 = 0;
    int fib2 = 1;

    while (fib < 4000000) {
        sum += fib;
        fib1 = fib2 + fib;
        fib2 = fib + fib1; 
        fib = fib1 + fib2;
    }

	return sum;
}

int main() {
	int answer;

	auto t_start = std::chrono::high_resolution_clock::now();
	answer = solution();
	auto t_finish = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> dt = t_finish - t_start;

    if (answer == 4613732) {
        cout << "Solution is " << answer << endl 
             << "Solution took " << dt.count() << "ms" << endl;
    } else {
        cout << "Incorrect solution: " << answer << endl;
    }

	return 0;
}
