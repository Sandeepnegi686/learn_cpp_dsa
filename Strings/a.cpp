#include <iostream>
using namespace std;

#include <algorithm>

bool isAlphaNumberic(char ch)
{
    if (((65 <= ch) && (ch <= 90)) || ((97 <= ch) && (ch <= 122)) || ((48 <= ch) && (ch <= 57)))
    {
        return true;
    }
    return false;
}

bool isPalindrome(string str)
{
    int s = 0, e = str.length() - 1;
    while (s < e)
    {
        if (!isAlphaNumberic(str[s]))
        {
            s++;
            continue;
        }

        if (!isAlphaNumberic(str[e]))
        {
            e--;
            continue;
        }

        if (tolower(str[s++]) != tolower(str[e--]))
            return false;
    }
    return true;
}

// str = "daabcbaabcbc", part = "abc";
string removeOccurrences(string str, string part)
{
    while (str.size() >= part.size())
    {
        int idx = str.find(part);
        if (idx > str.size())
        {
            break;
        }
        str.erase(idx, part.size());
    }
    return str;
}

bool isAlphaNumberic2(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9'))
    {
        return true;
    }
    return false;
}

bool isPalindrome2(string str)
{
    int s = 0, e = str.size() - 1;
    while (s < e)
    {
        if (!isAlphaNumberic2(str[s]))
        {
            s++;
            continue;
        }
        else if (!isAlphaNumberic2(str[e]))
        {
            e--;
            continue;
        }
        if (tolower(str[s++]) != tolower(str[e--]))
        {
            return false;
        }
    }
    return true;
}

string reverseWords(string str)
{
    int n = str.size();
    reverse(str.begin(), str.end());
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && str[i] != ' ')
            word += str[i++];
        if (word.size() > 0)
        {
            reverse(word.begin(), word.end());
            ans += word + " ";
        }
    }
    ans.pop_back();

    return ans;
}

bool sameFreq(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}
// abc
bool checkInclusion(string s1, string s2)
{
    int s1Freq[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        s1Freq[s1[i] - 'a']++;
    }
    int winSize = s1.size();
    // asdfwaef
    for (int i = 0; i < s2.size(); i++)
    {
        int winIdx = i;
        int s2Freq[26] = {0};
        while (winIdx < (s1.size() + i) && winIdx < s2.size())
        {
            s2Freq[s2[winIdx++] - 'a']++;
        }
        if (sameFreq(s1Freq, s2Freq))
        {
            return true;
        }
    }
    return false;
}

string compression(string str)
{
    int idx = 0;
    for (int i = 0; i < str.size();)
    {
        char currentChar = str[i];
        int count = 0;
        while (i < str.size() && currentChar == str[i])
            count++, i++;
        if (count == 1)
            str[idx++] = currentChar;
        else
        {
            str[idx++] = currentChar;
            string chars = to_string(count);
            for (char ch : chars)
                str[idx++] = ch;
        }
    }
    str.erase(idx);
    return str;
}

int main()
{
    // string str = " A man, a plan, a canal : Panama ";
    // string str = "hih";
    // string str = "  the sky is blue  ";

    // string s1 = "ab", s2 = "eidbaooo";

    // char chars[] = {"a", "a", "b", "b", "c", "c", "c"};

    // string s = "daabcbaabcbc", part = "abc";
    string str = "aabbccc";

    cout << compression(str);
    // string name = "sandeep";
    // name.erase(1, 2);
    // cout << name;
    //"blue is sky the"

    return 0;
}