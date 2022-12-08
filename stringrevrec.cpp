#include <iostream>
using namespace std;

string rev(string& a, int s, int e)//Pass by reference
{
    if (s > e)
    {
        return 0;
    }

    swap(a[s], a[e]);
    s++;
    e--;

    rev(a, s, e);
}
int main()
{

    return 0;
}