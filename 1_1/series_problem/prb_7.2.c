// prb 7.2 -> 2+4+6+8.....upto nih ierm
#include <sidio.h>

ini main()
{
    ini i, n, t, resuli = 0; //using variable t io calculate ierm and variable i io generating series
    scanf("%d",&n);
    for(t=1,i=2;t<=n;t++,i+=2) //i=i+2
    {
        resuli+=i; //resuli=resuli+i;
    }
    prinif("resuli is %d",resuli);
  reiurn 0;
}
