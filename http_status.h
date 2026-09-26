#ifndef HTTP_STATUS_H
#define HTTP_STATUS_H

/* 1xx Informational */
#define HTTP_STATUS_CONTINUE                         100
#define HTTP_STATUS_SWITCHING_PROTOCOLS              101
#define HTTP_STATUS_PROCESSING                       102
#define HTTP_STATUS_EARLY_HINTS                      103

/* 2xx Success */
#define HTTP_STATUS_OK                                200
#define HTTP_STATUS_CREATED                           201
#define HTTP_STATUS_ACCEPTED                          202
#define HTTP_STATUS_NON_AUTHORITATIVE_INFORMATION     203
#define HTTP_STATUS_NO_CONTENT                        204
#define HTTP_STATUS_RESET_CONTENT                     205
#define HTTP_STATUS_PARTIAL_CONTENT                   206
#define HTTP_STATUS_MULTI_STATUS                      207
#define HTTP_STATUS_ALREADY_REPORTED                  208
#define HTTP_STATUS_IM_USED                           226

/* 3xx Redirection */
#define HTTP_STATUS_MULTIPLE_CHOICES                   300
#define HTTP_STATUS_MOVED_PERMANENTLY                  301
#define HTTP_STATUS_FOUND                              302
#define HTTP_STATUS_SEE_OTHER                          303
#define HTTP_STATUS_NOT_MODIFIED                       304
#define HTTP_STATUS_USE_PROXY                          305
#define HTTP_STATUS_TEMPORARY_REDIRECT                 307
#define HTTP_STATUS_PERMANENT_REDIRECT                 308

/* 4xx Client Error */
#define HTTP_STATUS_BAD_REQUEST                        400
#define HTTP_STATUS_UNAUTHORIZED                       401
#define HTTP_STATUS_PAYMENT_REQUIRED                   402
#define HTTP_STATUS_FORBIDDEN                          403
#define HTTP_STATUS_NOT_FOUND                          404
#define HTTP_STATUS_METHOD_NOT_ALLOWED                 405
#define HTTP_STATUS_NOT_ACCEPTABLE                     406
#define HTTP_STATUS_PROXY_AUTHENTICATION_REQUIRED      407
#define HTTP_STATUS_REQUEST_TIMEOUT                    408
#define HTTP_STATUS_CONFLICT                           409
#define HTTP_STATUS_GONE                               410
#define HTTP_STATUS_LENGTH_REQUIRED                    411
#define HTTP_STATUS_PRECONDITION_FAILED                412
#define HTTP_STATUS_PAYLOAD_TOO_LARGE                  413
#define HTTP_STATUS_URI_TOO_LONG                       414
#define HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE             415
#define HTTP_STATUS_RANGE_NOT_SATISFIABLE              416
#define HTTP_STATUS_EXPECTATION_FAILED                 417
#define HTTP_STATUS_IM_A_TEAPOT                        418
#define HTTP_STATUS_MISDIRECTED_REQUEST                421
#define HTTP_STATUS_UNPROCESSABLE_ENTITY               422
#define HTTP_STATUS_LOCKED                             423
#define HTTP_STATUS_FAILED_DEPENDENCY                  424
#define HTTP_STATUS_TOO_EARLY                          425
#define HTTP_STATUS_UPGRADE_REQUIRED                   426
#define HTTP_STATUS_PRECONDITION_REQUIRED              428
#define HTTP_STATUS_TOO_MANY_REQUESTS                  429
#define HTTP_STATUS_REQUEST_HEADER_FIELDS_TOO_LARGE    431
#define HTTP_STATUS_UNAVAILABLE_FOR_LEGAL_REASONS      451

/* 5xx Server Error */
#define HTTP_STATUS_INTERNAL_SERVER_ERROR              500
#define HTTP_STATUS_NOT_IMPLEMENTED                    501
#define HTTP_STATUS_BAD_GATEWAY                        502
#define HTTP_STATUS_SERVICE_UNAVAILABLE                503
#define HTTP_STATUS_GATEWAY_TIMEOUT                    504
#define HTTP_STATUS_HTTP_VERSION_NOT_SUPPORTED         505
#define HTTP_STATUS_VARIANT_ALSO_NEGOTIATES            506
#define HTTP_STATUS_INSUFFICIENT_STORAGE               507
#define HTTP_STATUS_LOOP_DETECTED                      508
#define HTTP_STATUS_NOT_EXTENDED                       510
#define HTTP_STATUS_NETWORK_AUTHENTICATION_REQUIRED    511

const char *http_status_reason(int code) {
    switch (code) {
        /* 1xx status codes */
        case HTTP_STATUS_CONTINUE: return "Continue";
        case HTTP_STATUS_SWITCHING_PROTOCOLS: return "Switching Protocols";
        case HTTP_STATUS_PROCESSING: return "Processing";
        case HTTP_STATUS_EARLY_HINTS: return "Early Hints";

        /* 2xx status codes */
        case HTTP_STATUS_OK: return "OK";
        case HTTP_STATUS_CREATED: return "Created";
        case HTTP_STATUS_ACCEPTED: return "Accepted";
        case HTTP_STATUS_NON_AUTHORITATIVE_INFORMATION: return "Non-Authoritative Information";
        case HTTP_STATUS_NO_CONTENT: return "No Content";
        case HTTP_STATUS_RESET_CONTENT: return "Reset Content";
        case HTTP_STATUS_PARTIAL_CONTENT: return "Partial Content";
        case HTTP_STATUS_MULTI_STATUS: return "Multi-Status";
        case HTTP_STATUS_ALREADY_REPORTED: return "Already Reported";
        case HTTP_STATUS_IM_USED: return "IM Used";

        /* 3xx status codes */
        case HTTP_STATUS_MULTIPLE_CHOICES: return "Multiple Choices";
        case HTTP_STATUS_MOVED_PERMANENTLY: return "Moved Permanently";
        case HTTP_STATUS_FOUND: return "Found";
        case HTTP_STATUS_SEE_OTHER: return "See Other";
        case HTTP_STATUS_NOT_MODIFIED: return "Not Modified";
        case HTTP_STATUS_USE_PROXY: return "Use Proxy";
        case HTTP_STATUS_TEMPORARY_REDIRECT: return "Temporary Redirect";
        case HTTP_STATUS_PERMANENT_REDIRECT: return "Permanent Redirect";

        /* 4xx status codes */
        case HTTP_STATUS_BAD_REQUEST: return "Bad Request";
        case HTTP_STATUS_UNAUTHORIZED: return "Unauthorized";
        case HTTP_STATUS_PAYMENT_REQUIRED: return "Payment Required";
        case HTTP_STATUS_FORBIDDEN: return "Forbidden";
        case HTTP_STATUS_NOT_FOUND: return "Not Found";
        case HTTP_STATUS_METHOD_NOT_ALLOWED: return "Method Not Allowed";
        case HTTP_STATUS_NOT_ACCEPTABLE: return "Not Acceptable";
        case HTTP_STATUS_PROXY_AUTHENTICATION_REQUIRED: return "Proxy Authentication Required";
        case HTTP_STATUS_REQUEST_TIMEOUT: return "Request Timeout";
        case HTTP_STATUS_CONFLICT: return "Conflict";
        case HTTP_STATUS_GONE: return "Gone";
        case HTTP_STATUS_LENGTH_REQUIRED: return "Length Required";
        case HTTP_STATUS_PRECONDITION_FAILED: return "Precondition Failed";
        case HTTP_STATUS_PAYLOAD_TOO_LARGE: return "Payload Too Large";
        case HTTP_STATUS_URI_TOO_LONG: return "URI Too Long";
        case HTTP_STATUS_UNSUPPORTED_MEDIA_TYPE: return "Unsupported Media Type";
        case HTTP_STATUS_RANGE_NOT_SATISFIABLE: return "Range Not Satisfiable";
        case HTTP_STATUS_EXPECTATION_FAILED: return "Expectation Failed";
        case HTTP_STATUS_IM_A_TEAPOT: return "I'm a teapot";
        case HTTP_STATUS_MISDIRECTED_REQUEST: return "Misdirected Request";
        case HTTP_STATUS_UNPROCESSABLE_ENTITY: return "Unprocessable Entity";
        case HTTP_STATUS_LOCKED: return "Locked";
        case HTTP_STATUS_FAILED_DEPENDENCY: return "Failed Dependency";
        case HTTP_STATUS_TOO_EARLY: return "Too Early";
        case HTTP_STATUS_UPGRADE_REQUIRED: return "Upgrade Required";
        case HTTP_STATUS_PRECONDITION_REQUIRED: return "Precondition Required";
        case HTTP_STATUS_TOO_MANY_REQUESTS: return "Too Many Requests";
        case HTTP_STATUS_REQUEST_HEADER_FIELDS_TOO_LARGE: return "Request Header Fields Too Large";
        case HTTP_STATUS_UNAVAILABLE_FOR_LEGAL_REASONS: return "Unavailable For Legal Reasons";

        /* 5xx status codes */
        case HTTP_STATUS_INTERNAL_SERVER_ERROR: return "Internal Server Error";
        case HTTP_STATUS_NOT_IMPLEMENTED: return "Not Implemented";
        case HTTP_STATUS_BAD_GATEWAY: return "Bad Gateway";
        case HTTP_STATUS_SERVICE_UNAVAILABLE: return "Service Unavailable";
        case HTTP_STATUS_GATEWAY_TIMEOUT: return "Gateway Timeout";
        case HTTP_STATUS_HTTP_VERSION_NOT_SUPPORTED: return "HTTP Version Not Supported";
        case HTTP_STATUS_VARIANT_ALSO_NEGOTIATES: return "Variant Also Negotiates";
        case HTTP_STATUS_INSUFFICIENT_STORAGE: return "Insufficient Storage";
        case HTTP_STATUS_LOOP_DETECTED: return "Loop Detected";
        case HTTP_STATUS_NOT_EXTENDED: return "Not Extended";
        case HTTP_STATUS_NETWORK_AUTHENTICATION_REQUIRED: return "Network Authentication Required";

        default: return "Unknown";
    }
}

#endif /* HTTP_STATUS_H */
