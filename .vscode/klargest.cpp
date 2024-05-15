#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    // Push elements of the vector into the priority queue
    for (int val : values) {
        pq.push(val);

        // If the size of the priority queue exceeds k, pop the smallest element
        if (pq.size() > k)
            pq.pop();
    }

    // The top of the priority queue will be the kth largest element
    return pq.top();
}
