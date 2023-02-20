#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

void rand_fill_arr(int arr[], int length, int a, int b) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (b - a + 1) + a;
	}
}

double mean_arr(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return double(sum) / length;
}

void print_arr(int arr[], int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b]\n";
}

void powers(int N, int M) {
		for (int i = 0; i <= M; i++)
			std::cout << N << '^' << i << " = " << pow(N, i) << '\n';
	}

void positive_arr(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = arr[i] < 0 ? abs(arr[i]) : arr[i];
	}
}

int main() {
	const int size = 10;
	int Arr[size];

	// 17.1 Ariphmetic mean of 2 numbers
	std::cout << "\t17.1 Ariphmetic mean of 2 numbers\n";
	double n, m;
	std::cout << "Enter 2 numbers: ";
	std::cin >> n >> m;
	std::cout << "\Ariphmetic mean = " << mean(n, m) << '\n';


	// 17.2 Ariphmetic mean of array elements
	std::cout << "\n\t17.2 Ariphmetic mean of array elements\n";
	rand_fill_arr(Arr, 10, 1, 100); // [1...100]
	std::cout << "Array filled with random numbers [1...100]:\n";
	print_arr(Arr, 10);
	std::cout << "\Ariphmetic mean of array elements = " << mean_arr(Arr, size) << '\n';


	// 17.3 All powers of a number
	std::cout << "\n\t17.3 All powers of a number\n";
	int N, M;
	std::cout << "Enter number - the basis of the degree -> ";
	std::cin >> N;
	std::cout << "Enter maximum degree -> ";
	std::cin >> M;
	powers(N, M);


	// 17.4 Array, be positive!
	std::cout << "\n\t17.4 Array, be positive!\n";
	rand_fill_arr(Arr, 10, -10, 10); // [-10...10]
	std::cout << "Array filled with random numbers [-10...10]:\n";
	print_arr(Arr, 10);
	positive_arr(Arr, 10);
	std::cout << "Result array:\n";
	print_arr(Arr, 10);

	return 0;
}