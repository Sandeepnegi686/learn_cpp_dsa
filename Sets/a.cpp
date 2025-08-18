
#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    set<vector<int>> st1(items1.begin(), items1.end());
    set<vector<int>> st2(items2.begin(), items2.end());

    set<vector<int>> st3;

    set<vector<int>>::iterator it1;
    for (it1 = st1.begin(); it1 != st1.end(); it1++)
    {
        for (auto it = it1->begin(); it != it1->end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> items1 = {{1, 3}, {2, 2}};
    vector<vector<int>> items2 = {{7, 1}, {2, 2}, {1, 4}};
    mergeSimilarItems(items1, items2);
    return 0;
}