package main

import (
	"fmt"
	"math"
)

func main() {
	fmt.Println("Welcome to the Vim Go Playground!")

	// Calculate the square root of numbers from 1 to 10
	for i := 1; i <= 10; i++ {
		result := calculateSquareRoot(float64(i))
		fmt.Printf("Square root of %d: %.2f\n", i, result)
	}

	// Let's define a slice of programming languages
	languages := []string{"Go", "Python", "Java", "JavaScript", "C++", "Ruby"}

	fmt.Println("\nProgramming Languages:")
	for index, lang := range languages {
		fmt.Printf("%d. %s\n", index+1, lang)
	}

	// Print a Fibonacci sequence
	fmt.Println("\nFibonacci Sequence:")
	for i := 0; i < 10; i++ {
		fmt.Printf("%d ", fibonacci(i))
	}
	fmt.Println()
}

func calculateSquareRoot(number float64) float64 {
	return math.Sqrt(number)
}

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}
