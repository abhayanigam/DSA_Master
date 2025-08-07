// Link : https://leetcode.com/problems/container-with-most-water/description/

package org.example.two_pointers.container_with_most_water;

public class solution {
    public static void main(String[] args) {
        System.out.println("The Container with most water filled : " + getContainerWithMostWaterFilled(new int[]{1,8,6,2,5,4,8,3,7}));
    }

    // Hint :
    //  Area =          length              *           width
    //      min(array[left],array[right])           (right - left)

    private static int getContainerWithMostWaterFilled(int[] height) {
        int left = 0;
        int right = height.length - 1;

        int maxArea = 0;

        while(left < right){
            int area = Math.min(height[left],height[right]) * (right - left);

            maxArea = Math.max(area,maxArea);

            if (height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }

        return  maxArea;
    }
}
