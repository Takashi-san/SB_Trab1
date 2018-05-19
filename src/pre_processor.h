#ifndef PRE_PROCESSOR_H_
#define PRE_PROCESSOR_H_

#include <cstdio>
#include <iostream>
#include <fstream>
#include <list>

/*----------TOKEN-TYPE-TABLE----------*/
#define TT_MNEMONIC         1
#define TT_LABEL            2
#define TT_DIRECTIVE        3
#define TT_OPERAND          4
#define TT_DEC_CONST        5
#define TT_HEX_CONST        6
#define TT_COMMA_OPERATOR   7
#define TT_CONST        5
/*------------------------------------*/

/*------------OPCODE-TABLE------------*/
#define OP_ADD              1
#define OP_SUB              2
#define OP_MULT             3
#define OP_DIV              4
#define OP_JMP              5
#define OP_JMPN             6
#define OP_JMPP             7
#define OP_JMPZ             8
#define OP_COPY             9
#define OP_LOAD             10
#define OP_STORE            11
#define OP_INPUT            12
#define OP_OUTPUT           13
#define OP_STOP             14
/*------------------------------------*/

/*----------DIRECTIVE-TABLE-----------*/
#define DIR_SECTION         1
#define DIR_SPACE           2
#define DIR_CONST           3
#define DIR_EQU             4
#define DIR_IF              5
#define DIR_MACRO           6
#define DIR_ENDMACRO        7
#define DIR_TEXT            8
#define DIR_DATA            9
/*------------------------------------*/

#define INVALID_TOKEN       -1




/*--------------STRUCTS---------------*/
struct Token {
    std::string str;
    int line_number;
    int token_pos_il;
    int type;
    int addit_info;
    std::string info_str;
};
typedef struct Token Token;
/*------------------------------------*/

int pre_processor(char * input_fn, char * output_fn);
void print_list (std::list<Token> & tokenlist);

extern int pre_error;

#endif /* PRE_PROCESSOR_H_ */
