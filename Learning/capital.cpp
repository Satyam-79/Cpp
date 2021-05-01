
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool isVowel(char ch)
{
	if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
		return false;

	return true;
}

string replaceConsonants(string s)

	int main()
{

	string s;
	cin >> s;

	cout << replaceConsonants(s);

	return 0;
}
