#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 30, 40, 50, 30, 60, 60, 10};

    // Remove the value V from the list
    // l.remove(60);

    // Sort the list in ascending order
    // l.sort();

    // Sort the list in descending order
    // l.sort(greater<int>());

    // Deletes the duplicate values from the list. You must sort the list first.
    // l.unique();

    // Reverse the list.
    l.reverse();

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}