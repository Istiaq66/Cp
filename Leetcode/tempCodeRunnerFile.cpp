 int x = 0;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {

        while (nums[i] != nums[i + 1])
        {
            x++;
            i++;
        }
        if (x == 1)
        {
            return nums[i];
        }
        else
        {
            x = 0;
        }
    }