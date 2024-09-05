/**
 *   Author : iman321 
 *   Created: 2024-05-16 20:24:22
**/
#include <bits/stdc++.h>
using namespace std;
#define        fast            ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define        nl              '\n'
#define        fix(x)          fixed << setprecision(x)
#define        ll              long long
#define        ull             unsigned long long
#define        pb              push_back
#define        mp              make_pair
#define        ff              first
#define        ss              second
#define        YES             cout << "YES\n";
#define        NO              cout << "NO\n";
#define        Yes             cout << "Yes\n";
#define        No              cout << "No\n";
#define        read(x)         cin >> x;
#define        write(x)        cout << x;
#define        all(x)          x.begin(), x.end()
#define        loop(i, a, b)   for (int i = a; i < b; i++)
#define        rloop(i, a, b)  for (int i = a; i >= b; i--)
#define        inputV(x, n)    for (int i = 0; i < n; i++) cin >> x[i];
#define        mod             1e9 + 7
#define        INF             1e18
#define        pii             pair<int, int>
#define        pll             pair<ll, ll>
#define        vi              vector<int>
#define        vll             vector<ll>

/*---------------------------Seive Algorithm------------------------------*/
// const int maxN = 2e7 + 7;
// vector<bool>isPrime(maxN,true);
// vector<ll> primes;
// void seive()
// {
//     isPrime[0] = isPrime[1] = false;
//     for (int i = 2; i * 1ll * i <= N; i++)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i * i; j <= N; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i <= N; i++)
//     {
//         if (isPrime[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

/*-----------------Binary Search-----------------------------------------------------
int Binary_search(vector<int>&a, int target)
{
    int low=0,high=a.size()-1;
    int ans=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==target)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans; 
} */


/*--------------------------Prefix Sum Algorithm---------------------------------
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

    cin >> Q;
    int l, r;
    while (Q--)
    {
        cin >> l >> r;
        if (l != 0)
            cout << prefix_sum[r] - prefix_sum[l - 1]<<nl;
        else{
            cout<<prefix_sum[r]<<nl;
        }
    }

*/
/*-----------------------------------Binary Exponentiation------------------------
ll bin_pow(ll x,ll y,ll m)
{
    ll ans=1;
    while (y)
    {
        if(y%2==1)
        {
            ans=(ans*x)%m;
            y--;
        }
        else
        {
            x= (x*x)%m;
            y/=2;
        }
    }
    return ans;
    
}

*/


/*-----------------------------Prime factorization------------------------------
vector<pair<ll, ll>> prime_fact_count(ll n)
{
    vector<pair<ll, ll>> tmp;

    for (auto &x : primes)
    {
        if (x * x > n)
            break;
        ll cnt = 0;
        while (n % x == 0)
        {
            n /= x;
            cnt++;
        }
        if (cnt != 0)
            tmp.push_back({x, cnt});
    }

    if (n > 1)
        tmp.push_back(make_pair(n, 1));

    return tmp;
}
*/
/*-----------------------------------------------Leading And Trailing Zeros-----------
int leading_zero(ll base, ll power)
{
    double x = power * log10(base);

    x = x - floor(x);
    ll ans = pow(10, x) * 100;
    // cout<<ans<<nl;
    //  x=log10^(y)
    return ans;
}
string tariling_zero(ll base, ll power)
{
    ll ans = 1;

    while (power)
    {
        if (power % 2 == 1)
        {
            ans = (ans * base) % mod;
            power--;
        }
        else
        {
            base = (base * base) % mod;
            power /= 2;
        }
    }

    string res = to_string(ans);
    while(res.size() < 3)
    {
        res = '0' + res;
    }
    return res;
}
*/

/*------------------------------Base Conversion------------------
const int MxN = 1000;
vector<int> a(MxN);
int char_to_int(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 10; // c-'A' =0 && +10 means its value 10;
    }
    else if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 36;
    }

    return c - '0';
}

char int_to_char(int x)
{
    if (x >= 36)
    {
        return x + 'a' - 36;
    }
    else if (x >= 10)
    {
        return x + 'A' - 10;
    }

    return x + '0';
}
void solve()
{
    int n, m;
    string input;
    cin >> n >> m >> input;
    a.clear();

    cout << n << " " << input << nl;
    //cout << m << nl;
    for (int i = 0; i < input.size(); i++)
    {
        a[i] = char_to_int(input[i]);
    }
    string ans = "";
    bool flag = true;

    int tmp;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < input.size(); i++)
        {
            tmp = a[i] % m;
            a[i] /= m;

            if (a[i] != 0)
            {
                flag = true;
            }
            if (i != input.size() - 1)
            {
                a[i + 1] += (n * tmp);
            }
            else
            {
                ans += int_to_char(tmp);
            }
        }
    }

    reverse(all(ans));
    cout <<m<<" "<< ans << nl<<nl;

    // out(a);
*/
/*--------------------------Tariling Zeros-----------------------------
void solve()
{
    ll n;
    cin >> n;

    ll ans = 1;
    for (ll x : primes)
    {
        if (x * x > n)
            break;
        int cnt = 0;

        while (n % x == 0)
        {
            cnt++;
            n /= x;
        }
        if (cnt)
            ans *= (cnt + 1);
    }
    if (n > 1)
        ans *= 2;

    cout << ans - 1 << nl;
}
*/



/*********---------Aggrasive Cow ************************************
bool CanPalceCow(vector<int>&barns,int distance,int cows)
{
    int count=1,last=barns[0];
    for(int i=1;i<barns.size();i++)
    {
        if(barns[i]-last>=distance)
        {
            count++;
            last=barns[i];
        }
    }
    if(count>=cows) return true;
    else return false;
}
void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int>barns(n);
    for(int i=0;i<n;i++)
    {
        cin>>barns[i];
    }
    sort(barns.begin(),barns.end());

    int low=1,high=barns.back()-barns.front();
    int ans=0;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(CanPalceCow(barns,mid,k))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<ans<<nl;
}
*/


/*--------------------------------Kefa and Company---------------------------
void solve()
{
    ll n,d;
    cin>>n>>d;

    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    // for (size_t i = 0; i <n; i++)
    // {
    //     cout<<a[i].first<<" "<<a[i].second<<nl;
    // }

    ll ans=0,l=0,r=0;
    ll sum=0;
    while (r<n)
    {
        if(a[r].first-a[l].first<d)
        {
            sum+=a[r].second;
            r++;
        }
        else
        {
            sum-=a[l].second;
            l++;
        }
        ans=max(ans,sum);
    }

    cout<<ans<<nl;
}

*/

/*---------------------------------Feel The Container-------------------------
const int MAX = 1010;
vector<int> a(MAX);
int n, m;

bool check(int candidate_ans)
{
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > candidate_ans)
        {
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= m;
}
int binary_search(int mxCap, int total)
{
    int low = mxCap, high = total, ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
void solve()
{
    
    while (cin >> n >> m)
    {
        int total = 0, mxCap = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mxCap = max(mxCap, a[i]);
            total += a[i];
        }
        cout << binary_search(mxCap, total) << nl;
    }
}*/

void solve()
{
    int n;
    cin >> n;
    
}
int main()
{
    fast;
    int t = 1;
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}