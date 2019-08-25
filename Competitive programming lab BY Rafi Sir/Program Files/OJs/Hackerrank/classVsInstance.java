import java.io.*;
import java.util.*;

public class classVsInstance{
    private int age;	
  
	public static Person Person(int initialAge) {
  		// Add some more code to run some checks on initialAge
  		if(initialAge<0)
  		{
  			System.out.println("Age is not valid, setting age to 0");
  			initialAge=0;
  			return Person;
  		}
	}

	static void amIOld(int age) {

  		// Write code determining if this person's age is old and print the correct statement:
		if(age<13)
  			System.out.println("You are young.");
  		else if(age>=13 && age<18)
  			System.out.println("You are teenager.");
  		else if(age>=18)
  			System.out.println("You are old.");
  		//return;
	}

	static int yearPasses(int age) {
  		return	age++;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for (int i = 0; i < T; i++) {
			int age = sc.nextInt();
			Person p = new Person(age);
			p.amIOld(age);
			for (int j = 0; j < 3; j++) {
				age=p.yearPasses(age);
				System.out.println(age);
			}
			p.amIOld(age);
			//System.out.println();
        }
		sc.close();
    }
}