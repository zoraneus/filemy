/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** right_checker
*/

#include "my_rights.h"

bool right_read(char const *path)
{
    bool result;
    bool *rights = rights_get(path);

    if (rights == false)
        return (false);
    result = rights[UR] + rights[GR] + rights[OR];
    if (result > 0)
        return (true);
    return (false);
}

bool right_write(char const *path)
{
    bool result;
    bool *rights = rights_get(path);

    if (rights == false)
        return (false);
    result = rights[UW] + rights[GW] + rights[OW];
    if (result > 0)
        return (true);
    return (false);
}

bool right_exec(char const *path)
{
    bool result;
    bool *rights = rights_get(path);

    if (rights == false)
        return (false);
    result = rights[UX] + rights[GX] + rights[OX];
    if (result > 0)
        return (true);
    return (false);
}