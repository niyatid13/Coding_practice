
public class GFG {
	
	public static void main(String args[])
	{
		
		String str = "Geeks Gor Geeks";

		// Get the index
		int index = 6;

		// Get the character
		char ch = 'F';

		
		System.out.println("Original String = " + str);

		str = str.substring(0, index) + ch + str.substring(index + 1);

		// Print the modified string
		System.out.println("Modified String = " + str);
	}
}
