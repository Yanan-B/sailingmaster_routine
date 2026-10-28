#include <stdio.h>

int main() {
    int distance;      
    double price = 0.0; 

    scanf("%d", &distance);

    if (distance <= 500) 
    {
        price = distance * 0.46;
    }
    else if (distance <= 1000)
    {
        price = 500 * 0.46 + (distance - 500) * 0.414;
    }
    else if (distance <= 1500) 
    {
        price = 500 * 0.46 + 500 * 0.414 + (distance - 1000) * 0.368;
    }
    else if (distance <= 2000) 
    {
        price = 500 * 0.46 + 500 * 0.414 + 500 * 0.368 + (distance - 1500) * 0.322;
    }
    else if (distance <= 2500) 
    {
        price = 500 * 0.46 + 500 * 0.414 + 500 * 0.368 + 500 * 0.322 + (distance - 2000) * 0.276;
    }
    else 
    {
        price = 500 * 0.46 + 500 * 0.414 + 500 * 0.368 + 500 * 0.322 + 500 * 0.276 + (distance - 2500) * 0.276;
    }

 
    printf("%.2f\n", price);

    return 0;
}