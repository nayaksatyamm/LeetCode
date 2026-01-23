int alternatingSum(int* nums, int numsSize) {
    int i,sum1=0,sum2=0,res=0;
    for(i=0;i<numsSize;i++){
        if(i%2==0 || i==0)
            sum1=sum1+nums[i];
        else
            sum2=sum2-nums[i];
    }
    res=sum1+sum2;
    return res;   
}