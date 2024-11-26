//An Enumeration with color names can be used in a switch statement to display the hexadecimal color code.

#include <stdio.h>

enum Colors {
    RED = 0xFF0000,    // RGB: (255, 0, 0)
    GREEN = 0x00FF00,  // RGB: (0, 255, 0)
    BLUE = 0x0000FF,   // RGB: (0, 0, 255)
    YELLOW = 0xFFFF00, // RGB: (255, 255, 0)
    CYAN = 0x00FFFF,   // RGB: (0, 255, 255)
    MAGENTA = 0xFF00FF // RGB: (255, 0, 255)
};

// Function to convert RGB to hex format
void rgb_to_hex(int r, int g, int b) {
    printf("#%02X%02X%02X\n", r, g, b);
}

// Function to print color code from enum
void print_color_code(enum Colors color) {
    // Extract RGB values from the hex representation
    int r = (color >> 16) & 0xFF;  
    int g = (color >> 8) & 0xFF;   
    int b = color & 0xFF;          

    // Convert and print the hex code
    rgb_to_hex(r, g, b);
}

int main() {

    int n;
    printf("Enter color name (RED=1, GREEN=2, BLUE=3, YELLOW=4, CYAN=5, MAGENTA=6) : ");
    scanf("%d", &n);

    switch(n) {

    case 1 :
        printf("RED in hex: ");
        print_color_code(RED);
        break;      
    
    case 2 :
        printf("GREEN in hex: ");
        print_color_code(GREEN); 
        break;      
    
    case 3 :          
        printf("BLUE in hex: ");
        print_color_code(BLUE); 
        break;      
    
    case 4 :
        printf("YELLOW in hex: ");
        print_color_code(YELLOW);
        break;      
    
    case 5 :  
        printf("CYAN in hex: ");
        print_color_code(CYAN);
        break;      
    
    case 6 :     
        printf("MAGENTA in hex: ");
        print_color_code(MAGENTA); 
        break;

    }
    
    return 0;
}

