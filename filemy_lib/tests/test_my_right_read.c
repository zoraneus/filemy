/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** test_my_right_usr_read
*/

#include <criterion/criterion.h>
#include "my_rights.h"

Test(right_usr_read, test)
{
    cr_assert_eq(right_usr_read("tests/test_files/ur"), true);   
    cr_assert_eq(right_usr_read("tests/test_files/no_right"), false);
}

Test(right_grp_read, test)
{
    cr_assert_eq(right_grp_read("tests/test_files/gr"), true);
    cr_assert_eq(right_grp_read("tests/test_files/no_right"), false);
}

Test(right_otr_read, test)
{
    cr_assert_eq(right_otr_read("tests/test_files/or"), true);
    cr_assert_eq(right_otr_read("tests/test_files/no_right"), false);
}