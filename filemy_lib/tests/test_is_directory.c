/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** test_is_directory
*/

#include <criterion/criterion.h>
#include "my_rights.h"

Test(is_directory, test)
{
    cr_assert_eq(is_directory("tests/test_files/directory"), true);
    cr_assert_eq(is_directory("tests/test_files/ur"), false);
}