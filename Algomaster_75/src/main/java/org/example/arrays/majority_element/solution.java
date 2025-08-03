// Link: https://leetcode.com/problems/majority-element/description/

package org.example.arrays.majority_element;

import java.util.HashMap;

public class solution {
    public static void main(String[] args) {
//        int[] nums ={2,2,1,3,1,2,2,2};
        int[] nums ={6,5,5};

        int ans = MajorityNumber(nums);

        System.out.println("The Majority Number is : " + ans);

        System.out.println("The Majority Ans is : " + usingHashMap(nums));
    }

    private static int usingHashMap(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i<nums.length; i++){
            map.put(nums[i], map.getOrDefault(nums[i], 0)+1 );

            if (map.get(nums[i]) > nums.length/2){
                return nums[i];
            }
        }

        return -1;
    }

    private static int MajorityNumber(int[] nums) {
        int vote = 1;
        int majority = nums[0];

        for (int i = 1; i < nums.length; i++) {
            if (majority == nums[i]){
                vote++;
            } else if (vote == 0) {
                vote++;
                majority = nums[i];
            }else{
                vote--;
            }
        }

        return majority;
    }
}
