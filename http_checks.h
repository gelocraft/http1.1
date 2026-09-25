#ifndef HTTP_CHECKS_H
#define HTTP_CHECKS_H

#include "strings/str_view.h"

bool http_valid_header_line(str_view *sv);
bool http_valid_field_line(str_view *sv);
bool http_valid_line(str_view *sv);
bool http_line_ends_with_crlf(str_view *sv);
bool http_empty_line(str_view *sv);
bool http_valid_method(str_view *sv);
bool http_valid_target(str_view *sv);
bool http_valid_version(str_view *sv);


#endif // !HTTP_CHECKS_H
