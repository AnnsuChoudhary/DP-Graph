vector<int> segment;
segment.assign(4*n,0);
    
void build(int i, int l, int r, int arr[]){
    //bc
    if(l==r){
        segment[i] = arr[l];
        return;
    }
        
    int mid = (l+r)/2;
    build(2*i+1, l, mid, arr);
    build(2*i+2, mid+1, r, arr);
        
    segment[i] = segment[2*i+1] + segment[2*i+2];
}
    