#include <algorithm> // Don't forget to include the <algorithm> header for std::sort

class Solution {
public:
    struct meeting {
        int start;
        int end;
        int pos;
    };

    int maxMeetings(int start[], int end[], int n) {
        if (n == 0) {
            return 0;
        }

        // Create an array of meeting objects
        meeting meet[n];
        for (int i = 0; i < n; i++) {
            meet[i].start = start[i];
            meet[i].end = end[i];
            meet[i].pos = i + 1;
        }

        // Sort the meetings using a lambda function as a comparator
        std::sort(meet, meet + n, [](const meeting& m1, const meeting& m2) {
            if (m1.end < m2.end) {
                return true;
            }
            else if (m1.end > m2.end) {
                return false;
            }
            else if (m1.pos < m2.pos) {
                return true;
            }
            return false;
        });

        int ct = 1;
        int limit = meet[0].end;
        for (int i = 1; i < n; i++) {
            if (meet[i].start > limit) {
                limit = meet[i].end;
                ct++;
            }
        }
        return ct;
    }
};
