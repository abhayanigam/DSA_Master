// Link : https://leetcode.com/problems/longest-consecutive-sequence/description/

package org.example.hashTable.longest_consecutive_sequence;

import java.util.HashMap;
import java.util.Map;

public class solution {
    public static void main(String[] args) {
        System.out.println("The Longest consecutive number is : " + getLongestConsecutiveNumber(new int[]{100,4,200,1,3,2}));
        System.out.println("The Longest consecutive number is : " + getLongestConsecutiveNumber(new int[]{0,3,7,2,5,8,4,6,0,1}));
    }

    private static int getLongestConsecutiveNumber(int[] nums) {
        int longestLength = 0;
        Map<Integer, Boolean> exploredMap = new HashMap<>();

        for(int num : nums){
            exploredMap.put(num, Boolean.FALSE);
        }

        for(int num : nums){
            int currentLength = 1;

            // Check in forward direction
            int nextNum = num + 1;
            while(exploredMap.containsKey(nextNum) && (!exploredMap.get(nextNum))){
                currentLength++;
                exploredMap.put(nextNum, Boolean.TRUE);

                // Move the next number
                nextNum++;
            }

            // Check in reverse direction
            int prevNum = num -1;
            while(exploredMap.containsKey(prevNum) && (!exploredMap.get(prevNum))){
                currentLength++;
                exploredMap.put(prevNum, Boolean.TRUE);

                prevNum--;
            }

            longestLength = Math.max(longestLength, currentLength);
        }

        return longestLength;
    }
}

// Hint : Simple make a hashMap put all the element in it and mark all the element with false, then
// search for the left and right side of an element and if the element is present then mark that element true, and lastly update
// the length accordingly and return the largest length you'll get