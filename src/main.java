public class VimJavaExample {

  public static void main(String[] args) {
    System.out.println("Welcome to the Vim Java Playground!");

    // Calculate the factorial of numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
      long result = calculateFactorial(i);
      System.out.printf("Factorial of %d: %d\n", i, result);
    }

    // Let's define an array of programming languages
    String[] languages = {"Java", "Python", "JavaScript", "C++", "Ruby"};

    System.out.println("\nProgramming Languages:");
    for (int i = 0; i < languages.length; i++) {
      System.out.printf("%d. %s\n", i + 1, languages[i]);
    }

    // Print a Fibonacci sequence
    System.out.println("\nFibonacci Sequence:");
    for (int i = 0; i < 10; i++) {
      System.out.print(fibonacci(i) + " ");
    }
  }

  private static long calculateFactorial(int number) {
    if (number == 0 || number == 1) {
      return 1;
    }
    return number * calculateFactorial(number - 1);
  }

  private static int fibonacci(int n) {
    if (n <= 1) {
      return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
