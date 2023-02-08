int findCeil (vi nums, int key){
	int l = 0;
	int r = nums.size() - 1;
	while (r - l > 1){
		int m = (r + l)/2;

		if (nums[m] > key){
			r = m;
		} else {
			l = m;
		}
	}
	return r;
}

int findFloor (vi nums, int key){
	int l = 0;
	int r = nums.size() - 1;
	while (r - l > 1){
		int m = (r + l)/2;
		if (nums[m] < key){
			l = m;
		} else {
			r = m;
		}
	}
	return l;
}

int find(vector<int>&nums, int key){
	int floor, ceil;
	if (key <= nums[0]){
		floor = -1;
		ceil = nums[0];
	} else if (key >= nums[nums.size() - 1]){
		floor = nums[nums.size() - 1];
		ceil = -1;
	} else {
		floor = nums[findFloor(nums, key)];
		ceil = nums[findCeil(nums, key)];
	}
	cout << floor << " " << ceil;
	return 0;
}
