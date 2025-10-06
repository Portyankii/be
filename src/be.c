#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <unistd.h>

// (.)a
int appendRange() {

}

// (.,.)c
int changeRange() {

}

// (.,.)d
int deleateRange() {

}

// (.)i
int insertBytes() {

}

// (.)klc
int markRange() {

}

// (.,.)p
int printRange() {

}

// (.,.)n
int hexdump() {

} 

// ($)r file
int readFileToBuffer() {

}

// f file
int renameFile() {

}

// e file
int editFile() {

}

// e !commands
int editCommandOut() {

}

// !command
int runCommand() {

}

// P
int prompt() {
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    
    
    return 0;
}
