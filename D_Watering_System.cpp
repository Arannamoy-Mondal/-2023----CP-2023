#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long N, A, B, s[100000], S = 0;

		
	cin >> N >> A >> B;
	for(int i = 0; i < N; ++i)
	{		
		cin >> s[i];
		
		S += s[i];
	}
	

	sort(s + 1, s + N);
	
	
	int ans = 0, last = N - 1;

	while(s[0] * A < S * B)
	{
		 
		S -= s[last--];
	
		++ans;
	}
	

	cout << ans << endl;

    return 0;
}