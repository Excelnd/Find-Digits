// Find Digits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int a = 0; a < t; a++) {
		int n;
		cin >> n;
		int temp = n, r, count = 0;
		while (temp) {
			r = temp % 10;
			temp = temp / 10;
			if (r != 0 && (n % r == 0))
				count++;
		}
	}
    return 0;
}

