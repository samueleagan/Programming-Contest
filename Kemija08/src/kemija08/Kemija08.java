package kemija08;



import java.util.Scanner;

public class Kemija08 {

    
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        String decode = "";
        String finalOutput = "";
        
        decode = userInput.nextLine();
        
        for (int i = 0; i < decode.length(); i++) {
            finalOutput += decode.charAt(i);
            switch(decode.charAt(i)) {
                case 'a': 
                case 'e': 
                case 'i': 
                case 'o': 
                case 'u': i += 2; break;     
            }
        }
        System.out.println(finalOutput);
    }
}
/*

Sample Input:                                    Sample Output:

zepelepenapa papapripikapa                       zelena paprika

bapas jepe doposapadnapa opovapa kepemipijapa    bas je dosadna ova kemija

*/