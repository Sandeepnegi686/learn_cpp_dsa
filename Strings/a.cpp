#include <iostream>
using namespace std;

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

string removeOccurrences(string s, string part)
{
    while (s.find(part) < s.size())
    {
        int i = s.find(part);
        s.erase(i, part.size());
    }
    return s;
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

string reverseWords(string s)
{
}

bool isFreqSame(int freq1[26], int freq2[])
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

bool checkInclusion(string s1, string s2)
{
    // s1 = "ab", s2 = "eidbaooo"
    int wSize = s1.size();
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        int widx = 0, idx = i;
        int wfreq[26] = {0};
        while (widx < wSize && idx < s2.size())
        {
            wfreq[s2[idx] - 'a']++;
            idx++, widx++;
        }
        if (isFreqSame(freq, wfreq))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str = " A man, a plan, a canal : Panama ";
    // string str = "hih";
    // string str = "the sky is blue";

    string s1 = "ab", s2 = "eidbaooo";

    cout << checkInclusion(s1, s2);
    //"blue is sky the"

    return 0;
}