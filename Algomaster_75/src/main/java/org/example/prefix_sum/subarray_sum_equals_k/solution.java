package org.example.prefix_sum.subarray_sum_equals_k;

import java.util.Arrays;
import java.util.HashMap;

public class solution {
    public static void main(String[] args) {
        System.out.println("The total number of subarrays in an array equal to K : " + getTotalSubarray(new int[]{1,1,1},2));
        System.out.println("The total number of subarrays in an array equal to K : " + getTotalSubarray(new int[]{1,-1,0},0));

//        System.out.println("The total number of subarrays in an array equal to K : " + usingTwoPointer(new int[]{1,1,1},2));
//        System.out.println("The total number of subarrays in an array equal to K : " + usingTwoPointer(new int[]{1,2, 3},3));
//        System.out.println("The total number of subarrays in an array equal to K : " + usingTwoPointer(new int[]{1},1));
//        System.out.println("The total number of subarrays in an array equal to K : " + usingTwoPointer(new int[]{-1,-1,1},0));
//        System.out.println("The total number of subarrays in an array equal to K : " + usingTwoPointer(new int[]{1,-1,0},0));
    }

        private static int getTotalSubarray(int[] nums, int k) {
        int count = 0;
        int currentCount = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0,1);

        for (int num : nums){
            currentCount += num;

            if (map.containsKey(currentCount -k)){
                count+=map.get(currentCount-k);
            }

            map.put(currentCount, map.getOrDefault(currentCount,0)+1);
        }

        return count;
    }

    //(Not ideal Solution) Fails for last case:
    private static int usingTwoPointer(int[] nums, int k) {
        if (nums.length <= 1){
            if(nums[0] == k){
                return k;
            }else{
                return 0;
            }
        }

        int left = 0, right = left + 1, total = 0;

        for (int i = 1; i <nums.length; i++) {
            if (nums[left] + nums[right] == k){
                total++;
                left++;
                right++;
            } else if (nums[left] == k || nums[right] == k) {
                total ++;
            }else{
                left++;
                right++;
            }
        }

        return total;
    }
}
