#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.emplace_back(6);
    list<int>::iterator it = ls.begin();
    for (it; it != ls.end(); it++)
    {
        cout << *it << "\n";
    }
    cout << int(&it);
}