    int m;
    cout<<"Enter no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no of columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //spiral
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    int tnd=m*n;
    int count=0;
    while(minr<=maxr && minc<=maxc){
    //right
    for(int j=minc;j<=maxc && count<tnd;j++){
        cout<<arr[minr][j]<<" ";
        count++;
    }
    minr++;
    //down
    for(int i=minr;i<=maxr && count<tnd;i++){
        cout<<arr[i][maxc]<<" ";
        count++;
    }
    maxc--;
    //left
    for(int j=maxc;j>=minc && count<tnd;j--){
        cout<<arr[maxr][j]<<" ";
        count++;
    }
    maxr--;
    //up
    for(int i=maxr;i>=minr && count<tnd;i--){
        cout<<arr[i][minc]<<" ";
        count++;
    }
    minc++;
    }
}