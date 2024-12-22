    vector<vector<int>> ans(int(pow(2, nums.size())));
    for (int i = 0; i < int(pow(2, nums.size())); i++)
    {
        bitset<32> S(i);
        for (int j = 0; j < nums.size(); j++)
            if (S[j] == 1)
                ans[i].push_back(nums[j]);
    }

    return ans;