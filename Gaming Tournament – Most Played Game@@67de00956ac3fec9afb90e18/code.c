int mostPlayedGame(int games[],int n){
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[games[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[games[i]]>0){
            printf("%d",freq[games[i]]);
        }
    }

}