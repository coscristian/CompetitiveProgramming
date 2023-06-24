package codingBat;

import java.util.Scanner;

public class groupSum {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        int [] a = {2,4,8};
        int target = sc.nextInt();
        System.out.println(solve(0, a, target));
        sc.close();
    }

    public static boolean solve(int start, int[] nums, int target) {
        if(target == 0) return true;
        if(nums.length == 0 || start >= nums.length) return false;
        return solve(start+1, nums, target-nums[start]) || solve(start+1, nums, target);
    }    
}

