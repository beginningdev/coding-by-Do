#include <stdio.h>

struct shopping_price
{
    char item_name[50]; //decalare product name
    float price; //decalare product price
    int quantity;//decalare product quantity
};

int main(){
    struct shopping_price item[10];//decalare array of structure
    int i,n;//decalare number of items
    float total_price=0.0;
    FILE *file;
    file = fopen("shopping_price.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    printf("Enter the number of items: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the name of item %d: ",i+1);
        scanf("%s",item[i].item_name);
        fprintf(file,"Item %d: %s\n", i+1, item[i].item_name);
        printf("Enter the price of item %d: ",i+1);
        scanf("%f",&item[i].price);
        fprintf(file,"Price of item %d: %.2f $\n", i+1, item[i].price);
        printf("Enter the quantity of item %d: ",i+1);
        scanf("%d",&item[i].quantity);
        fprintf(file,"Quantity of item %d: %d\n", i+1, item[i].quantity);
        total_price += item[i].price * item[i].quantity;
    }
    fprintf(file,"Total price: %.2f $\n", total_price);
    fclose(file);
}
