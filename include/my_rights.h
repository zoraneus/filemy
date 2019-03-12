/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** my_rights
*/

#ifndef MY_RIGHTS_H_
#define MY_RIGHTS_H_

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#define ERR -1

#ifndef BOOL
#define BOOL
#define TRUE 1
#define FALSE 0
typedef int my_bool_t;
#endif

enum {UR, UW, UX, GR, GW, GX, OR, OW, OX, D};

// rights (common)
int apply_right_mask(char const *path, int mask); //0 false, 1 true, -1 err
int *rights_get(char const *path); //size 9

// read
int right_usr_read(char const *path);
int right_grp_read(char const *path);
int right_otr_read(char const *path);

// write
int right_usr_write(char const *path);
int right_grp_write(char const *path);
int right_otr_write(char const *path);

// exec
int right_usr_exec(char const *path);
int right_grp_exec(char const *path);
int right_otr_exec(char const *path);

#endif /* !MY_RIGHTS_H_ */
