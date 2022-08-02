class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         int n = matrix.size();
        // Taking a max-heap as we need to find the smallest.
          priority_queue<int> max_heap;
          for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                    max_heap.push(matrix[i][j]);
                    // If the element is greater than the current top of heap so it can't be part of kth smallest.
                    // Since, each row is sorted in ascending order,
                    // hence, elements to the right of the same row also can't be part of kth smallest.
					// So, we shift to next row.
                    if(max_heap.top() < matrix[i][j])
                    {
                        i++;
                        j = 0;
                    }
                    if(max_heap.size() > k){
                         max_heap.pop();
                    }
              }
          }
          return max_heap.top();
    }
};