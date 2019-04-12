/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/
#include "my2.h"
#include "my.h"
int main(int argc , char **argv)
{
    int k = 2;
    char *str2 = argv[k];
    int i = 1;

    if (argc > 2 && argv[1][0] != '-')
        return (1);
    if (argc == 1){
        lsbase();
        return (1);}
    if (argv[1][0] == '-' && argv[1][1] == 'l' && argc == 2){
        flag_l();
        return (1);
    }
    while (i < argc) {
        char *str3 = argv[i++];
        if (argv[1][0] == '-' && argv[1][1] == 'l'){
            flag_l2(str2);
        }
        else{
            lsbase_2(str3);
        }
    }
    return (0);
}
