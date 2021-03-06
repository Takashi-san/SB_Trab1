/*
Universidade de Brasilia - 01/2018
CIC 116432 - Software Basico - Turma B
Professor Bruno Macchiavello
Trabalho Pratico 2 - Montador + ligador

Alunos: Andre Abreu Rodrigues de Almeida    12/0007100
        Bruno Takashi Tengan                12/0167263
*/

*** INSTRUÇÕES DE COMPILAÇÃO MONTADOR***
O código para ser compilado DEVE ser compilado com um compilador capaz de usar os recursos do C++ versão 11.
Comandos de compilação usados:

*SO: Ubuntu 5.4.0-6ubuntu1~16.04.9
*Compilador: gcc 5.4.0 20160609
*comando: g++ -std=c++11 -Wall *.cpp
*obs: compilado na pasta /montador.

*SO:OSX x86_64-apple-darwin17.5.0
*Compilador: CLANG -> Apple LLVM version 9.1.0 (clang-902.0.39.1)
*comando: clang++ -std=c++11 -Wall *.cpp
*obs: compilado na pasta /montador.



*** INSTRUÇÕES DE COMPILAÇÃO LIGADOR***
Comandos de compilação usados:

*SO: Ubuntu 5.4.0-6ubuntu1~16.04.9
*Compilador: gcc 5.4.0 20160609
*comando: g++ -Wall *.cpp
*obs: compilado na pasta /ligador.


*************************************************************************

***  PROGRAMA NASMCALC  ***

Instruções de montagem e uso:

O código da calculadora em NASM presente em /Calculadora/nasmcalc.asm DEVE ser montado em Nasm, atendendo as seguintes configurações:

*SO:  Lubuntu - Ubuntu 10.04 LTS i386 - 32 bits
*CPU: Intel(R) Atom(TM) CPU Z520 @ 1.33 GHz
*Montador: NASM versão 2.13.02
*Ligador:  GNU ld (GNU binutils for Ubuntu) 2.30

*comando de terminal: nasm -felf nasmcalc.asm && ld nasmcalc.o && ./a.out
**obs: executado na pasta /calculadora.