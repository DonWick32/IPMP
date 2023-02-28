int fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int count(string str, int l, int r)
{
    int c = 0, i;
 
    for (i = l + 1; i <= r; ++i)
        if (str[i] < str[l])
            c ++;
 
    return c;
}

int findRank(string str) {
    int len = str.size();
    int mul = fact(len);
    int rank = 1;
    int c;
 
    int i;
    for (i = 0; i < len; ++i) {
        mul /= len - i;
        c = count(str, i, len - 1) % 1000003;
        rank = (rank % 1000003 + (c * mul % 1000003) % 1000003) % 1000003;
    }
 
    return rank % 1000003;
}
