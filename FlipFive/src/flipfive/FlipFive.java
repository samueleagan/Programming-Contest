/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package flipfive;

import java.util.*;
public class FlipFive {

    public static void main(String[] args) {
        // * = black tile
        // . = white tile
        
        
        
        Scanner userInput = new Scanner(System.in);
        int numberOfProblems;
        String line = "", problem = "";
        
        numberOfProblems = userInput.nextInt();
        
        for (int i = 0; i <= numberOfProblems + 1; i++) {
            line = userInput.next();
            problem += line + "\n";
  
        }
        ArrayList<Character> string = new ArrayList();
        for (int i = 0; i < problem.length(); i++) {
            string.add(problem.charAt(i));
        }
        
        
        
        System.out.println(string);
        
        
        
        
    }
    
}
