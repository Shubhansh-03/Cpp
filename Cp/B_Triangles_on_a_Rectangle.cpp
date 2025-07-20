/*A rectangle with its opposite corners in (0,0)
 and (w,h)
 and sides parallel to the axes is drawn on a plane.

You are given a list of lattice points such that each point lies on a side of a rectangle but not in its corner. Also, there are at least two points on every side of a rectangle.

Your task is to choose three points in such a way that:

exactly two of them belong to the same side of a rectangle;
the area of a triangle formed by them is maximum possible.
Print the doubled area of this triangle. It can be shown that the doubled area of any triangle formed by lattice points is always an integer.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of testcases.

The first line of each testcase contains two integers w
 and h
 (3≤w,h≤106
) — the coordinates of the corner of a rectangle.

The next two lines contain the description of the points on two horizontal sides. First, an integer k
 (2≤k≤2⋅105
) — the number of points. Then, k
 integers x1<x2<⋯<xk
 (0<xi<w
) — the x
 coordinates of the points in the ascending order. The y
 coordinate for the first line is 0
 and for the second line is h
.

The next two lines contain the description of the points on two vertical sides. First, an integer k
 (2≤k≤2⋅105
) — the number of points. Then, k
 integers y1<y2<⋯<yk
 (0<yi<h
) — the y
 coordinates of the points in the ascending order. The x
 coordinate for the first line is 0
 and for the second line is w
.

The total number of points on all sides in all testcases doesn't exceed 2⋅105
.

Output
For each testcase print a single integer — the doubled maximum area of a triangle formed by such three points that exactly two of them belong to the same side.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int w, h;
    cin >> w >> h;
    vector<vector<int>> l(4);
    for(int i=0;i<4;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int temp;
            cin >> temp;
            l[i].push_back(temp);
        }
    }
    long long ans1 = max((long long)l[0][l[0].size()-1]-(long long)l[0][0], (long long)l[1][l[1].size()-1]-(long long)l[1][0])*(long long)h;
    long long ans2 = max((long long)l[2][l[2].size()-1]-(long long)l[2][0], (long long)l[3][l[3].size()-1]-(long long)l[3][0])*(long long)w;
    
    
    // cout << ans1 << endl;
    // cout << ans2 << endl;
    cout << max(ans1, ans2) << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}