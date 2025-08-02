#include <iostream>
#include <chrono>

// Functions declarations.
int findTotalPaths(int** net, int row, int col);
void printArray(int** net, int row, int col);
void freeMemory(int** net, int row);

int main() {
	int row, col;

	std::cout << "Enter the row count: ";
	std::cin >> row;
	std::cout << "Enter the col count: ";
	std::cin >> col;

	int** net = new int*[row];
	for(int r = 0; r < row; r++) {
		net[r] = new int[col];
	}
	
	// Start time
	auto start = std::chrono::high_resolution_clock::now();

	int paths = findTotalPaths(net, row, col);
	std::cout << "Total paths: " << paths << "\n";
	printArray(net, row, col);
	freeMemory(net, row);

	// End time
	auto end = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

	std::cout << "Time with nanoseconds: " << duration.count() << "\n";
	return 0;
}

/*
	1 1 1  1       00 01 02 03 
	1 2 3  4       10 11 12 13
	1 3 6  10      20 21 22 23
	1 4 10 20      30 31 32 33
	1 5 15 35      40 41 42 43

	Filling the matrix with the Pascal numbers.
	Returning the last element of the matrix.
	The last elem is the total path count.
*/
int findTotalPaths(int** net, int row, int col) {
	int r, c;
	for(r = 0; r < row; r++) {
		net[r][0] = 1;
	}

	for(c = 0; c < col; c++) {
		net[0][c] = 1;
	}


	for(r = 1; r < row; r++) {
		for(c = 1; c < col; c++) {
			net[r][c] = net[r][c - 1] + net[r - 1][c]; 	
		}
	}
	return net[r - 1][c - 1];
}

// Printing the matrix to the console.
void printArray(int** net, int row, int col) {
	for(int r = 0; r < row; r++) {
		for(int c = 0; c < col; c++) {
			std::cout << net[r][c] << " ";
		}
		std::cout << "\n";
	}

}

// Free the memory.
void freeMemory(int** net, int row) {
	for(int r = 0; r < row; r++) {
		delete net[r];
	}
	delete[] net;
}
