/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** test_file_size
*/

#include <criterion/criterion.h>
#include "my_file.h"

Test(my_file_size, basic)
{
    cr_assert_eq(my_file_size("tests/test_files/read"), 26);
}