class Solution {
  public:
    
    //Function to merge the two arrays
    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        
        //Storing the elements in the temp array in sorted order
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        //In case the elements in the left half are still right
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        
        //In case the elements in the right half are still right
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
        
        //Moving all elements from temp to arr
        for(int i=low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        // recursive code
        if(l == r) return;
        int mid = (l + r)/2;
        mergeSort(arr, l, mid);     //Sorting the left part
        mergeSort(arr, mid+1, r);   //Sorting the right part
        merge(arr, l, mid, r);      //Merging the left & right parts
    }
};