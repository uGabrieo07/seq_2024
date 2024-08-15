cmake_minimum_required(VERSION 3.28)
project(seq_2024 C)

set(CMAKE_C_STANDARD 99)

add_executable(exemplo01
        exemplo01.c
        exemplo01_test.c)


add_executable(tipos_variaveis
        tipos_variaveis.c)

add_executable(condicionais
        condicionais.c)

add_executable(scanf_printf
        scanf_printf.c)

add_executable(exemplo02
        exemplo02.c)

add_executable(operador_atribuicao
        operador_atribuicao.c)

add_executable(arg_linha_comando
        argumentos_linha_comando.c)

add_executable(funcoes
        funcoes.c)

add_executable(arg_referencia
        arg_referencia.c)

add_executable(recursao
        recursao.c)

add_executable(exponencial
        exponencial_implementacao.c
        exponencial_teste.c)

add_executable(erro_memoria
        erro_memoria.c)

add_executable(manipulacao_arrays
        manipulacao_arrays.c)

add_executable(strings
        strings.c)

add_executable(manipulacao_strings
        manipulacao_strings.c)

add_executable(aritmetica_ponteiros
        aritmetica_ponteiros.c)

add_executable(comparacao_ponteiros
        comparacao_ponteiros.c)