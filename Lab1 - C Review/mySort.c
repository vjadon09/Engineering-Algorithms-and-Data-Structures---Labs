void mySort(int d[], unsigned int n)
{
    int i;
    int holder;
    int j;
        
        for (i = 1; i < n; i++)
        {
            holder = d[i];
            j = i-1;

            while (j>=0 && d[j] > holder)
            {
                d[j+1] = d[j];
                j = j - 1; 
            }
            d[j+1] = holder; 
        }
}
 