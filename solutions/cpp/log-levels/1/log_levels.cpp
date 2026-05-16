#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    std::string::size_type pos = line.find_first_of(":");
    return line.substr(pos + 2);
}

std::string log_level(std::string line) {
    // return the log level
    std::string::size_type pos = line.find_first_of(":");
    return line.substr(1, pos - 2);
    
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string msg = message(line);
    std::string level = log_level(line);
    std::string reformat_string = msg + " (" + level + ")";
    return reformat_string;
}
}  // namespace log_line
