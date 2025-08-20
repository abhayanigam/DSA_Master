// Link : https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

package org.example.sliding_window.find_all_anagrams;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class solution {
    public static void main(String[] args) {
        List<Integer> result = findAnagrams("cbaebabacd","abc");

        System.out.println("The ans is :" + result);
        System.out.println("The ans is :" + findAnagrams("eidbaooo","ab"));
        System.out.println("The ans is :" + findAnagrams("eidboaoo","ab"));
    }

    private static List<Integer> findAnagrams(String s, String p) {
        int[] pCount = new int[26];
        int[] sCount = new int[26];

        List<Integer> result = new ArrayList<>();

        for(char c : p.toCharArray()){
            pCount[c - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            sCount[s.charAt(i) - 'a']++;

            if (i >= p.length()){
                sCount[s.charAt(i - p.length()) - 'a']--;
            }

            if(Arrays.equals(pCount,sCount)){
                result.add(i - p.length() + 1);
            }
        }

        return result;
    }
}


/*
 Do the same using list also
 for (char c : s.toCharArray()) {
            int index = c - 'a';

            // Ensure the list is big enough
            while (sCount.size() <= index) {
                sCount.add(0);
            }

            // Increment the count
            sCount.set(index, sCount.get(index) + 1);
        }

 */