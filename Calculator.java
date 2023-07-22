//to use the Scanner clas for user input
import java.util.Scanner;
//Define the class as per your file name
public class Calculator {
    //The main program starts here
    public static void main(String[] args){
        //Create an object to read user input
        Scanner scanner = new Scanner(System.in);
        //Welcome message for the user
        System.out.println("Welcome");

        //Start the loop to keep the code running until user wishes to quit
        while (true) {
            //For displaying the available operations
            System.out.println("\nSelect any operation");
            System.out.println("1. Add ");
            System.out.println("2. Subtract ");
            System.out.println("3. Multiply ");
            System.out.println("4. Divide ");
            System.out.println("5. Exit ");

            //Accept the user's input
            int choice = scanner.nextInt();
            //Display exit message if user's input is 5
            if (choice == 5){
                System.out.println(" Exiting the calculator ");
                break;
            }
            //Assign a variable to store the value of operation performed
            double result = 0.0;
            //Using switch statement to shift to the steps to perform the chosen operation
            switch (choice) {
                //Input different methods to perform different operations using cases
                case 1:
                    result = performAddition(scanner);
                    break;
                case 2:
                    result = performSubtraction(scanner);
                    break;
                case 3:
                    result = performMultiplication(scanner);
                    break;
                case 4:
                    result = performDivision(scanner);
                    break;
                default:
                    System.out.println("Invalid Choice");
            }
            //Display the output
            System.out.println("Result : " + result);
        }
    }
    //Methods to perform different operations

    public static double performAddition(Scanner scanner){
        System.out.print("Enter the first number : ");
        //Read the first number from user
        double num1 = scanner.nextDouble();
        System.out.print("Enter the second number : ");
        //Read the second number from user
        double num2 = scanner.nextDouble();
        return num1 + num2;
    }
    public static double performSubtraction(Scanner scanner){
        System.out.print("Enter the first number : ");
        double num1 = scanner.nextDouble();
        System.out.print("Enter the second number : ");
        double num2 = scanner.nextDouble();
        return num1 - num2;
    }
    public static double performMultiplication(Scanner scanner){
        System.out.print("Enter the first number : ");
        double num1 = scanner.nextDouble();
        System.out.print("Enter the second number : ");
        double num2 = scanner.nextDouble();
        return num1 * num2;
    }
    public static double performDivision(Scanner scanner){
        System.out.print("Enter the dividend : ");
        double dividend = scanner.nextDouble();
        System.out.print("Enter the divisor : ");
        double divisor = scanner.nextDouble();
        return dividend / divisor;
    }
}
