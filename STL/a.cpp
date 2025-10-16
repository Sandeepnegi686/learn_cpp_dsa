#include <bits/stdc++.h>
using namespace std;

// this will not return anything.
void print()
{
    cout << " hello ";
}

// int main()
// {

//     int a;
//     cin >> a;
//     printf("a is %d", a);
//     cout << "\n";
//     print();
//     return 0;
// }

// int main()
// {

//     // Pairs are available in utility library.
//     pair<int, char> p = {45, 'a'};
//     pair<int, pair<int, int>> p1 = {12, {3, 4}};
//     pair<int, int> p2[] = {{1, 2}, {3, 4}};

//     cout << p.first;
//     cout << " ";
//     cout << p.second;

//     cout << endl;
//     cout << p1.first;
//     cout << " ";
//     cout << p1.second.second;

//     cout << endl;
//     cout << p2[0].first;
//     cout << " ";
//     cout << p2[1].second;

//  cout << "\n";
//     pair<int, char> p = {2, 'b'};
//     cout << p.first << p.second;

//     return 0;
// }

// Vectors
void printVector(vector<int> numbers)
{

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
}

bool shouldISwap(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first != p2.first)
    {
        if (p1.first > p2.first)
        {
            return true;
        }
        return false;
    }
    else
    {
        if (p1.second > p2.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first != p2.first)
    {
        if (p1.first < p2.first)
            return true;
        return false;
    }
    else
    {
        if (p1.second < p2.second)
            return true;
        return false;
    }
}

int main()
{

    // {}  <-- this is a container.

    // vector<int> vec;
    // // push_back will add a element at last;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.pop_back(); // delete the last element or pop out.

    // vector<pair<int, int>> vec2;
    // vec2.push_back({1, 2});
    // vec2.push_back({3, 4});
    // vec2.emplace_back(5, 6);

    // cout << vec2[0].second;
    // cout << vec2[1].second;
    // cout << vec2[2].first;

    // vector<int> vec3(5, 100); // 100,100,100,100,100
    // vector<int> vec4(5);      // 0,0,0,0,0

    // vector<int> vec5(vec3);
    // vec3.push_back(12);

    // vector<int>::iterator it = vec.begin(); // give the memory address of the 1st element.

    // cout << *it;

    // printVector(vec5);
    // cout << "\n";
    // printVector(vec3);

    // -------------------------------------------------------------------------------------
    // vector<int> vec6;
    // vec6.push_back(10);
    // vec6.push_back(20);
    // vec6.push_back(30);
    // vec6.push_back(40);
    // vec6.push_back(50);
    // // vector<int>::iterator it = vec6.begin();
    // vector<int>::iterator it_End = vec6.end(); // end() will point to the nth value, which is undefined or not located. SO we need to do (--it) to use the last address.

    // cout << *(it_End);

    // cout << "\n"
    //      << vec6.back();
    // cout << "\n";

    // for (vector<int>::iterator it2 = vec6.begin(); it2 != vec6.end(); it2++)
    // {
    //     cout << *(it2) << "\t";
    // }
    // cout << "\n";

    // for (auto it = vec6.begin(); it != vec6.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // cout << "\n";
    // for (auto value : vec6)
    // {
    //     cout << value << " ";
    // }
    // for (auto val : vec6)
    // {
    //     cout << val << " ";
    // }
    // cout << "\n";

    // vec6.erase(vec6.begin() + 1, vec6.end() - 1 - 1); // delete the element from the address beginning upto the address -1.

    // vec6.insert(vec6.begin() + 1, 2, 20); // this will insert 20 two times at the 1st index.

    // vec6.erase(vec6.begin() + 2, vec6.begin() + 3);

    // vec6.insert(vec6.begin() + 2, 30);

    // vec6.swap(vec5); // swap the both vectors elements irrespectable of their size or elements or capacity.

    // vec6.empty(); // return true if vector is empty or return false if vector have elements.

    // vec6.clear(); // clear the vector;'

    // if (!vec6.empty())
    //     cout << "vector has elements";

    // vec6.clear();

    // cout << "\n";

    // if (vec6.empty())
    //     cout << "vector is empty";
    // printVector(vec6);

    // vector<pair<int, int>> arr = {};
    // arr.push_back({2, 4});
    // arr.push_back({3, 1});
    // arr.push_back({2, 3});
    // arr.push_back({5, 2});
    // arr.push_back({2, 5});

    // int n = arr.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (cmp(arr[i], arr[j]))
    //         {
    //             sort(arr.begin(), arr.end(), cmp);
    //         }
    //     }
    // }

    // for (pair<int, int> &p : arr)
    // {
    //     cout << p.first << ' ' << p.second << endl;
    // }

    vector<int> arr = {6, 5, 8, 2, 5, 7, 12, 42, 3};
    sort(arr.begin(), arr.end());

    for (int n : arr)
    {
        cout << n << ' ';
    }
    cout << endl;
    vector<int>::iterator it;
    it = upper_bound(arr.begin() + 3, arr.end() - 3, 41);

    if (it == arr.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "upper Bound : " << *(it);
    }

    cout << "random no." << rand();

    return 0;
}