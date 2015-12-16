// ep001.cpp
// sum of all multiples of 3 and 5 up to 1000
// Oliver Thomson Brown
// 2015-12-15

#include <iostream>
#include <chrono>

using std::cout;		using std::endl;

int solution() {
	int i, j, sum = 0;

	for (i = 3; i < 1000; i += 3) {
		sum += i;
	}

	for (j = 5; j < 1000; j += 5) {
		if (j % 3 != 0)	
			sum += j;
	}
	
	return sum;
}

int main() {
	int answer;

	auto t_start = std::chrono::high_resolution_clock::now();
	answer = solution();
	auto t_finish = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> dt = t_finish - t_start;

	if(answer == 233168) {
		cout << "Answer is " << answer << endl
			 << "Solution took " << dt.count() << "ms." << endl;
	} else {
		cout << answer << " is not the correct answer." << endl;
	}

	return 0;
}
