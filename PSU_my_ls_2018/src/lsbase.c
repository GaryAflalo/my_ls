/*
** EPITECH PROJECT, 2019
** lsbase
** File description:
** lsbase
*/
#include "my2.h"
#include "my.h"

void lsbase_2(char *str3)
{
    DIR *dp;
    struct dirent *myfile;
    struct stat fileStat;

    stat(str3, &fileStat);
    dp = opendir(str3);
    
    if (S_ISDIR(fileStat.st_mode) != 1){
        my_printf("%s ", str3);
        return (0);}
    
    while ((myfile = readdir(dp)) != NULL){
        if (myfile->d_name[0] != '.')
            my_printf("\033[36m%s\n", myfile->d_name);
    }
    closedir(dp);
}

void lsbase(void)
{
    DIR *dp;
    struct dirent *myfile;
    dp = opendir(".");
    if (dp == NULL){
        perror("Cannot open directory ");
        exit(2);
    }
    while ((myfile = readdir(dp)) != NULL){
        if (myfile->d_name[0] != '.')
            my_printf("\033[36m%s\n", myfile->d_name);
    }
    closedir(dp);
}

