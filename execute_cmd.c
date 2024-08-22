//
// Created by Wei Liu on 2024/8/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "execute_cmd.h"
void execute_cd_function() {
    char path[256];
}

void execute_date_function() {
    int error = 0;
    error = execlp("date", "date", (char *)NULL);
    perror("Execute date fails");
    if(error==-1){
        exit(EXIT_FAILURE);
    }
}

void execute_pwd_function() {
    int error = 0;
    error = execlp("pwd", "pwd", (char *)NULL);
    perror("Execute pwd fails");
    if(error==-1){
        exit(EXIT_FAILURE);
    }
}

void execute_who_function() {
    int error = 0;
    error = execlp("who", "who", (char *)NULL);
    perror("Execute who fails");
    if(error==-1){
        exit(EXIT_FAILURE);
    }
}

void execute_ls_function() {
    int error = 0;
    error = execlp("ls", "ls", "-l", (char *)NULL);
    perror("Execute lp fails");
    if(error==-1){
        exit(EXIT_FAILURE);
    }
}