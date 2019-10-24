package friday;

/* Notes:

0 = Sunday 
1 = Monday
2 = Tuesday
3 = Wednesday
4 = Thursday
5 = Friday 
6 = Saturday

For it to be Friday the 13th, need to match up 5 and 13
*/
import java.util.Scanner;
public class Friday {

    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        int testCases, daysInYear, monthsInYear, daysInMonth, count = 0;
        
        testCases = userInput.nextInt();
        
        do {
            daysInYear = userInput.nextInt(); monthsInYear = userInput.nextInt();
            daysInMonth = userInput.nextInt();
            int[][] month = new int[monthsInYear][daysInMonth];
            
            for (int weeks = 0; weeks < monthsInYear; weeks++) {
                for (int days = 0; days < month[weeks].length; days++) {
                    
                }
            }
            
            
           count++; 
        } while (count < testCases);
        
        
    }
    
    
}
