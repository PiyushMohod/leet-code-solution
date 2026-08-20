class Solution {
    public int[] twoSum(int[] nums, int target) {
        boolean flag=true;
        int m;
        int n;
    
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    System.out.printf("[%d,%d]",i,j);
                    int [] arr={i,j};
                    return arr;
                }
            }
        }
int [] a={};
return a;}
}
public class Main{
    public static void main(String[] args){
        Solution s=new Solution();
        int [] ar={10,20,30,40,50,60,70,80,90};
        s.twoSum(ar,100);
    }
}