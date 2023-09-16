#include <stdio.h>
 void main()
 
 {
     float I = 4.76;
     float II = 9.34;
     float III = 7.23;
     float IV = 6.74;
     float V = 8.25;
     float VI = 4.28;
     
     float RI = I * IV * V;
     float RII = II * III * VI;
     
     printf ("%f * %f * %f = %f\n", I, IV, V, RI);
     printf ("%f * %f * %f = %f\n", II, III, VI, RII);
     
    if (RII<RI)
    
    {
        printf ("RI be like 'Kabhi kabhi to lagta hai apun hi bhagwan hai'");
    }
    
    else
    
    {
        printf ("RII be like 'AHAM BRAHMASMI'");
    }
 }