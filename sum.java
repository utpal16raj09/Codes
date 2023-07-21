// Import the Scanner class from the java.util package
import java.util.Scanner;

// Declare a public class named sum or whatever the file name is
public class sum {

    // Define the main method, the entry point of the Java program
    public static void main(String[] args) {

        // Declare three double variables to store the user-input numbers and their sum
        double num1, num2, sum;

        // Create a new Scanner object named 'sc' to read input from the standard input stream
        Scanner sc = new Scanner(System.in);

        // Display a prompt message asking the user to enter the first number
        System.out.print("Enter First Number: ");

        // Read the user's input and store it in the variable 'num1'
        num1 = sc.nextDouble();

        // Display a prompt message asking the user to enter the second number
        System.out.print("Enter Second Number: ");

        // Read the user's input and store it in the variable 'num2'
        num2 = sc.nextDouble();

        // Close the Scanner object to release associated resources after reading the input
        sc.close();

        // Calculate the sum of the two numbers and store the result in the variable 'sum'
        sum = num1 + num2;

        // Print the result of the addition in the form of a string
        System.out.println("Sum of " + num1 + " and " + num2 + " is: " + sum);
    }
}
