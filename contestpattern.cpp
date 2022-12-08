#include <iostream>
using namespace std;

void printTheDiamond(int r, int c, int s)
{
    // Write your code here.
    int p=s;
    while (r)
    {
        while (c)
        {
            p=s;
            if (s > 1)
            {
                cout << "e/"
                     << "\\e" << endl;
                p = p / 2 + 1;
                while (p)
                {
                    while (p / 2)
                    {
                        cout << "/o"
                             << "o\\" << endl;
                        p--;
                    }
                    while (p)
                    {
                        cout << "\\oo"
                             << "/" << endl;
                        p--;
                    }
                }
                cout << "e\\"
                     << "//e";
            }
            c--;
        }
    cout << endl;
    r--;
    }
}
int main()
{
    int r, c, s;
    cin >> r >> c >> s;
    printTheDiamond(r, c, s);
    return 0;
}

/*  one of the solutio from coding ninja
void printTheDiamond(int r, int c, int s) {  

   int a = 0, x = 0;       int z = 0;    a = 0; s:

   while (a < s)    {

       for (int i = a; i < s - 1; i++)        {            cout << "e";        }        cout << '/';        for (int i = 0; i < 2 * a; i++)        {            cout << "o";        }        cout << "\\";

       for (int i = a; i < s - 1; i++)        {            cout << 'e';        }        z++;        if (z == c)        {            a++;            z = 0;

           cout << endl;        }

       else        {            goto s;        }    }    z = 0;    a--; q:    while (a >= 0)    {        for (int i = s - 1; i > a; i--)        {            cout << 'e';        }        cout << "\\";        for (int i = 2 * a; i > 0; i--)        {            cout << 'o';        }        cout << "/";        for (int i = s - 1; i > a; i--)        {            cout << "e";        }        z++;        if (z == c)        {            a--;            z = 0;

           cout << endl;        }

       else        {            goto q;        }    }    x++;    if (x == r)    {           }    else    {        a = 0;        goto s;    } }   

*/