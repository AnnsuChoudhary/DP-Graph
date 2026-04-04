int query(int i, int st, int end, int l, int r){
    //bc
    if(l>end || r<st)
    return 0;
       
    if(st<=l && end>=r)
    return segment[i];
      
    int mid = (l+r)/2;
     
    return query(2*i+1, st, end, l, mid) + query(2*i+2,st, end, mid+1, r);
}