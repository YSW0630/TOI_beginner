#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int N, S, F;
	cin >> N >> S >> F;
	int tar[4000];
	bool num[10005] = {};
	for(int i=0; i<N; i++) {
		cin >> tar[i];
	}
	int cnt = 0;
	int prev = INT_MAX;
	for(int i=0; i<N; i++) {
		if(num[tar[i]]) {
			num[tar[i]] = false;
			if(tar[i] == F && S == 1) {
				cnt = prev;
				break;
			}
		}
		else {
			num[tar[i]] = true;
			cnt++;
		}
		if(tar[i] == F) {
			prev = cnt;
			S--;
		}
		if(S == 0) break;
	}
	cout << cnt << '\n';
}
