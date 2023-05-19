// https://leetcode.com/problems/number-of-recent-calls/?envType=study-plan-v2&id=leetcode-75

#include <queue>
using std::queue;

class RecentCounter {
    public:

    queue<int>* q;
    RecentCounter() {
        q = new queue<int>();
    }

    int ping(int t) {
        q->push(t);
        int s = t - 3000;
        int i = 0;
        while (q->front() > s) {
            q->pop();
            i++;
        }

        return i;
    }

};