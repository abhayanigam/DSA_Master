//Link : https://leetcode.com/problems/first-missing-positive/description/

package org.example.arrays.first_missing_positive;

import java.util.HashSet;
import java.util.Set;

public class solution {
    public static void main(String[] args) {
//        int[] nums = {1,2,0};
        int[] nums = {1};
//        int[] nums = {3,4,-1,1};
//        int[] nums = {7,8,9,11,12};

        int ans = firstMissingPositive(nums);

        System.out.println("The ans is : " + ans);

        System.out.println("The missing number using hashset: " + hashSetNumber(nums));
    }

    // This is the better approach in to get the missing number
    private static int hashSetNumber(int[] nums) {
        Set<Integer> set = new HashSet<>();

        for (int num : nums){
            set.add(num);
        }

        for (int i = 1; i<nums.length+1; i++){
            if (!set.contains(i)){
                return i;
            }
        }

        return -1;
    }

    private static int firstMissingPositive(int[] nums) {
        int xorAll = 0;

        for (int i = 0; i<= nums.length; i++){
            xorAll = xorAll ^ i;
        }

        System.out.println("The value of xorAll after iteration :" + xorAll);

        for(int num : nums){
            xorAll = xorAll ^ num;
        }

        return xorAll;
    }
}

/*
    Using XOR, which is suitable for missing numbers in a sequence (like 0 to n),
    but not for an unsorted array that may contain negatives, zeros, or large numbers.

    Hint :
    Using XOR for solve the problem

    Properties of XOR:
        Commutative:
            - A XOR B = B XOR A
            - A XOR B XOR C = C XOR B XOR A

        XOR with 0:
            - A XOR 0 = A --> Example : 3 XOR 0 = 3
        XOR with self:
            - A XOR A = 0 --> Example : 2 XOR 2 = 0


    So, for the problem:
        Array : [2,3,5,0,1];

        n = 5;

        Step 1:
            1 XOR 2 XOR 3 XOR 4 XOR 5
                    XOR
            2 XOR 3 XOR 5 XOR 0 XOR 1

        Step 2: 1 XOR 1, 2 XOR 2 ...
        Step 3: 4 XOR 0 is remaining --> 4  is the ans
*/