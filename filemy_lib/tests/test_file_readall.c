/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** test_file_readall
*/

#include <criterion/criterion.h>
#include "my_file.h"

Test(my_file_readall, basics)
{
    char *buff = my_file_readall("tests/test_files/read");

    cr_assert_str_eq(buff, "le contenu de mon fichier\n");
    free(buff);
}