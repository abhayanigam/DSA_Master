// Link : https://leetcode.com/problems/permutation-in-string/submissions/1741141440/

package org.example.sliding_window.permutation_in_string;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class solution {
    public static void main(String[] args) {
        System.out.println("The ans is :" + checkInclusion("ab","eidbaooo"));
        System.out.println("The ans is :" + checkInclusion("ab","eidboaoo"));
    }

    private static boolean checkInclusion(String s1, String s2) {
        int[] sOneCount = new int[26];
        int[] sTwoCount = new int[26];

        List<Integer> result = new ArrayList<>();

        for (char c : s1.toCharArray()){
            sOneCount[c - 'a'] ++;
        }

        for (int i = 0; i< s2.length(); i++){
            sTwoCount[s2.charAt(i) - 'a'] ++;

            if (i >= s1.length()){
                sTwoCount[s2.charAt(i - s1.length()) - 'a']--;
            }

            if (Arrays.equals(sOneCount,sTwoCount)){
                result.add(i - s1.length() + 1);
            }
        }

        return !result.isEmpty();
    }
}
