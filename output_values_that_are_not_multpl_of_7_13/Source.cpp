#include <iostream>
#include <format>
#include <vector>
using namespace std;

int main() {
	
	unsigned int upper_bound{};
	

	cout << "Hi! This program will output numbers that are not multiples of 7 or 13."
		<< " The program start at value 1 and executes until the upper bound that the user inputs."
		<< "Write you limit: ";
	cin >> upper_bound;

	vector <int> values(upper_bound);

	for (size_t i{0}; i <upper_bound; ++i) {
		values.at(i) = 1+i;
	}

	unsigned new_line{};
	const unsigned values_per_line{ 10 };

	for (size_t a{}; a < upper_bound; a++) {
		if (values.at(a) % 7 == 0 || values.at(a) % 13== 0) {
			continue;
		}

		cout << format("{:^5} ", values.at(a));
		++new_line;
		if (new_line == values_per_line) {
			cout << endl;
			new_line = 0;
		}
	 }

	return 0;
}