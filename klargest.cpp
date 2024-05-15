#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    for (int val : values)
    {
        pq.push(val);

        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
