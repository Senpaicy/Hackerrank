#include <bits/stdc++.h>

using namespace std;

// https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

long finda(string s){
    long counter = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            counter++;
        }
    }

    return counter;
}

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    if(s.size() == 1 && s[0] == 'a'){
        return n;
    }

    long timees = n / s.size();
    cout << timees << endl;
    timees *= finda(s);


    long chcounter = 0; 
    string ss = "";
    for(long i = 0; i < n%s.size(); i++){
        cout << chcounter << endl;
        ss += s[chcounter];
        chcounter++;
        if(chcounter == s.size()){
            chcounter = 0;
        }
    }
    cout << ss << endl;
    return finda(ss) + timees;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
