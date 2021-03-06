#pragma once

#include "defines.h"

// Returns the length of the given string.
V_API u64 string_length(const char *str);

V_API char *string_duplicate(const char *str);

V_API b8 strings_equal(const char *str0, const char *str1);