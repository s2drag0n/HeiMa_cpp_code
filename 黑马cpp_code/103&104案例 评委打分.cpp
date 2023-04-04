#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

class Player {
private:
    string m_Name;
    deque<int> m_Scores;
    int m_AvgScore;
public:
    Player(string name) {
        this->m_Name = name;
    }
    void addScore(int score) {
        this->m_Scores.push_back(score);
    }
    float calcAvgScore() {
        int total = 0;
        for (deque<int>::iterator it = ++(m_Scores.begin()); it != --(m_Scores.end()); it++) {
            total += *it;
        }
        return total / 8.0;
    }
    void sortDeque() {
        sort(m_Scores.begin(), m_Scores.end());
    }
    string getName() {
        return this->m_Name;
    }
};

void test01() {
    vector<Player> players;

    Player A("szl");
    Player B("dyh");
    Player C("lsc");
    Player D("lwc");
    Player E("ht");

    players.push_back(A);
    players.push_back(B);
    players.push_back(C);
    players.push_back(D);
    players.push_back(E);

    for (vector<Player>::iterator it = players.begin(); it != players.end(); ++it) {
        for (int i = 10; i > 0; --i) {
            if (i == 10)   it->addScore(105);
            else if (i == 1)   it->addScore(95);
            else {
                it->addScore(100);
            }
        }
        it->sortDeque();
        cout << "选手" << it->getName() << "的最终均分为=" << it->calcAvgScore() << endl;
    }
}
int main() {
    test01();
    return 0;
}