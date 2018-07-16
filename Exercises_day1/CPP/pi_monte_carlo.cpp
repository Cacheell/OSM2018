#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    double niter1 = 10000000;
    double niter2 = 10000;
    double niter3 = 1000;
    double niter4 = 100;
    double x,y;
    int i;
    int count=0;
    double z;
    double pi1, pi2, pi3, pi4;
    //srand(time(NULL));
    //main loop
    for (i=0; i<niter1; ++i) {
    //get random points
    x = (double)random()/RAND_MAX;
    y = (double)random()/RAND_MAX;
    z = sqrt((x*x)+(y*y));
    //check to see if point is in unit circle
    if (z<=1)  {
            ++count;
    }
    }
    pi1 = ((double)count/(double)niter1)*4.0;          //p = 4(m/n)
    
    for (i=0; i<niter2; ++i) {
    //get random points
    x = (double)random()/RAND_MAX;
    y = (double)random()/RAND_MAX;
    z = sqrt((x*x)+(y*y));
    //check to see if point is in unit circle
    if (z<=1)  {
         ++count;
    }
    }
    pi2 = ((double)count/(double)niter2)*4.0;
   
    for (i=0; i<niter3; ++i) {
    //get random points
      x = (double)random()/RAND_MAX;
      y = (double)random()/RAND_MAX;
      z = sqrt((x*x)+(y*y));
      //check to see if point is in unit circle
      if (z<=1)  {
      ++count;
      }
      }
    pi3 = ((double)count/(double)niter3)*4.0;
    
        
    for (i=0; i<niter4; ++i) {
    //get random points
    x = (double)random()/RAND_MAX;
    y = (double)random()/RAND_MAX;
    z = sqrt((x*x)+(y*y));
    //check to see if point is in unit circle
    if (z<=1)  {
    ++count;
    }
    }
    pi4 = ((double)count/(double)niter4)*4.0;
    printf("Pi at 100000000: %f\n", pi1);
    printf("Pi at 10000: %f\n", pi2);
    printf("Pi at 1000: %f\n", pi3);
    printf("Pi at 100: %f\n", pi4);

    return 0;
}
