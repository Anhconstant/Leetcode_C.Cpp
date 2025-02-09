/*
leetcode // problems //two-sum //
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret_a =(int*)malloc(2*sizeof(int));
    if(ret_a == NULL || nums==NULL || numsSize<2) {
        *returnSize = 0;
        return NULL;
    }
    for(int i=0;i<numsSize-1;i++){
        for(int j = i+1;j<numsSize;j++) if(nums[i]+nums[j]== target) {
            *returnSize = 2;
            ret_a[0] = i;
            ret_a[1] = j;
            return ret_a;
        }
    }
    *returnSize = 0;
    free(ret_a);
    return NULL;
}
