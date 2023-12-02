#include <iostream>
#include <vector>

// Function to calculate the factorial of a number
long long calculateFactorial(int n);

// Function to print the elements of a vector
void printVector(const std::vector<int> &vec);

// Function to generate fibonacci sequence
int fibonacci(int n);

int main() {
  std::cout << "Welcome to the Vim C++ Playground!" << std::endl;

  // Calculate the factorial of numbers from 1 to 10
  for (int i = 1; i <= 10; i++) {
    long long result = calculateFactorial(i);
    std::cout << "Factorial of " << i << ": " << result << std::endl;
  }

  // Let's define a vector of integers
  std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "\nVector Elements:" << std::endl;
  printVector(numbers);

  // Print a Fibonacci sequence
  std::cout << "\nFibonacci Sequence:" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << fibonacci(i) << " ";
  }

  return 0;
}

long long calculateFactorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * calculateFactorial(n - 1);
}

void printVector(const std::vector<int> &vec) {
  for (const auto &element : vec) {
    std::cout << element << " ";
  }
  std::cout << std::endl;
}

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
