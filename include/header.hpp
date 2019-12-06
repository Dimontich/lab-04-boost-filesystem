// Copyright 2019 Dimontich
#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include "vector"
struct FileInfo
{
    boost::filesystem::path _new;//путь
    std::vector <int> date;//дата
    size_t counter;//сколько в папке подходят
};

#endif // INCLUDE_HEADER_HPP_

