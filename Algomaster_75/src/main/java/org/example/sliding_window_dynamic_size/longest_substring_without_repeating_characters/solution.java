// Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1742317611/

package org.example.sliding_window_dynamic_size.longest_substring_without_repeating_characters;

import java.util.HashSet;
import java.util.Set;

public class solution {
    public static void main(String[] args) {
        System.out.println("The ans is : " + lengthOfLongestSubstring("abcabcbb"));
        System.out.println("The ans is : " + lengthOfLongestSubstring("bbbbb"));
        System.out.println("The ans is : " + lengthOfLongestSubstring("pwwkew"));
    }

    private static int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();

        int left = 0, right = 0, maxLen = 0;

        while (right < s.length()){
            if (!set.contains(s.charAt(right))){
                set.add(s.charAt(right));
                right++;

                maxLen = Math.max(maxLen, (right - left));
            }else{
                set.remove(s.charAt(left));
                left++;
            }
        }

        return maxLen;
    }
}
