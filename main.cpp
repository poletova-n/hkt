#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> firstFriends, secondFriends;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int firstFriendId, m;
        cin >> firstFriendId >> m;
        firstFriends.insert(firstFriendId);
        for (int j = 0; j < m; j++)
        {
            int secondFriendId;
            cin >> secondFriendId;
            secondFriends.insert(secondFriendId);
        }
    }
    int ans = 0;
    set<int>::iterator it = secondFriends.begin();
    while(it != secondFriends.end())
    {
        if (firstFriends.find(*(it)) == firstFriends.end()) ans++;
        it++;
    }
    cout << ans;
}
