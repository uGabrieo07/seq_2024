cmake_minimum_required(VERSION 3.28)
project(seq_2024 C)

set(CMAKE_C_STANDARD 99)

# Define o caminho base para os exemplos
set(EXEMPLOS_DIR "${CMAKE_SOURCE_DIR}/Exemplos")

# Adiciona os executáveis com os respectivos arquivos .c

add_executable(tamanho_tipos_variaveis
        "${EXEMPLOS_DIR}/Tipos de dados e variaveis/tamanho_tipos_variaveis.c"
        "${EXEMPLOS_DIR}/Tipos de dados e variaveis/teste_tamanho_tipos_variaveis.c")

add_executable(tipos_variaveis
        "${EXEMPLOS_DIR}/Tipos de dados e variaveis/tipos_variaveis.c")

add_executable(condicionais
        "${EXEMPLOS_DIR}/Estruturas de Iteracao e Controle/condicionais.c")

add_executable(scanf_printf
        "${EXEMPLOS_DIR}/Estrutura Basica de Programas/scanf_printf.c")


add_executable(operador_atribuicao
        "${EXEMPLOS_DIR}/Operadores e Expressoes/operador_atribuicao.c")

add_executable(arg_linha_comando
        "${EXEMPLOS_DIR}/Funcoes/argumentos_linha_comando.c"
        "${EXEMPLOS_DIR}/Operadores e Expressoes/operadores_ponteiros.c")

add_executable(funcoes
        "${EXEMPLOS_DIR}/Funcoes/funcoes.c")

add_executable(arg_referencia
        "${EXEMPLOS_DIR}/Funcoes/arg_referencia.c")

add_executable(recursao
        "${EXEMPLOS_DIR}/Funcoes/recursao.c")

add_executable(exponencial
        "${EXEMPLOS_DIR}/Funcoes/exponencial_implementacao.c"
        "${EXEMPLOS_DIR}/Funcoes/exponencial_teste.c")

add_executable(erro_memoria
        "${EXEMPLOS_DIR}/Arrays e Strings/erro_memoria.c")

add_executable(manipulacao_arrays
        "${EXEMPLOS_DIR}/Arrays e Strings/manipulacao_arrays.c")

add_executable(strings
        "${EXEMPLOS_DIR}/Arrays e Strings/strings.c")

add_executable(manipulacao_strings
        "${EXEMPLOS_DIR}/Arrays e Strings/manipulacao_strings.c")

add_executable(aritmetica_ponteiros
        "${EXEMPLOS_DIR}/Ponteiros/aritmetica_ponteiros.c")

add_executable(comparacao_ponteiros
        "${EXEMPLOS_DIR}/Ponteiros/comparacao_ponteiros.c")

add_executable(structs
        "${EXEMPLOS_DIR}/Estruturas/structs.c")

add_executable(arquivos_txt_leitura
        "${EXEMPLOS_DIR}/Manipulacao de Arquivos/arquivos_txt_leitura.c")

add_executable(arquivos_txt_escrita
        "${EXEMPLOS_DIR}/Manipulacao de Arquivos/arquivos_txt_escrita.c")

add_executable(arquivos_binarios
        "${EXEMPLOS_DIR}/Manipulacao de Arquivos/arquivos_binarios.c")

add_executable(repeticao
        "${EXEMPLOS_DIR}/Estruturas de Iteracao e Controle/estruturas_repeticao.c")