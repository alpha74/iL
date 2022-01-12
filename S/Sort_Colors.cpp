// Sort array of 0s, 1s, 2s
// https://leetcode.com/problems/sort-colors/
// Aman Kumar

void sortColors(vector<int>& nums) 
{
    int count0 = 0, count1 = 0, count2= 0 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        if( nums[i] == 0 )
            count0++ ;
        else if( nums[i] == 1 )
            count1++ ;
        else if( nums[i] == 2 )
            count2++ ;
    }

    int i = 0 ;
    while( count0-- )
    {
        nums[i] = 0 ;
        i++ ;
    }
    while( count1-- )
    {
        nums[i] = 1 ;
        i++ ;
    }
    while( count2-- )
    {
        nums[i] =2 ;
        i++ ;
    }
}
