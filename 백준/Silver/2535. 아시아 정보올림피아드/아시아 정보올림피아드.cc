#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<tuple<int,int,int>> v; 

    for(int i = 0; i < N; i++){
        int nation, num, score;
        cin >> nation >> num >> score;
        v.push_back({score, nation, num});
    }

    sort(v.begin(), v.end(), greater<>());

    int medal = 0;
    int nationCount[101] = {0};

    for(auto t : v){
        int score, nation, num;
        tie(score, nation, num) = t;

        if(nationCount[nation] >= 2) continue;

        cout << nation << " " << num << '\n';
        nationCount[nation]++;
        medal++;

        if(medal == 3) break;
    }
    
    
    return 0;
}