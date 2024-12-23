#include <stdio.h>

// Function to print a single character
void printCharacter(char c, int row);

// Function to print the entire message
void printMessage(const char *message);

int main() {
    // Message to print
    const char *message = "CODE MASTER MITESH";
    printMessage(message);
    return 0;
}

// Function to print the entire message
void printMessage(const char *message) {
    int row;
    for (row = 0; row < 7; row++) { // Each character is 7 rows tall
        for (const char *p = message; *p != '\0'; p++) {
            if (*p == ' ') {
                // Print spaces for spaces between words
                printf("       ");
            } else {
                // Print the character row by row
                printCharacter(*p, row);
                printf("  "); // Space between letters
            }
        }
        printf("\n"); // Move to the next row
    }
}

// Function to print a single character
void printCharacter(char c, int row) {
    // Define patterns for each letter (7 rows x 6 columns)
    const char *patterns[26][7] = {
        // A
        {
            "  **  ",
            " *  * ",
            "*    *",
            "******",
            "*    *",
            "*    *",
            "*    *"
        },
        // B
        {
            "***** ",
            "*    *",
            "*    *",
            "***** ",
            "*    *",
            "*    *",
            "***** "
        },
        // C
        {
            " **** ",
            "*    *",
            "*     ",
            "*     ",
            "*     ",
            "*    *",
            " **** "
        },
        // D
        {
            "***** ",
            "*    *",
            "*    *",
            "*    *",
            "*    *",
            "*    *",
            "***** "
        },
        // E
        {
            "******",
            "*     ",
            "*     ",
            "***** ",
            "*     ",
            "*     ",
            "******"
        },
        // M
        {
            "*    *",
            "**  **",
            "* ** *",
            "*    *",
            "*    *",
            "*    *",
            "*    *"
        },
        // I
        {
            "******",
            "  **  ",
            "  **  ",
            "  **  ",
            "  **  ",
            "  **  ",
            "******"
        },
        // S
        {
            " **** ",
            "*    *",
            "*     ",
            " **** ",
            "     *",
            "*    *",
            " **** "
        },
        // T
        {
            "******",
            "  **  ",
            "  **  ",
            "  **  ",
            "  **  ",
            "  **  ",
            "  **  "
        },
        // R
        {
            "***** ",
            "*    *",
            "*    *",
            "***** ",
            "*  *  ",
            "*   * ",
            "*    *"
        },
        // O
        {
            " **** ",
            "*    *",
            "*    *",
            "*    *",
            "*    *",
            "*    *",
            " **** "
        },
        // H
        {
            "*    *",
            "*    *",
            "*    *",
            "******",
            "*    *",
            "*    *",
            "*    *"
        }
    };

    if (c >= 'A' && c <= 'Z') {
        const char *line = patterns[c - 'A'][row];
        printf("%s", line);
    } else {
        // Print blank spaces for unsupported characters
        printf("      ");
    }
}