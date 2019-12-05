#include <boost/filesystem.hpp>
#include "../include/broker.h"

using namespace boost;

int main(int argc, char *argv[]){
    boost::filesystem::path path = ".";
    if (argc > 1) {
        path = argv[1];
    }
    DirectoryAnalyzer test(path);
    return 0;
}
