/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** test_my_right_exec
*/

#include <criterion/criterion.h>
#include "my_rights.h"

Test(right_usr_exec, test)
{
    cr_assert_eq(right_usr_exec("tests/test_files/ux"), true);   
    cr_assert_eq(right_usr_exec("tests/test_files/no_right"), false);
}

Test(right_grp_exec, test)
{
    cr_assert_eq(right_grp_exec("tests/test_files/gx"), true);
    cr_assert_eq(right_grp_exec("tests/test_files/no_right"), false);
}

Test(right_otr_exec, test)
{
    cr_assert_eq(right_otr_exec("tests/test_files/ox"), true);
    cr_assert_eq(right_otr_exec("tests/test_files/no_right"), false);
}