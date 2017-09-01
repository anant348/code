#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
//#include<string>
using namespace std;

const int MAX_N = int(1e6) + 10;

bool isPrime[MAX_N]; //sieve method to get every prime under 10^6

typedef long long int64;

//rem[i] correspond to the L+i,cnt[i] correspond to L+i's number of divisors
int64 rem[MAX_N];
int cnt[MAX_N];

int main() {
	fill(isPrime + 2, isPrime + MAX_N, true);

	for (int i = 2; i * i < MAX_N; ++i) {
		if (isPrime[i]) {
			for (int j = i * i; j < MAX_N; j += i)
				isPrime[j] = false;
		}
	}

	int T;
	cin >> T;
	while (T--) {
		int64 L, R;
		cin >> L >> R;

		for (int64 i = L; i <= R; ++i) {
			rem[i - L] = i;
			cnt[i - L] = 1;
		}

		for (int i = 2; i < MAX_N; ++i)
			//sieve method for every number in [L,R]
			if (isPrime[i]) {
				for (int64 j = ((L - 1) / i + 1) * i; j <= R; j += i) {
					int x = j - L;
					int c = 0;
					while (rem[x] % i == 0) {
						rem[x] /= i;
						++c;
					}
					cnt[x] *= c + 1;
				}
			}

		int ans = 0;

		for (int i = 0; i <= R - L; ++i) {
			if (rem[i] > 1) {
				cnt[i] *= 2;
			}
			if (isPrime[cnt[i]]) {
				++ans;
			}
		}

		cout << ans << endl;
	}
}
