public class InsertionSort{
    public static void main(String[] args) {
        int nums[] = { 2, 5, 3, 1, 4, 8, 6, 9, 7 };
        int size = nums.length;
        int temp,j;
        System.out.println("Before sorting.");
        for (int i = 0; i < size; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();

        for(int i=1 ; i<size ;i++){
            int key = nums[i];
            j=i-1;
            while(j >=0 && nums[j]>key){
                nums[j+1]=nums[j];
                j--; 
            }
            nums[j+1]=key;
            
        }


        System.out.println("After sorting.");
        for (int i = 0; i < size; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
}
