 #include <stdio.h>

  void main() {
        int i, number, counter = 0, j= 2, loop= 1, sum= 0;

        
        printf("Enter the number");
        scanf("%d", &number);

        
        for (;counter < number;) 
        {
                for (i = 2; i <= j - 1; i++)
                 {
                        if (j % i == 0)
                         {
                                loop = 0;
                                break;
                        }
                }
                if (loop==1) 
                {
                        sum = sum + j;
                        counter++;
                }

                j++;
                loop = 1;
        }

       //print the first n prime numbers
        printf("Sum of first %d prime numbers is %d\n", number,sum);
        
  }
