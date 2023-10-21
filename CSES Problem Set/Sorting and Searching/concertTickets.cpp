#include <bits/stdc++.h>

using namespace std;
#define int int64_t
#define rep(i, a, b) for(int i = a; i < b; ++i)

void concertTickets(multiset<int> &hs, int m) {
    int maxPrice, ticket;
    rep(i, 0, m){
        scanf("%lld", &maxPrice);
        auto ticketIter = hs.lower_bound(maxPrice);
        if (ticketIter != hs.begin() || *ticketIter == maxPrice){
            ticket = *ticketIter == maxPrice ? *ticketIter : *(--ticketIter);
            hs.erase(ticketIter);
        } else { ticket = -1; }
        printf("%lld\n", ticket);
    }
}

signed main() {
    int n, m, a;
    cin >> n >> m;
    multiset<int> hs;
    rep(i, 0, n) { scanf("%lld", &a); hs.insert(a); }
    concertTickets(hs, m);
}