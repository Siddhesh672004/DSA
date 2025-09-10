class Solution {
  public:
    void quickSort(vector<int>& arr, int s, int e) {
        // code here
        //Base Case
          if(s >= e){
            return;
          }
        
          //partition logic
          int p = partition(arr, s, e);
        
          //pivot element -> left
          quickSort(arr, s, p-1);
          
          //pivot element -> right
          quickSort(arr, p+1, e);
    }

  public:
    int partition(vector<int>& arr, int s, int e) {
        //Step 1: Choose pivot element
      int pivotIndex = s;
      int pivotElement = arr[s];
    
      //Step 2: Find right position for pivot element & place it there
      int count = 0;
      for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
          count++;
        }
      }
    
      //When we comr out of loop the rightIndex is ready
      int rightIndex = s+count;
      swap(arr[rightIndex], arr[pivotIndex]);
      pivotIndex = rightIndex;
    
      //Step 3: left side small and right side larger elements than pivotElement
      int i = s;
      int j = e;
      while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
          i++;
        }
    
        while(arr[j] > pivotElement){
          j--;
        }
    
        // 2 cases
        // A: All elements are at the right place
        // B: Need to swap the elements
        if(i < pivotIndex && j > pivotIndex){
          swap(arr[i], arr[j]);
        } 
      }
      return pivotIndex;
    }
};