	int minDistance(string word1, string word2) {
		int m = word1.size();
		int n = word2.size();
		if (m == 0 && n == 0)
			return 0;
		if (m == 0)
			return n;
		if (n == 0)
			return m;
		int res = 0;
		int p = 0, q = 0;
		int flag = 0;
		vector<int> w1, w2;


		for (int i = 0; i<n; i++)
		{
			for (int j = flag; j<m; j++)
			{
				if (word1[j] == word2[i])
				{
					w1.push_back(j);
					w2.push_back(i);
					flag = j+1;
					break;
				}
			}
		}

		int l = w1.size();
		while (l>=0)
		{
			res += w1[l] - w2[l];
			l--;
		}
		while (l>=1)
		{
			if((w1[l] - w1[l - 1])>1)
			    res += w1[l] - w1[l - 1];
		}

		return res;
	}
