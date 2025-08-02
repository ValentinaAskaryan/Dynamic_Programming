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

	for(int i = 2; i < size; i++) 
		memory[i] = -1;

	memory[1] = 1;
	memory[2] = 2;
}

int stairs(int count, long long* memory) {
	if(count == 1) return memory[1];
	if(count == 2) return memory[2];

	if(memory[count - 1] == -1)
		memory[count - 1] = stairs(count - 1, memory);
	if(memory[count - 2] == -1)
		memory[count - 2] = stairs(count - 2, memory);

	return memory[count - 1] + memory[count - 2];
}
