#include <bits/stdc++.h> // This will work only for g++ compiler.
using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)       // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)      // 1 based indexing
#define forRev0(i, n) for (int i = (int)(n)-1; i >= 0; --i) // reverse 0 based.
#define forRev1(i, n) for (int i = (int)(n); i >= 1; --i)   // reverse 1 based

// short hand for usual tokens
#define pb push_back
#define pf
#define fi first
#define se second
#define el endl

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end()    // Forward traversal
#define rall(x) (x).rbegin(), (x).rend() // reverse traversal

// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c, i) for (__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c, x) ((c).find(x) != (c).end())

// find version works for all containers. This is present in std namespace.
#define cpresent(c, x) (find(all(c), x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())

// Shorthand for commonly used types
typedef vector<int> vi;    // vector of int
typedef vector<vi> vvi;    // 2d vector
typedef pair<int, int> ii; // ii represents pair
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef long double ld;
typedef unsigned long long ull;

char en = '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // taking input
    ll n, k;
    cin >> n >> k;
    vll arr(n);
    for0(i, n)
    {
        cin >> arr[i];
    }

    // algorithm starts here
    ll sum = accumulate(arr.begin(), arr.begin() + k, 0);
    ll minsum = sum;
    int finalIndex = 0;

    for0(i, n - k)
    {
        sum += arr[i + k] - arr[i];
        if (sum < minsum)
            finalIndex = i;
    }
    cout << finalIndex + 1 << en;
}