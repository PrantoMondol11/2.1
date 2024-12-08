public class BubbleSort {
    public static void main(String[] args) {
        int nums[] = { 2, 5, 3, 1, 4, 8, 6, 9, 7 };
        int size = nums.length;
        int temp;
        System.out.println("Before sorting.");
        for (int i = 0; i < size; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size-1; j++) {
                if (nums[j] > nums[j+1]) {
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        System.out.println("After sorting.");
        for (int i = 0; i < size; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
