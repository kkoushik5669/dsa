void solve(int i, string s, string &f) {
	if (i == s.length()) {
		cout << f << " ";
		return;
	}
	//picking 
	f = f + s[i];
	solve(i + 1, s,  f);
	//poping out while backtracking
	f.pop_back();
	solve(i + 1, s,  f);
}
