    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ll n, x;
        cin >> n;
        ll p[n + 1], q[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            p[x] = i;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            q[x] = i;
        }

        ll res = 0;


        ll left = min(p[1], q[1]), lCnt = left;
        res += (lCnt * (lCnt + 1)) / 2;
        ll right = max(p[1], q[1]), rCnt = n - 1 - right;
        res += (rCnt * (rCnt + 1)) / 2;
        ll midCnt = right - left - 1;
        res += (midCnt * (midCnt + 1)) / 2;

        ll l = n, r = -1;
        for (ll mex = 2; mex <= n; mex++)
        {
            l = min({l, p[mex - 1], q[mex - 1]});
            r = max({r, p[mex - 1], q[mex - 1]});
            if ((l <= p[mex] && p[mex] <= r) || (l <= q[mex] && q[mex] <= r))
                continue;

            ll start = 0, end = n - 1;
            if (p[mex] < l)
                start = max(start, p[mex] + 1);
            if (q[mex] < l)
                start = max(start, q[mex] + 1);
            if (p[mex] > r)
                end = min(end, p[mex] - 1);
            if (q[mex] > r)
                end = min(end, q[mex] - 1);
            lCnt = l - start + 1, rCnt = end - r + 1;
            res += lCnt * rCnt;
        }


        res++;
        cout << res << '\n';
        return 0;
    }
