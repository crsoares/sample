#ifndef PHP_SAMPLE_H
/* Prevenir inclusão duplo */
#define PHP_SAMPLE_H

/* Definir Propriedades de extensão */
#define PHP_SAMPLE_EXTNAME "sample"
#define PHP_SAMPLE_EXTVER "1.0"

/*Opções de importação do configure
  ao construir fora do
  a árvore fonte PHP*/
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* Incluir PHP cabeçalho padrão */
#include "php.h"

/* Definir o símbolo de ponto de entrada
 * Zend usará ao carregar este módulo
 */
 extern zend_module_entry sample_module_entry;
 #define phpext_sample_ptr &sample_module_entry

 #endif /* PHP_SAMPLE_H */