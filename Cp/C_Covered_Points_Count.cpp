#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
	cin >> n;
	// This stores the original endpoints to use in our frequency array later
	vector<pair<ll, ll>> segments(n);
	// This stores only the unique endpoints in sorted order
	set<ll> points;
	for (int i = 0; i < n; i++) {
		cin >> segments[i].first >> segments[i].second;
		points.insert(segments[i].first);
		points.insert(segments[i].second + 1);
	}

	int cur = 0;
	// This map stores the compressed coordinates.
	map<ll, int> compressed;
	vector<ll> coords;

	for (const ll c : points) {
		// Assign c to cur, where cur is our compressed coordinate for "a".
		compressed[c] = cur;
		/*
		 * We still need to remember our original endpoints so
		 * we can retransform the compressed coordinates
		 */
		coords.push_back(c);
		cur++;
	}
	// This stores the frequency of a given endpoint.
	vector<int> freq(2 * n);
	for (int i = 0; i < n; i++) {
		/*
		 * A segment starts from [l*, r*], so we should end the segment
		 * at r* + 1 to ensure that r* is included into the segment.
		 */
		freq[compressed[segments[i].first]]++;
		freq[compressed[segments[i].second + 1]]--;
	}
	// prefix sums for number of points at a given compressed endpoint
	for (int i = 1; i < 2 * n; i++) { freq[i] += freq[i - 1]; }

	// covered_num[i] := number of points covered by exactly i segments
	vector<ll> covered_num(n + 1);
	for (int i = 1; i < coords.size(); i++) {
		/*
		 * We decompress the endpoints for a given frequency and add the points
		 * in this range to the answer.
		 */
		covered_num[freq[i - 1]] += coords[i] - coords[i - 1];
	}

	for (int i = 1; i <= n; i++) { cout << covered_num[i] << " "; }
	cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
