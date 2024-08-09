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

