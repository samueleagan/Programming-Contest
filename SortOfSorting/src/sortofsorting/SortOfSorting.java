
package sortofsorting;

import java.util.*;

public class SortOfSorting {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numberOfNames = 0, asciiTotal, test;
        String name = "";
        
        numberOfNames = input.nextInt();
        ArrayList<String> lastNames = new ArrayList(); 

        do {
            int[] asciiValues = new int[numberOfNames];
            String[] names = new String[numberOfNames];
            for (int i = 0; i < numberOfNames; i++) {
                name = input.next(); 
                names[i] = name;
                asciiTotal = name.charAt(0) + name.charAt(1);
                asciiValues[i] = asciiTotal;
            }
            Arrays.sort(asciiValues);
            for (int j = 0; j < asciiValues.length; j++) {
                test = names[j].charAt(0) + names[j].charAt(1);
                if (test == asciiValues[j]) {
                    lastNames.add(names[j]);
                }
            }
        numberOfNames = input.nextInt();    
        } while (numberOfNames != 0);
        
        System.out.println(lastNames);
    }
}

/*

Sample Input 1:

3
Mozart
Beethoven
Bach
5
Hilbert
Godel
Poincare
Ramanujan
Pochhammmer
0

Sample Output 1:



Bach
Beethoven
Mozart

Godel
Hilbert
Poincare
Pochhammmer
Ramanujan
*/