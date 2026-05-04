#include <stdio.h>
#include <stdbool.h>

// Global variables
#define MAX_NAME 30
#define Q_PRODUCTS 2

// Create a type for save products informations
typedef struct product
{
    int id;
    char name[MAX_NAME];
    float price;
    unsigned int quantity;
    unsigned int min_quantity;
    float stock_cash;

} product;

// Functions
product create_product (int id);
void check_stock(unsigned int quantity, unsigned int min_quantity);
void print_product(int id, char *name, float price, unsigned int quantity, unsigned int min_quantity, float stock_cash);

int main(void)
{
    // Create an array of products to save each one
    product products_list[Q_PRODUCTS];

    // Create each product with their informations
    for(int i = 0; i < Q_PRODUCTS; i++)
    {
        products_list[i] = create_product(i);
        printf("\n");
    }

    // Summary header
    printf("---------- SUMMARY ----------\n");

    // Show products informations
    for(int i = 0; i < Q_PRODUCTS; i++)
    {
        print_product(products_list[i].id, products_list[i].name, products_list[i].price, products_list[i].quantity, products_list[i].min_quantity, products_list[i].stock_cash);
    }

    printf("---------- COMPARATION ----------\n");
    if (products_list[0].stock_cash > products_list[1].stock_cash)
    {
        printf("The stock cash of '%s' is bigger than '%s'.\n", products_list[0].name, products_list[1].name);
    }
    if (products_list[0].stock_cash < products_list[1].stock_cash)
    {
        printf("The stock cash of '%s' is lower than '%s'.\n", products_list[0].name, products_list[1].name);
    }
    if (products_list[0].stock_cash == products_list[1].stock_cash)
    {
        printf("The stock cash of '%s' is the same of '%s'.\n", products_list[0].name, products_list[1].name);
    }

    return 0;
}

// Create an new product
product create_product (int id)
{
    product product;

    printf("---------- INFOS PRODUCT %i ----------\n", (id + 1));

    product.id = id;
    
    printf("✦ Name: ");
    scanf("%s", product.name);

    printf("✦ Price (00.00): ");
    scanf("%f", &product.price);

    printf("✦ Stock quantity: ");
    scanf("%u", &product.quantity);

    printf("✦ Min stock quantity: ");
    scanf("%u", &product.min_quantity);

    product.stock_cash = (float) product.quantity * product.price;

    return product;
}

// Print informations
void print_product(int id, char *name, float price, unsigned int quantity, unsigned int min_quantity, float stock_cash)
{
    printf("✦ Product #%i\n", (id + 1));
    printf("Product name: %s\n", name);
    printf("Price: R$ %.2f | In stock: %u | Min stock: %u | Stock cash: %.2f\n", price, quantity, min_quantity, stock_cash);
    check_stock(quantity, min_quantity);
    printf("\n");
}

// Check stock
void check_stock(unsigned int quantity, unsigned int min_quantity)
{
    if (quantity < min_quantity)
    {
        printf("Low stock\n");
    }

    if (quantity >= min_quantity)
    {
        printf("Stock up to date\n");
    }
}