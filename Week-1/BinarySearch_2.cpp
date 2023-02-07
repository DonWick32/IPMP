int left (vi nums, int key){
	int l = 0;
	int r = nums.size() - 1;
	while (r - l > 1){
		int m = (r + l)/2;
		if (nums[m] >= key){
			r = m;
		} else {
			l = m;
		}
	}
	return r;
}

int right (vi nums, int key){
	int l = 0;
	int r = nums.size() - 1;
	while (r - l > 1){
		int m = (r + l)/2;
		if (nums[m] <= key){
			l = m;
		} else {
			r = m;
		}
	}
	return l;
}

int checkMajority(vector<int>&nums, int key){
	if (right(nums, key) - left(nums, key) + 1 > nums.size()/2){
		return true;
	} else {
		return false;
	}
	return 0;
}
