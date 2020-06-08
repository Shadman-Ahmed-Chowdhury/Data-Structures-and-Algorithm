#include <bits/stdc++.h>

using namespace std;

bool backspaceCompare(string S, string T) {
    int i = S.length() - 1;
    int j = T.length() - 1;
    int iSkip = 0, jSkip = 0;
    int icnt = 0, jcnt = 0;
    while(i >= 0 || j >= 0) {
        while(i >= 0) {
            if(S[i] == '#') {
                iSkip++;
                i--;
            }
            else if(iSkip > 0) {
                iSkip--;
                i--;
            }
            else
                break;
        }
        while(j >= 0) {
            if(T[j] == '#') {
                jSkip++;
                j--;
            }
            else if(jSkip > 0) {
                jSkip--;
                j--;
            }
            else
                break;
        }
        if(i >= 0 && j >= 0 && S[i] != T[j]) {
            return false;
        }
        if((i >= 0) != (j >= 0))
            return false;

        i--;
        j--;
    }
    return true;
}


int main()
{
    string S, T;
    cin >> S >> T;
    if(backspaceCompare(S, T))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

