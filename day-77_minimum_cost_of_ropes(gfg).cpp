class Solution {
  public:
  
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        long long cost = 0;     //To store the total cost of connecting ropes
        long long n = arr.size();       // Get the size of the input array
        
        // Create a min-heap (priority queue) to always get the two smallest ropes
        priority_queue< long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
        
        // While more than one rope remains
        while(pq.size() != 1)
        {
            long long a = pq.top(); pq.pop();       // Get the smallest rope and pop
            long long b = pq.top(); pq.pop();       // Get the next smallest rope and pop
            
            cost += (a+b);      //Add their lengths to the total cost
            pq.push(a+b);       //Push the combined rope back to the heap
        }
        return cost;        //return the minimal cost
    }
};