#include <stdio.h>     
voidmain() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
                            if (discriminant > 0) 
                            {
                             root1 = (-b + sqrt(discriminant)) / (2 * a);
                             root2 = (-b - sqrt(discriminant)) / (2 * a);
                             printf("root1 = %f and root2 = %f", root1, root2);
                            }

    // condition for real and equal roots
                            else if (discriminant == 0) 
                            {
                              root1 = root2 = -b / (2 * a);
                              printf("root1 = root2 = %f;", root1);
                            }

    // if roots are not real
                             else 
                             {
                               realPart = -b / (2 * a);
                               imagPart = sqrt(-discriminant) / (2 * a);
                               printf("root1 = %f+%fi and root2 = %-%fi", realPart, imagPart, realPart, imagPart);
                             }
              } 
