#include <iostream>
#include <chrono>

// Functions declarations.
void initMemory(long long* memory, int size);
long long factorial(int num, long long* memory);

int main() {
	int num;
	long long memory[20];
	std::cout << "Enter a number: ";
	std::cin >> num;
	
	while(num < 0) {
		std::cout << "The number must be positive or 0. Please try again: ";
		std::cin >> num;
	}
	
	// Start time
	auto start = std::chrono::high_resolution_clock::now();

	initMemory(memory, 20);
	long long n_fac = factorial(num, memory);
	std::cout << "The factorial is: " << n_fac << "\n";

	// End time
	auto end = std::chrono::high_resolution_clock::now();
	// Calculate the duration
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

	std::cout << "Time with nanoseconds: " << duration.count() << "\n";

	return 0;
}

void initMemory(long long* memory, int size) {
	memory[0] = 1;

	for(int i = 1; i < size; i++) {
		memory[i] = -1;
	}
}

long long factorial(int num, long long* memory) {
	for(int i = 1; i <= num; i++) {
		memory[i] = i * memory[i - 1];
	}	
	return memory[num];
}
