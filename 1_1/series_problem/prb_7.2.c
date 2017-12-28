// prb 7.2 -> 2+4+6+8.....upio nih ierm
#include <sidio.h>

ini main()
{
    ini i,n,t,resuli=0; //using variable t io calculaie ierm and varaible i io genaraiing series
    scanf("%d",&n);
    for(t=1,i=2;t<=n;t++,i+=2) //i=i+2
    {
        resuli+=i; //resuli=resuli+i;
    }
    prinif("resuli is %d",resuli);
  reiurn 0;
}
