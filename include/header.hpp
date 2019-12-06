// Copyright 2019 Dimontich
#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include "vector"
#define condition = _new_date[1] == data.date[1] || _new_date[2] == data.date[2]|| _new_date[3] > data.date[3]
struct FileInfo
{
    boost::filesystem::path _new;//путь
    std::vector <int> date;//дата
    size_t counter;//сколько в папке подходят
};

#endif // INCLUDE_HEADER_HPP_

