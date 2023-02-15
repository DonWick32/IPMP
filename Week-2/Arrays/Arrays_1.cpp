class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> i;
        int ptr1 = 0;
        int ptr2 = 0;
        int ptr = 0;
        while (ptr1 < nums1.size() && ptr2 < nums2.size()){
            if (ptr == 0){
                if (nums1[ptr1] == nums2[ptr2]){
                    i.push_back(nums1[ptr1]);
                    ptr ++;
                    ptr1 ++;
                    ptr2 ++;
                } else if (nums1[ptr1] > nums2[ptr2]) {
                    ptr2 ++;
                } else {
                    ptr1 ++;
                }
            } else {
                if (nums1[ptr1] == nums2[ptr2] && i[ptr - 1] != nums1[ptr1]){
                    i.push_back(nums1[ptr1]);
                    ptr ++;
                    ptr1 ++;
                    ptr2 ++;
                } else if (nums1[ptr1] > nums2[ptr2]){
                    ptr2 ++;
                } else {
                    ptr1 ++;
                }
            }
        }
        return i;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> u;
        int ptr1 = 0;
        int ptr2 = 0;
        int ptr = 0;
        while (ptr1 < nums1.size() && ptr2 < nums2.size()){
            if (ptr == 0){
                if (nums1[ptr1] == nums2[ptr2]){
                    u.push_back(nums1[ptr1]);
                    ptr ++;
                    ptr1 ++;
                    ptr2 ++;
                } else if (nums1[ptr1] > nums2[ptr2]){
                    u.push_back(nums2[ptr2]);
                    ptr2 ++;
                    ptr ++;
                } else {
                    u.push_back(nums1[ptr]);
                    ptr1 ++;
                    ptr ++;
                }
            } else {
                if (nums1[ptr1] == nums2[ptr2]){
                    if (nums2[ptr2] != u[ptr - 1]){
                        u.push_back(nums1[ptr1]);
                        ptr ++;
                    }
                    ptr1 ++;
                    ptr2 ++;
                } else if (nums1[ptr1] > nums2[ptr2]){
                    if (nums2[ptr2] != u[ptr - 1]){
                        u.push_back(nums2[ptr2]);
                        ptr ++;
                    }
                    ptr2 ++;
                } else {
                    if (nums1[ptr1] != u[ptr - 1]){
                        u.push_back(nums1[ptr1]);
                        ptr ++;
                    }
                    ptr1 ++;
                }
            }
        }
        return u;
    }
};