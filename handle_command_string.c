//
// Created by 刘巍 on 2024/8/18.
//

#include "handle_command_string.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *extract_path(char *command){
        char *path = NULL;
        char *space = strchr(command, ' ');
        if (space != NULL)
            strcpy(path, space + 1);
        return path;
}

void extract_pipe_command(){

}
void extract_sleep_time(){

}
void ctrl_c_interrupt(){

}
void redirect_command(){

}