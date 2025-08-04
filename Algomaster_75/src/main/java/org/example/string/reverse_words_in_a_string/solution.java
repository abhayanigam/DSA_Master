//Link : https://leetcode.com/problems/reverse-words-in-a-string/description/

package org.example.string.reverse_words_in_a_string;

public class solution {
    public static void main(String[] args) {
        System.out.println("The reverse ans is --> " + reverseString("the sky is blue"));
    }

    private static String reverseString(String s) {
        // Step 1: Split the input string on spaces
        String[] words = s.trim().split("\\s+");

        // Step 2: Use StringBuilder to construct the result efficiently
        StringBuilder reversed = new StringBuilder();
        for (int i = words.length - 1; i >= 0; i--) {
            reversed.append(words[i]);
            if (i != 0) {
                reversed.append(" ");
            }
        }

        return reversed.toString();
    }
}
