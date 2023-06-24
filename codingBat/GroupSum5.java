package codingBat;

import java.util.Scanner;

public class GroupSum5 {
    public static void main(String[] args) {
        int[] arr = { 2, 5, 10, 4 };
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(groupSum5(0, arr, num));
        sc.close();
    }

    public static boolean groupSum5(int start, int[] nums, int target) {
        if (start >= nums.length) {
            if (target == 0)
                return true;
            return false;
        }
        if (nums[start] % 5 == 0) {
            if (start + 1 < nums.length && nums[start + 1] == 1)
                return groupSum5(start + 2, nums, target - nums[start]);
            return groupSum5(start + 1, nums, target - nums[start]);
        }
        return groupSum5(start + 1, nums, target - nums[start]) || groupSum5(start + 1, nums, target);
    }

    public boolean groupSum5Second(int start, int[] nums, int target) {
        if (start >= nums.length) {
            if (target == 0)
                return true;
            return false;
        }
        if (groupSum5(start + 1, nums, target - nums[start]) && check(start, nums))
            return true;
        if (nums[start] % 5 != 0 && groupSum5(start + 1, nums, target))
            return true;
        return false;
    }

    public boolean check(int start, int[] nums) {
        if (start > 0 && start <= nums.length && nums[start - 1] % 5 == 0 && nums[start] == 1)
            return false;
        return true;
    }

}
