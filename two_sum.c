int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *retarr=malloc(2*sizeof(int));
    retarr[0]=1;
    retarr[1]=1;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                retarr[0]=i;
                retarr[1]=j;
                return retarr;
            }
        }
    }
    *returnSize=0;
    return NULL;
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *retarr=malloc(2*sizeof(int));
    retarr[0]=1;
    retarr[1]=1;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                retarr[0]=i;
                retarr[1]=j;
                return retarr;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
/*

int main()
{
    int arr[]={1,3,2,5,4,6,5,4,2};
    int target=6;
    int numsSize=9;
    int returnSize=0;
    int *ans=twoSum(arr,numsSize,target,&returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ",ans[i]);
    }
    
    return 0;
}

*/
