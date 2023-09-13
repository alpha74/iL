// Minimum deletions to make character frequencies unique
// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/
// Aman Kumar

// Runtime 48 ms Beats 82.76%
// Memory 17.5 MB Beats 38.25%
int minDeletions(string s) 
{
    vector<int> freq(26,0);

    for(int i = 0 ; i < s.length() ; i++ )
        freq[s[i] - 'a']++;
    
    sort(freq.begin(), freq.end());

    int ret = 0;

    for(int i = 24 ; i >= 0 ; i-- )
    {
        if(freq[i] == 0)
            break ;
        
        if(freq[i] >= freq[i+1])
        {
            int prev = freq[i] ;

            freq[i] = max(0, freq[i+1] -1) ;
            ret += (prev - freq[i]) ;
        }
    }

    return ret;
}
