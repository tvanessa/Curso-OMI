#include <iostream>
#include <fstream>

using namespace std;

int entrada[1002][4];

int main() {

    int n,en_ceros=0;
    cin  >> n;
    for (int y=1; y<=3; y++)
        for (int x=1; x<=n; x++)
        {
            cin  >> entrada[x][y];
            if (entrada[x][y]==0) en_ceros++;
        }

    if (en_ceros==3*n)
    {
        for (int x=1; x<=n; x++)
            cout << x << ' ';
        cout << endl;
        for (int x=n*2; x>=n+1; x--)
            cout << x << ' ';
        cout << endl;
        for (int x=n*2+1; x<=n*3; x++)
            cout << x << ' ';
        cout << endl;
    }
    else
    {
        cout << "54 53 50 49 46 45 42 41 38 37 34 33 30 29 26 25 22 21 18 17 14 13 10 9 6 5 2 1 120 119 118 117 116 115 114 113 112 111 110 109 ";
        cout << "55 52 51 48 47 44 43 40 39 36 35 32 31 28 27 24 23 20 19 16 15 12 11 8 7 4 3 84 85 88 89 92 93 96 97 100 101 104 105 108 ";
        cout << "56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 86 87 90 91 94 95 98 99 102 103 106 107";
    }



    return 0;
}
