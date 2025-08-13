//Link : https://leetcode.com/problems/trapping-rain-water/description/

package org.example.two_pointers.trapping_rain_water;

public class solution {
    public static void main(String[] args) {
        System.out.println("The max unit of water can be store : " + getTrappingWaterUnit(new int[]{0,1,0,2,1,0,1,3,2,1,2,1}));
    }

    private static int getTrappingWaterUnit(int[] height) {
        int size = height.length;

        if(size == 0) return 0;

        int left = 0, right = size -1, leftMax = 0, rightMax = 0, trappedWater = 0;

        while(left < right){
            // Move the pointer with smaller height
            if(height[left] < height[right]){
                if (height[left] > leftMax){
                    leftMax = height[left];
                }else{
                    trappedWater += leftMax - height[left];
                }
                left++;
            }else{
                if (height[right] > rightMax){
                    rightMax = height[right];
                }else{
                    trappedWater += rightMax - height[right];
                }
                right--;
            }
        }

        return trappedWater;
    }
}
