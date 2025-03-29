int countGlovePairs(int gloves[],int n){
    int freq[1000]={0};
    int maxfreq=0;
    for(int i=0;i<n;i++){
        freq[gloves[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[gloves[i]]>maxfreq){
            maxfreq=freq[gloves[i]];
        }
    }
    return maxfreq;
}