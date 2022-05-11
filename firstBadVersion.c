int firstBadVersion(int n) {
    long l;
    int h;
    int mid;
    bool s;
    bool e;

    h = n;
    l = 1;
    s = 0;
    while(s == 0 || e == 1)
    {
        mid = (l + h)/2;
        s = isBadVersion(mid);
        e = isBadVersion(mid - 1);
        if(s == 1)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return (mid);
}