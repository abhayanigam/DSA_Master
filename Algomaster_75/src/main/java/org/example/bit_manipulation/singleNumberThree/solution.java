// Link : https://leetcode.com/problems/single-number-iii/description/

package org.example.bit_manipulation.singleNumberThree;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class solution {
    public static void main(String[] args) {
        extracted(new int[]{1, 2, 1, 3, 2, 5});
        extracted(new int[]{-1,0});
        extracted(new int[]{0,1});
    }

    private static void extracted(int[] nums) {
        Set<Integer> set = new HashSet<>();

        Arrays.sort(nums);

//        System.out.println("The sorted nums is :" + Arrays.toString(nums));

        int vote = 1;
        int majority = nums[0];

        for (int i = 1; i< nums.length; i++){
            if (vote == 0){
                set.add(nums[i]);
            } else if (majority == nums[i]) {
                vote++;
            }else{
                vote--;
            }
        }

        if (set.isEmpty()){
            System.out.println("The final ans is : " + Arrays.toString(nums));
        }else {
            System.out.println("The final ans is : " + set);
        }
    }
}
