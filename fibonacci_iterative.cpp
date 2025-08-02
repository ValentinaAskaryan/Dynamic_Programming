#include <iostream>
#include <chrono>

// Functions declarations.
void initMemory(long long* memory, int size);
int fibonacci(int n, long long* memory);

// Asking the user for an input.
// Sanitize the input to be positive number or 0.
// Pass the number to the fibonacci() function.
// Get the value and print it to console.
int main() {
	int num;
	long long memory[100];

	std::cout << "Enter a number: ";
	std::cin >> num;

	// Asking the user to input the number as many times as the program gets
	// positive number or 0.
	while(num < 0) {
		std::cout << "The number must be positive or 0. Please try again: ";
		std::cin >> num;
	}

	// Start time
	auto start = std::chrono::high_resolution_clock::now();	

	initMemory(memory, 100);
	int n_fib = fibonacci(num, memory);
	std::cout << "The fibonacci n-th number is: " << n_fib << std::endl;

	// End time
	auto end = std::chrono::high_resolution_clock::now();

	// Calculates the time between end and start. Converts to nanoseconds.
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

	std::cout << "Time in nanoseconds : " << duration.count() << "\n";

	return 0;
}

// Initializing the memory for storing fibonacci nums.
void initMemory(long long* memory, int size) {
	// Initializing the first two elems with 0 and 1. Base cases 
	// for fibonacci sequence.
	memory[0] = 0;
	memory[1] = 1;

	// Initializing remaining part of the array with -1, as they are not filled yet.
	for(int i = 2; i < 100; i++) {
		memory[i] = -1;
	}
}

// Clacualtes fibonacci n-th number with dynamic programming approach.
// Using the basic if statement.
int fibonacci(int num, long long* memory) {
	for(int i = 2; i <= num; i++) 
		memory[i] = memory[i - 1] + memory[i - 2];

	return memory[num];
}
