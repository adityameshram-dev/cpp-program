// multipal inheritance

#include <iostream>
using namespace std;
class batsman
{
protected:
    long tota_score;
    int per_match_score;
    float avg;

public:
    void accept()
    {
        cout << "Enter total score and per match score";
        cin >> tota_score >> per_match_score;
    }
    void calculate_avg(int x)
    {
        avg = tota_score / x;
    }
    void display()
    {
        cout << "total score: " << tota_score << endl;
        cout << "per match score: " << per_match_score << endl;
        cout << "Avrage: " << avg << endl;
    }
};
class bowler
{
protected:
    int no_wicket;

public:
    void accept1()
    {
        cout << "Enter wicket taken by bolwer: ";
        cin >> no_wicket;
    }
    void display()
    {
        cout << "Wickets: " << no_wicket << endl;
    }
};
class player : public batsman, public bowler
{
    char name[20];
    int matches;

public:
    void accept2()
    {
        cout << "Enter name of player and how many matches he played: ";
        cin >> name >> matches;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "matches: " << matches << endl;
        bowler::display();
        calculate_avg(matches);
        batsman::display();
    }
};
int main()
{
    player p1;
    p1.accept2();
    p1.accept1();
    p1.accept();
    p1.display();
    return 0;
}