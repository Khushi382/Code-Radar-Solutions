int mostPlayedGame(int games[], int n) {
    int freq[1000] = {0};
    int maxFreq = 0;
    int mostPlayed = a[0];
    for (int i = 0; i < n; i++) {
        freq[games[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (freq[games[i]] > maxFreq) {
            maxFreq = freq[games[i]];
            mostPlayed = games[i];
        }
    }

    return mostPlayed;