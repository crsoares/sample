#include "php_sample.h"

static zend_function_entry php_sample_functions[] = {
    ZEND_FE(sample_hello_world,        NULL)
    { NULL, NULL, NULL }
};

PHP_FUNCTION(sample_hello_world)
{
    php_printf("Hello World!\n");
}

zend_module_entry sample_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
     STANDARD_MODULE_HEADER,
#endif
    PHP_SAMPLE_EXTNAME,
    php_sample_functions,
    NULL, /* MINIT */
    NULL, /* MSHUTDOWN */
    NULL, /* RINIT */
    NULL, /* RSHUTDOWN */
    NULL, /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    PHP_SAMPLE_EXTVER,
#endif
    STANDARD_MODULE_PROPERTIES
};
#ifdef COMPILE_DL_SAMPLE
ZEND_GET_MODULE(sample)
#endif