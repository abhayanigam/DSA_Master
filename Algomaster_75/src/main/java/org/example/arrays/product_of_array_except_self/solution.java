//Link : https://leetcode.com/problems/product-of-array-except-self/description/

package org.example.arrays.product_of_array_except_self;

import java.util.Arrays;

public class solution {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};

        int[] ans = productExceptSelf(nums);

        System.out.println("The ans is : " + Arrays.toString(ans));
    }

    private static int[] productExceptSelf(int[] nums) {
        int[] left = new int[nums.length];
        int[] right = new int[nums.length];
        int[] ans = new int[nums.length];

        left[0] = 1;
        right[nums.length-1] = 1;

        for (int i = 1; i < nums.length; i++) {
            left[i] = left[i-1] * nums[i-1];
        }

        for (int i = nums.length-2; i > -1 ; i--) {
            System.out.println("The value of nums is " + nums[i]);
            right[i] = right[i+1] * nums[i+1];
        }

        for (int i = 0; i < nums.length; i++) {
            ans[i] = right[i] * left[i];
        }

        return ans;
    }
}


// Hint :
/*
    The given array is [2,1,3,4]
    first find the left and right array then multiple both the array to get the result

    for left array:
    left[0] = 1;

    loop start from 1;

    1. Left[1] = left[1-1] * nums[1-1];
                = left[0] * nums[0];
                = 1 * 2 --> 2;

    2. Left[2] = left[2-1] * nums[2-1];
                = left[1] * nums[1];
                = 2 * 1 --> 2;
    3. Left[3] = left[3-1] * nums[3-1];
                = left[2] * nums[2];
                = 2 * 3 --> 6;

    So the left array is [1,2,2,6];

    initialize the right array right[nums.length - 1] = 1;
    similarly the right array is [12,12,4,1]
*/