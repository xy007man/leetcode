#include <iostream>
#include <vector>

using namespace std;

/* Ñ°ÕÒK´óÔªËØ */
int findMedianSortedArrays(const vector<int>& A, const vector<int>& B) {

    int maxLoopTime = A.size() >= B.size() ? A.size() : B.size();
    int mid = (A.size() + B.size()) / 2;
    int curA = 0, curB = 0, m = 0;

    for (int i=0; i<maxLoopTime; i++) {
        if (curA < A.size() && curB < B.size()) {
            if (A[curA] < B[curB]) {
                if (m++ == mid)
                    return A[curA];
                curA++;
            }
            else {
                if (m++ == mid)
                    return B[curB];
                curB++;
            }
        }
        else if (curA < A.size()) {
            if (m++ == mid)
                return A[curA];
            curA++;
        }
        else if (curB < B.size()) {
            if (m++ == mid)
                return B[curB];
            curB++;
        }
    }
}

int main()
{
    int a[6] = {1,2,8,9,11,15};
    vector<int> A(a, a+6);

    int b[3] = {3,4,16};
    vector<int> B(a, a+3);

    int res = findMedianSortedArrays(A, B);

    cout << res << endl;

    return 0;
}
