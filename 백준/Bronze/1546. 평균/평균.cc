#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

void maximum(float M, float*max);
float cul(float M, float m);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int r; cin >> r;
	float num;

	float min = 100;
	float avg = 0;
	float max = 1;

	for (int i = 0; i < r; i++) {
		cin >> num;
		maximum(num, &max);

		avg += num;
	}

	avg /= r;
	float sum = cul((float)max, (float)avg);
	cout << fixed << setprecision(7) << sum;

	return 0;
}

void maximum(float M, float* max) {
	if (M > *max) *max = M;
}

float cul(float M, float m) {
	return (m / M) * 100;
}