#include <bits/stdc++.h>
using namespace std;

// int main()
// {
// Constructor Function ----------------
// Construct a list with N elements and the value will be V.
//     list<int> l(10, 5);

// cout << *l.begin() << endl;
// for (auto it = l.begin(); it != l.end(); it++)
// {
//     cout << *it << endl;
// }

// Shortcut a print korar poddhoti: range based a print kora.
// But ata index nia kaj kora jaina.
// Kintu list er ketre ata always use korbo karon code kom likte hoi & List a index thake na.

//     for(int val: l)
//     {
//         cout << val << endl;
//     }

//     return 0;
// }

int main()
{
    // Constructor Function ----------------
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2(l); // Construct a list by copying another list list2

    int a[] = {10, 20, 30};
    list<int> l3(a, a + 3); // Construct a list by copying all elements from an array A of size N

    vector<int> v = {10, 35, 40};
    list<int> l4(v.begin(), v.end()); // Construct a list by copying all elements from a vector v.

    // Capacity Function  ----------------
    // l4.clear();                // Clears the list elements.
    // cout << l4.size() << endl; // Returns the size of the list.

    if (l4.empty()) // Return true/false if the list is empty or not.
    {
        cout << "Empty" << endl;
    }

    l4.resize(5, 200); // Change the size of the list

    for (int val : l4)
    {
        cout << val << endl;
    }

    return 0;
}