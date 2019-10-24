/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sibice;

/**
 *
 * @author s526857
 * 
 */

import java.util.*;
public class Sibice {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in); 
        
        int n, w, h;
        double hypo;
        String finalOutput = ""; 
        
        n = userInput.nextInt(); w = userInput.nextInt(); h = userInput.nextInt();
        hypo = (int)Math.sqrt(((w * w) + (h * h)));
        System.out.println();
        
        int i = 1;
        int x;
        
        while (i <= n) {
            x = userInput.nextInt(); 
            if (x <= hypo) {
                finalOutput += "DA \n";
            }
            else if (x >= hypo) {
                finalOutput += "NE \n";
            }
            
            i++;
        }
        System.out.println(finalOutput);
    }
}
