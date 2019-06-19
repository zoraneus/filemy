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
#include <stdbool.h>

enum {UR, UW, UX, GR, GW, GX, OR, OW, OX, D};

// rights (common)
bool apply_right_mask(char const *path, int mask);
bool *rights_get(char const *path); //size 9 return NULL if err
bool is_directory(char const *path);

// rights checker
bool right_read(char const *path);
bool right_write(char const *path);
bool right_exec(char const *path);

// read
bool right_usr_read(char const *path);
bool right_grp_read(char const *path);
bool right_otr_read(char const *path);

// write
bool right_usr_write(char const *path);
bool right_grp_write(char const *path);
bool right_otr_write(char const *path);

// exec
bool right_usr_exec(char const *path);
bool right_grp_exec(char const *path);
bool right_otr_exec(char const *path);

#endif /* !MY_RIGHTS_H_ */
