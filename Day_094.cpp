/**
 *Problem Statement:    Kekocity's population consist of N gnomes numbered with unique
        ids from 1 to N. As they are very joyful gnomes, they usually send jokes to
        their friends right after they get any (even if they knew it before) via
        their social network named as Mybeard. Mybeard became popular in the city
        because of message auto-deletion. It takes exactly one minute to read and
        resend joke to mates.Mayor of Kekocity, Mr. Shaikhinidin, is interested in
        understanding how the jokes are spread. He gives you database of Mybeard
        social network, and wants you to answer some queries on it. You will be given
        a list of friends for every gnome and M queries of the following type:
        Who will receive a message with joke after exactly K minutes,
        if the creator of joke was gnome with id x?
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void dfs(int gnome_id, int remaining_time, const vector<vector<int>>& g, vector<bool>& visited, set<int>& recipients) {
    visited[gnome_id] = true;

    if (remaining_time == 0) {
        recipients.insert(gnome_id);
    }

    if (remaining_time > 0) {
        for (int i = 0; i < g.size(); i++) {
            if (g[gnome_id][i] == 1 && !visited[i]) {
                dfs(i, remaining_time - 1, g, visited, recipients);
            }
        }
    }
}

void spread_joke(int N, const vector<vector<int>>& g, const vector<pair<int, int>>& queries) {
    for (const auto& query : queries) {
        int k = query.first;
        int x = query.second;

        vector<bool> visited(N, false);
        set<int> recipients;
        dfs(x - 1, k, g, visited, recipients);

        int num_recipients = recipients.size();
        vector<int> sorted_recipients(recipients.begin(), recipients.end());
        sort(sorted_recipients.begin(), sorted_recipients.end());

        cout << num_recipients << endl;
        if (num_recipients > 0) {
            for (int i = 0; i < num_recipients; i++) {
                cout << sorted_recipients[i] + 1 << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> g(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> g[i][j];
        }
    }

    int M;
    cin >> M;

    vector<pair<int, int>> queries;
    for (int i = 0; i < M; i++) {
        int k, x;
        cin >> k >> x;
        queries.emplace_back(k, x);
    }

    spread_joke(N, g, queries);

    return 0;
}

