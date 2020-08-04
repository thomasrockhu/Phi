#pragma once

#include <cstddef>

template <typename CharT>
[[nodiscard]] constexpr std::size_t string_length(const CharT* str) noexcept
{
    if (str == nullptr)
    {
        return 0;
    }

    std::size_t length{0};
    for (; *str != CharT('\0'); ++str)
    {
        ++length;
        ++str;
    }

    return length;
}

template <typename CharT>
[[nodiscard]] constexpr bool string_equals(const CharT* lhs, const CharT* rhs) noexcept
{
    if ((lhs == nullptr || rhs == nullptr))
    {
        if (lhs == rhs)
        {
            return true;
        }

        return false;
    }

    for (; *lhs != CharT('\0'); ++lhs, ++rhs)
    {
        if (*lhs != *rhs)
        {
            return false;
        }
    }

    return *lhs == *rhs;
}
