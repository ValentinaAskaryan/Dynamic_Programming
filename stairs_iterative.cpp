#include <iostream>
#include <chrono>

// Functions declarations
void initMemory(long long* memory, int size);
int stairs(int count, long long* memory);

int main() {
	int stairsCount;
	long long memory[45];
	std::cout << "Enter stairs count: ";
	std::cin >> stairsCount;

	while(stairsCount < 0) {
		std::cout << "The count must be a positive number or 0. Please try again: ";
		std::cin >> stairsCount;
	}

	auto start = std::chrono::high_resolution_clock::now();

	initMemory(memory, 45);
	int options = stairs(stairsCount, memory);
	std::cout << "Options: " << options << "\n";

	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "Time with microseconds: " << duration.count() << "\n";

	return 0;
}

// Passing 1 and 2 as the valuse of the first and the second element.
// Initializing remaining part of the array with -1s.
void initMemory(long long* memory, int size) {
	memory[0] = 1;
	memory[1] = 2;

	for(int i = 2; i < size; i++) 
		memory[i] = -1;
}

int stairs(int count, long long* memory) {
	for(int i = 2; i <= count; i++) 
		memory[i] = memory[i - 1] + memory[i - 2];

	return memory[count];
}
