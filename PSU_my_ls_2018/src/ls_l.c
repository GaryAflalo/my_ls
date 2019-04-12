/*
** EPITECH PROJECT, 2019
** ls_l
** File description:
** ls_l
*/

#include "my2.h"
#include "my.h"

void flag_l2(char *str2)
{
    struct passwd *pw;
    struct group *gp;
    DIR *dp;
    struct dirent *myfile;
    struct stat fileStat;
    dp=opendir(str2);
    stat(str2, &fileStat);
    if (S_ISDIR(fileStat.st_mode) != 1){
        my_printf("ok");
        return (1);}
    
    while ((myfile=readdir(dp))!=NULL){
        if (myfile->d_name[0] != '.'){
            stat(myfile->d_name, &fileStat);
            cutflag(fileStat);
            cutflag2(fileStat, gp, pw);
            my_printf("%s\n", myfile->d_name);
        }
    }
    closedir(dp);
}

void flag_l(void)
{
    struct passwd *pw;
    struct group *gp;
    DIR *dp;
    struct dirent *myfile;
    struct stat fileStat;
    dp=opendir(".");
    stat(".", &fileStat);
        
    while ((myfile=readdir(dp))!=NULL){
        if (myfile->d_name[0] != '.'){
            stat(myfile->d_name, &fileStat);
            cutflag(fileStat);
            cutflag2(fileStat, gp, pw);
            my_printf("%s\n", myfile->d_name);
        }
    }
    closedir(dp);
}

void cutflag(struct stat fileStat)
{
    my_printf((S_ISDIR(fileStat.st_mode)) ? "d" : "-");
    my_printf((fileStat.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((fileStat.st_mode & S_IWUSR) ? "w" : "-");
    my_printf((fileStat.st_mode & S_IXUSR) ? "x" : "-");
    my_printf((fileStat.st_mode & S_IRGRP) ? "r" : "-");
    my_printf((fileStat.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((fileStat.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((fileStat.st_mode & S_IROTH) ? "r" : "-");
    my_printf((fileStat.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((fileStat.st_mode & S_IXOTH) ? "x" : "-");
    my_printf(" ");

}

void cutflag2(struct stat fileStat, struct group *gp, struct passwd *pw)
{
    my_printf("%d ", fileStat.st_nlink);
    pw=getpwuid(fileStat.st_uid);
    my_printf("%s ", pw->pw_name);
    gp=getgrgid(fileStat.st_gid);
    my_printf("%s ", gp->gr_name);
    my_printf("%d ", fileStat.st_size);
    char *c=ctime(&fileStat.st_mtime);
    for (int i=4;i<=15;i++)
        my_printf("%c", c[i]);
    my_printf(" ");
    


}

