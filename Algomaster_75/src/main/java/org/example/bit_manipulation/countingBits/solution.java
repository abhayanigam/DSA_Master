// Link : https://leetcode.com/problems/counting-bits/submissions/1723434849/

package org.example.bit_manipulation.countingBits;

import java.util.Arrays;

public class solution {
    public static void main(String[] args) {
        System.out.println("The number of 1's in a series : " + Arrays.toString(countBit(5)));
    }

    private static int[] countBit(int num) {
        int[] ans = new int[num+1];

        for (int i = 0; i<= num; i++){
            ans[i] = findOnes(i);
        }

        return ans;
    }

    private static int findOnes(int i) {
        if (i == 0) return 0;
        if (i == 1) return 1;

        // For Even
        if(i%2 == 0){
            return findOnes(i/ 2);
        }
        // For Odd
        else{
            return (findOnes(i/2) + 1);
        }
    }
}
