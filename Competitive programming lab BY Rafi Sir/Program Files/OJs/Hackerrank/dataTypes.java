import java.util.Scanner;

public class dataTypes {
    public static void main(String[] args) {
    	int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
    	Scanner scan = new Scanner(System.in);
    	
    	// Getting float scan
    	int myint = scan.nextInt();
    	System.out.println( i+myint);
    	
    	// Getting double scan
    	//System.out.print("Enter double: ");
    	double myDouble = scan.nextDouble();
    	System.out.println(d+ myDouble);
    	
    	// Getting String scan
    	//System.out.print("Enter text: ");
    	String mySt = scan.nextLine();
        String myString = scan.nextLine();
    	System.out.println(s+ myString);
    }
}