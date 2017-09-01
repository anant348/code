#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()
#define IN(A, B, C)  (B) <= (A) && (A) <= (C)

typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;

#define AIN(A, B, C) assert(IN(A, B, C))

//typedef int LL;
typedef long long int LL;
//typedef __int64 LL;

vector<int> Prime;
int mark[1000002];

void sieve(int n)
{
	int i,j,limit=sqrt(n*1.)+2;

	mark[1] = 1;
	for(i=4;i<=n;i+=2) mark[i]=1;

	Prime.push_back(2);
	for(i=3;i<=n;i+=2)
		if(!mark[i])
		{
			Prime.push_back(i);

			if(i<=limit)
			{
				for(j=i*i;j<=n;j+=i*2)
				{
					mark[j] = 1;
				}
			}
		}
}

LL num[1000006];
int divs[1000006];

int main()
{
	sieve(1000000);

	int T=1;
	LL L, R, i, n, p;
	int j, cnt, sz;

	LL LIM = 1000000;
	LIM *= LIM;

	//scanf("%d", &T);
	AIN(T, 1, 5);

	while(T--)
	{  L=92345600000;R=92345699999;
		//scanf("%lld %lld", &L, &R);
		AIN(L, 1, R);
		AIN(R, L, LIM);
		AIN(R-L, 0, 1000000);

		if(L == 1) L++;

		for(i = L; i <= R; i++)
		{
			num[i - L] = i;
			divs[i - L] = 1;
		}

		//segmented sieve style
		sz = SZ(Prime);
		for(j = 0; j < sz; j++)
		{
			p = Prime[j];
			if(p > R) break;

			for(i = ((L - 1)/p + 1) * p; i <= R; i += p)
			{
				n = num[i - L];
				cnt = 0;
				while(n % p == 0)
				{
					n /= p;
					cnt++;
				}

				divs[i - L] *= cnt + 1;
				num[i - L] = n;
			}
		}

		cnt = 0;
		for(i = L; i <= R; i++)
		{
			if(num[i - L] != 1)
				divs[i - L] *= 2;
			cnt += mark[ divs[i - L] ] == 0;
		}

		AIN(cnt, 0, 1000000);

		printf("%d\n", cnt);
	}

	return 0;
}
