/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** write_rights
*/

#include "my_rights.h"

bool right_usr_write(char const *path)
{
    return (apply_right_mask(path, S_IWUSR));
}

bool right_grp_write(char const *path)
{
    return (apply_right_mask(path, S_IWGRP));
}

bool right_otr_write(char const *path)
{
    return (apply_right_mask(path, S_IWOTH));
}