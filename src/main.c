#include <stdio.h>

// Function to calculate the factorial of a number
long long calculateFactorial(int n);

// Function to print the elements of an array
void printArray(int arr[], int size);

// Function to generate fibonacci sequence
int fibonacci(int n);

int main() {
  printf("Welcome to the Vim C Playground!\n");

  // Calculate the factorial of numbers from 1 to 10
  for (int i = 1; i <= 10; i++) {
    long long result = calculateFactorial(i);
    printf("Factorial of %d: %lld\n", i, result);
  }

  // Let's define an array of integers
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("\nArray Elements:\n");
  printArray(numbers, 10);

  // Print a Fibonacci sequence
  printf("\nFibonacci Sequence:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", fibonacci(i));
  }

  return 0;
}

long long calculateFactorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * calculateFactorial(n - 1);
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
