#include <iostream>
#define MAX_N 100005
int reset[MAX_N];
using namespace std;

void KMPpreprocess(string pat) {
	int i = 0, j = 1;
	reset[0] = -1;
	while(i < pat.size()) {
		// Check for resetting
		while(j >= 0 and pat[i]!=pat[j]) {
			j = reset[j];
		}
		i++;
		j++;
		reset[i] = j;
	}
}

void KMPsearch(string str, string pat) {
	KMPpreprocess(pat);
	int i = 0, j = 0;
	while(i < str.size()) {
		while(j >= 0 and str[i] != pat[j]) {
			j = reset[j];
		}
		i++;
		j++;
		if(j == pat.size()) {
			cout<<"Pattern is found at"<<i-j<<endl;
			j = reset[j];
		}
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	for(int i = 0; i < MAX_N; i++) {
		reset[i] = -1;
	}
	string str, pat;
	cin>>str>>pat;
	KMPsearch(str, pat);
	return 0;
}

//***** Another Approch *******//

// string matching
LPS ← ComputeLPS(Pattern) {build LPS table function}
i ← 0
j ← 0
n ← string length
m ← pattern length
while i < n do
    if pattern[j] = string[i] then  {if the characters are a match}
        i ← i + 1
        j ← j + 1
      if j = m then  {j pointer has reached end of pattern}
        return i - j {index of the match}
            j ← LPS[j - 1]
              
    else if i<n && pattern[j] != string[i] then {no match}
            if j > 0
            j ← LPS[j - 1]
          else
            i ← i + 1
return -1 {no match}

// computing LPS
LPS ← array [size = pattern length]
LPS[0] ← 0  {LPS value of the first element is always 0}
len ← 0  {length of previous longest proper prefix that is also a suffix}
i ← 1
m ← length of pattern
while i < m do
    if pattern[i] is equal to pattern[len] then 
        len ← len + 1
        LPS[i] ← len
        i ← i + 1
    else  {pattern[i] is not equal to pattern[len]}
        if len is not equal to 0 then
            len ← LPS[len - 1]
        else  {if len is 0}
            LPS[i] ← 0
            i ← i + 1
return LPS
