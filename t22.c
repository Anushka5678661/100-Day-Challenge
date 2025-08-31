
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percent;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.2f%%\n", percent);
    }
    else if (sellingPrice < costPrice) {
        percent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.2f%%\n", percent);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
