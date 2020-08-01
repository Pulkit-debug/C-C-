#include<stdio.h>

void main()
{

		int a[] = {1, 4, -2, 4, -1, 3, 5, -6};

		
		int maxsum =-2;
		for (int i =0;i<sizeof(a);i++) {
			
		for (int j=i;j<sizeof(a);j++) {
				int cursum = 0;
				for (int k = i; k<=j;k++) {
				
					cursum += a[k];
					
				}
				
				if(cursum > maxsum) {
					
					maxsum = cursum;
                    
                		}
        }
        }
  
            		printf("%d ", maxsum);
	
        }