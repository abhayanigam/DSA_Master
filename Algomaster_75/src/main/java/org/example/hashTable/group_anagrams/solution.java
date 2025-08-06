// Link : https://leetcode.com/problems/group-anagrams/submissions/1724786874/

package org.example.hashTable.group_anagrams;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class solution {
    public static void main(String[] args) {
        String[] s = {"eat","tea","tan","ate","nat","bat"};

        System.out.println("The Group anagram is : " + groupAnagramCategorizeByFrequency(s));
    }

    private static List<List<String>> groupAnagramCategorizeByFrequency(String[] str) {
        // Check for empty inputs
        if(str == null || str.length == 0){
            return  new ArrayList<>();
        }

        Map<String, List<String>> frequencyStringMap = new HashMap<>();

        for (String s : str){

            String frequency = getFrequencyString(s);

            // If the frequency string is present , add the string to the list
            if(frequencyStringMap.containsKey(frequency)){
                frequencyStringMap.get(frequency).add(s);
            }else {
                // else create a new list
                List<String> strList = new ArrayList<>();

                strList.add(s);

                frequencyStringMap.put(frequency,strList);
            }
        }

        return new ArrayList<>(frequencyStringMap.values());
    }

    private static String getFrequencyString(String str) {
        // Frequency Bucket
        int[] freq = new int[26];

        // Iterate over each character
        for (char c : str.toCharArray()){
            freq[c-'a']++;
        }

        // Start creating the frequency string
        StringBuilder frequencyStringBuilder = new StringBuilder();
        char c = 'a';
        for (int i : freq){
            frequencyStringBuilder.append(c);
            frequencyStringBuilder.append(i);
            c++;
        }

        return frequencyStringBuilder.toString();
    }
}
