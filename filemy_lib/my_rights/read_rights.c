/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** read_rights
*/

#include "my_rights.h"

bool right_usr_read(char const *path)
{
    return (apply_right_mask(path, S_IRUSR));
}

bool right_grp_read(char const *path)
{
    return (apply_right_mask(path, S_IRGRP));
}

bool right_otr_read(char const *path)
{
    return (apply_right_mask(path, S_IROTH));
}