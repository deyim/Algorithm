public class ArrayPractice{
		public static void main(String[] args){
			//two different ways to initialize
			int[] 	ages = {1,2,3,4};
			boolean[] students = new boolean[4];

			//give value
			students[0] = true; students[1] = true; 
			students[2] = false; students[3] = false;

			for(int i = 0 ; i < ages.length; i++){
				System.out.println(students[i]);
			}

			String str = "Code";
			String Spleading = new String();
			char[] characters = str.toCharArray();
			for(int i = 0 ; i < str.length(); i++){
				//System.out.println(characters[i]);
				//System.out.println(Character.toString(characters[i]));
				Spleading = Spleading.concat(Character.toString(characters[i]));
				System.out.print(Spleading);
			}
		}
	//	public String stringSplosion(String str){
			
	//	}
}