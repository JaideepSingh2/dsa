/* function to tell which number occurs the most and if two of them occurs same time then which was inserted earlier
int maximumFrequency(vector<int> &arr, int n)
{
    int maxfreq=0;
    int ans=0;

    unordered_map<int,int> m;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
        maxfreq=max(maxfreq,m[arr[i]]);
    }
    for(int i=0;i<arr.size();i++)
    {
        if(maxfreq==m[arr[i]])
        {
            ans=arr[i];
            break;
        }
    }
    return ans;
}
*/