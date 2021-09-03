long long sum(int* a, int n) {
	long long ans = 0;
	int j;
	for (j = 0; j < n; j++) {
		ans = ans + a[j];
	}
	return ans;
}