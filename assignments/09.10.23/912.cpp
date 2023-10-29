class Solution {
public:
    void merge(int* nums,int s,int e){
        int m = s+ (e-s)/2;

        int len1= m-s+1;
        int len2=e-m;

        int* first = new int[len1];
        int* second= new int[len2];

        int index=s;

        for(int i=0;i<len1;i++){
            first[i]=nums[index++];
        }

        index=m+1;

        for(int i=0;i<len2;i++){
            second[i]=nums[index++];
        }

        int index1=0;
        int index2=0;
        index=s;

        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[index++]=first[index1++];
            }else{
                nums[index++]=second[index2++];
            }
        }

        while(index1<len1){
            nums[index++]=first[index1++];
        }

        while(index2<len2){
            nums[index++]=second[index2++];
        }

        delete[] first;
        delete[] second;


    }

    void mergesort(int* nums, int s,int e){
        int m = s+ (e-s)/2;

        if(s>=e){
            return;
        }

        mergesort(nums,s,m);
        mergesort(nums,m+1,e);
        merge(nums,s,e);
    }



    vector<int> sortArray(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int* arr =new int[nums.size()];
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
        }

        mergesort(arr,s,e);

        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i];
        }
        return nums;
    }
};