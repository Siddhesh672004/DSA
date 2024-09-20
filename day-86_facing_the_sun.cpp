// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int count = 1;              // First building always sees the sun
        int maxi = height[0];       // Track the tallest building so far
        
        for(int i=1; i<height.size(); i++){
            // If the current building is taller than the tallest so far
            if(height[i] > maxi){
                count++;            // It can see the sun, so increase the count
                maxi = height[i];   // Update the tallest building
            }
        }
        return count;       // Return the total number of buildings that see the sun
    }
};