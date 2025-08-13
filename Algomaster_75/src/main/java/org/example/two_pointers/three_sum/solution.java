package org.example.two_pointers.three_sum;

import java.util.*;

public class solution {
    public static void main(String[] args) {
        System.out.println("The List with zero sum in total : " + getThreeSum(new int[]{-1,0,1,2,-1,-4}));
    }

    private static List<List<Integer>> getThreeSum(int[] nums) {
        Set<List<Integer>> set = new HashSet<>();

        for (int i = 0; i < nums.length-2;i++) {
            for (int j = i+1; j< nums.length-1; j++) {
                for (int k = j+1; k < nums.length; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0){
                        List<Integer> list = Arrays.asList(nums[i],nums[j],nums[k]);

                        Collections.sort(list);

                        set.add(list);
                    }
                }
            }
        }

        return new ArrayList<>(set);
    }
}
