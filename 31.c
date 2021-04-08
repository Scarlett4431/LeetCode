//31. Next Permutation
void nextPermutation(int* nums, int numsSize){
    void swap(int* nums, int i, int j);
    void reverse(int* nums, int i, int j);
    int i= numsSize-2;
    while (i>=0 && nums[i]>=nums[i+1]){
        i--;
    }
    if (i>=0){
        int j= numsSize-1;
        while (j>i && nums[j]<= nums[i]){
            j--;
        }
        swap(nums, i, j);
    }
    reverse(nums, i+1,numsSize-1);
}

void swap(int* nums, int i, int j){
    int temp= nums[i];
    nums[i]= nums[j];
    nums[j]= temp;
}

void reverse(int* nums, int i, int j){
    while(i<j){
        swap(nums, i++, j--);
    }
}
