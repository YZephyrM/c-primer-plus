#include <stdio.h>

const float Artic = 2.05;
const float Beet = 1.15;
const float Carrot = 1.09;
const float Discount = 0.05;
const int Dis_charge = 100;
const int Shipping_tier1 = 5;
const int Shipping_tier2 = 20;
const float Shipping1 = 6.5;
const float Shipping2 = 14.0;
const float Shipping3 = 0.5;

int main() {
    float kg_a = 0, kg_b = 0, kg_c = 0;
    float cost = 0, total_kg = 0, ship_cost = 0, i;

    while (1) 
    {
        printf("Enter 'a' for artichokes, 'b' for beets, 'c' for carrots, 'q' to finish ordering:\n");
        char ch = getchar();

        if (ch == 'q' || ch == 'Q') {
            break;
        } else if (ch == '\n') {
            continue; // Ignore empty input
        }

        printf("Enter the amount in kilograms: ");
        scanf("%f", &i);

        switch (ch) {
            case 'a':
            case 'A':
                kg_a += i;
                cost += i * Artic;
                printf("Artichokes added: %.2fkg\n", kg_a);
                break;

            case 'b':
            case 'B':
                kg_b += i;
                cost += i * Beet;
                printf("Beets added: %.2fkg\n", kg_b);
                break;

            case 'c':
            case 'C':
                kg_c += i;
                cost += i * Carrot;
                printf("Carrots added: %.2fkg\n", kg_c);
                break;

            default:
                printf("Enter a valid input.\n");
                break;
        }

        total_kg = kg_a + kg_b + kg_c;
        printf("Total weight: %.2fkg\n", total_kg);

        if (cost >= Dis_charge)
            printf("Discount applied! Current cost: %.2f$\n", cost * (1 - Discount));

        if (total_kg <= Shipping_tier1)
            ship_cost = Shipping1;
        else if (total_kg <= Shipping_tier2)
            ship_cost = Shipping2;
        else 
            ship_cost = Shipping2 + (total_kg - Shipping_tier2) * Shipping3;

        printf("Shipping cost: %.2f$\n", ship_cost);
        float grand_total = cost + ship_cost - cost * Discount;
        printf("Grand total: %.2f$\n", grand_total);

        while (getchar() != '\n'); // Clear input buffer
    }

    printf("Artichokes: %.2fkg\n", kg_a);
    printf("Beets: %.2fkg\n", kg_b);
    printf("Carrots: %.2fkg\n", kg_c);
    printf("Total cost: %.2f$\n", cost);
    if (cost >= Dis_charge)
        printf("Discount applied! Final cost: %.2f$\n", cost * (1 - Discount));
    printf("Shipping cost: %.2f$\n", ship_cost);
    printf("Grand total: %.2f$\n", cost + ship_cost - cost * Discount);
    
    return 0;
}
