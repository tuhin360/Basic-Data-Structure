#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 40, 40, 60, 70, 200};
    // list<int> l2;
    // list<int> l3 = {400, 500, 600};
    // vector<int> v = {3, 4, 5};

    // Assign another list.
    // l2 = l;
    // Or:
    // l2.assign(l.begin(), l.end());

    // Add an element to the tail & head
    // l2.push_back(200);
    // l2.push_front(100);

    // Delete the tail & head
    // l2.pop_back();
    // l2.pop_front();

    // Access the ith element
    // cout << *next(l2.begin(), 2) << endl;

    // Insert elements at a specific position.
    // l2.insert(next(l2.begin(),2), 500);
    // l2.insert(next(l2.begin(), 2), l3.begin(), l3.end());
    // l2.insert(next(l2.begin(), 2), v.begin(), v.end());

    // Delete elements from a specific position
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // Replace all the value(40) with replace_value(500).Not under a list STL.
    replace(l.begin(), l.end(), 40, 500);

    // Find the value V(200). Not under a list STL
    auto it = find(l.begin(), l.end(), 200);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}