import java.util.Scanner;
import java.util.Random;

public class StringPractice{
	public static void main(String[] args){
		String message //= "Hello, World!";
		Scanner in = new Scanner(System.in);
		Random rand = new Random();
		message = message.concat(" Lovely day!");
		//message = message.toUpperCase();

		char a = 'd';
		message = message.replace('o','0');
		message = message.replace('e','S');

		char[] characters = message.toCharArray();

		for( char c: characters ){
			System.out.println(c);
		}


		System.out.println(message);
	}
}