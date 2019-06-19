/*
** EPITECH PROJECT, 2019
** filemy
** File description:
** test_my_right_write
*/

#include <criterion/criterion.h>
#include "my_rights.h"

Test(right_usr_write, test)
{
    cr_assert_eq(right_usr_write("tests/test_files/uw"), true);   
    cr_assert_eq(right_usr_write("tests/test_files/no_right"), false);
}

Test(right_grp_write, test)
{
    cr_assert_eq(right_grp_write("tests/test_files/gw"), true);
    cr_assert_eq(right_grp_write("tests/test_files/no_right"), false);
}

Test(right_otr_write, test)
{
    cr_assert_eq(right_otr_write("tests/test_files/ow"), true);
    cr_assert_eq(right_otr_write("tests/test_files/no_right"), false);
}