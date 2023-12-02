class VimTypeScriptExample {
  private greeting: string;

  constructor(greeting: string) {
    this.greeting = greeting;
  }

  sayHello(name: string): void {
    console.log(`${this.greeting}, ${name}!`);
  }

  // Function to calculate the factorial of a number
  calculateFactorial(n: number): number {
    if (n === 0 || n === 1) {
      return 1;
    }
    return n * this.calculateFactorial(n - 1);
  }

  // Function to print the elements of an array
  printArray(arr: number[]): void {
    console.log("Array Elements:");
    for (const element of arr) {
      console.log(element);
    }
  }

  // Print a Fibonacci sequence
  printFibonacciSequence(): void {
    console.log("Fibonacci Sequence:");
    for (let i = 0; i < 10; i++) {
      console.log(this.fibonacci(i));
    }
  }

  private fibonacci(n: number): number {
    if (n <= 1) {
      return n;
    }
    return this.fibonacci(n - 1) + this.fibonacci(n - 2);
  }
}

// Usage
const example = new VimTypeScriptExample(
  "Welcome to the Vim TypeScript Playground!"
);
example.sayHello("User");

// Calculate factorial and print Fibonacci sequence
const factorialResult = example.calculateFactorial(5);
console.log(`Factorial of 5: ${factorialResult}`);
example.printFibonacciSequence();
