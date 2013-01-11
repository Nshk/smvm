/* ScrashWare MIX Virtual machine difinitions */
#include <inttypes.h>
#define BLEN 6 /* a BLEN-bit-wide byte (MUST be <= 8) */
#define BMAX 64  /*  MUST be 2^BLEN */

/* Definitions of LOAD operators */
#define LDA   8   /* Load a value in rA */
#define LD1   9   /* Load a value in rIi */
#define LD2   10  /* with  0 < i < 7 */
#define LD3   11
#define LD4   12
#define LD5   13
#define LD6   14
#define LDX   15  /* Load a value in rX */
#define LDAN  16  /* As above, opposite sign loaded */
#define LD1N  17 
#define LD2N  18
#define LD3N  19
#define LD4N  20
#define LD5N  21
#define LD6N  22
#define LDXN  23
/* Definitions of STORE operators */
#define STA   24
#define ST1   25
#define ST2   26
#define ST3   27
#define ST4   28
#define ST5   29
#define ST6   30
#define STX   31
#define STJ   32
#define STZ   33
/* Definitions of ARITHMETIC operators */
#define ADD   1
#define SUB   2
#define MUL   3
#define DIV   4
/* Definitions of Address transfer operators */
#define ENTA  48  /* This two have the same code number */
#define INCA  48  /* but different modifier (F). */
#define ENNA  48
#define DECA  48
#define ENTAF 2   /* Modifier (F) value of ENTA */
#define INCAF 0   /* Modifier (F) value of INCA */
#define ENNAF 3
#define DECAF 1

#define ENT1  49  /* Same as ENTA */
#define ENT2  50
#define ENT3  51
#define ENT4  52
#define ENT5  53
#define ENT6  54
#define ENT1F 2
#define ENT2F 2
#define ENT3F 2
#define ENT4F 2  
#define ENT5F 2
#define ENT6F 2
#define ENN1  49
#define ENN2  50
#define ENN3  51
#define ENN4  52
#define ENN5  53
#define ENN6  54
#define ENN1F 3
#define ENN2F 3
#define ENN3F 3
#define ENN4F 3
#define ENN5F 3
#define ENN6F 3
#define INC1  49
#define INC2  50
#define INC3  51
#define INC4  52
#define INC5  53
#define INC6  54
#define INC1F 0
#define INC2F 0
#define INC3F 0
#define INC4F 0
#define INC5F 0
#define INC6F 0
#define DEC1  49
#define DEC2  50
#define DEC3  51
#define DEC4  52
#define DEC5  53
#define DEC6  54
#define DEC1F 0
#define DEC2F 0
#define DEC3F 0
#define DEC4F 0
#define DEC5F 0
#define DEC6F 0

#define ENTX  55  /*Same as the above ones */
#define INCX  55
#define ENNX  55
#define DECX  55
#define ENTXF 2
#define INCXF 0
#define ENNXF 3
#define DECXF 1

/* Definitins of Comparison operators */
#define CMPA  56
#define CMP1  57
#define CMP2  58
#define CMP3  59
#define CMP4  60
#define CMP5  61
#define CMP6  62
#define CMPX  63

/* Definitions of Jump operators */
#define JMP   39
#define JMPF  0
#define JSJ   39
#define JSJF  1
#define JOV   39
#define JOVF  2
#define JNOV  39
#define JNOVF 3
#define JL    39
#define JLF   4
#define JE    39
#define JEF   5
#define JG    39
#define JGF   6
#define JGE   39
#define JGEF  7
#define JNE   39
#define JNEF  8
#define JLE   39
#define JLEF  9

#define JAN   40
#define JANF  0
#define JAZ   40
#define JAZF  1
#define JAP   40
#define JAPF  2
#define JANN  40
#define JANNF 3
#define JANZ  40
#define JANZF 4
#define JANP  40
#define JANPF 5

#define J1N   41
#define J1NF  0
#define J1Z   41
#define J1ZF  1
#define J1P   41
#define J1PF  2
#define J1NN  41
#define J1NNF 3
#define J1NZ  41
#define J1NZF 4
#define J1NP  41
#define J1NPF 5

#define J2N   42
#define J2NF  0
#define J2Z   42
#define J2ZF  1
#define J2P   42
#define J2PF  2
#define J2NN  42
#define J2NNF 3
#define J2NZ  42
#define J2NZF 4
#define J2NP  42
#define J2NPF 5

#define J3N   43
#define J3NF  0
#define J3Z   43
#define J3ZF  1
#define J3P   43
#define J3PF  2
#define J3NN  43
#define J3NNF 3
#define J3NZ  43
#define J3NZF 4
#define J3NP  43
#define J3NPF 5

#define J4N   44
#define J4NF  0
#define J4Z   44
#define J4ZF  1
#define J4P   44
#define J4PF  2
#define J4NN  44
#define J4NNF 3
#define J4NZ  44
#define J4NZF 4
#define J4NP  44
#define J4NPF 5

#define J5N   45
#define J5NF  0
#define J5Z   45
#define J5ZF  1
#define J5P   45
#define J5PF  2
#define J5NN  45
#define J5NNF 3
#define J5NZ  45
#define J5NZF 4
#define J5NP  45
#define J5NPF 5

#define J6N   46
#define J6NF  0
#define J6Z   46
#define J6ZF  1
#define J6P   46
#define J6PF  2
#define J6NN  46
#define J6NNF 3
#define J6NZ  46
#define J6NZF 4
#define J6NP  46
#define J6NPF 5

#define JXN   47
#define JXNF  0
#define JXZ   47
#define JXZF  1
#define JXP   47
#define JXPF  2
#define JXNN  47
#define JXNNF 3
#define JXNZ  47
#define JXNZF 4
#define JXNP  47
#define JXNPF 5

/* Definitions of Miscellaneous operators */
#define SLA   6
#define SLAF  0
#define SRA   6
#define SRAF  1
#define SLAX  6
#define SLAXF 2
#define SRAX  6
#define SRAXF 3
#define SLC   6
#define SLCF  4
#define SRC   6
#define SRCF  5

#define MOVE  7

#define NOP   0

#define HLT   5
#define HLTF  2

/* Definitions of Input-Output operators */
#define IN    36
#define OUT   37
#define IOC   35
#define JRED  38
#define JBUS  34

/* Definitions of Conversion operators */
#define NUM   5
#define NUMF  0
#define CHAR  5
#define CHARF 1

typedef struct {
  uint8_t rA[6];

  uint8_t rX[6];

  uint8_t rI1[3];
  uint8_t rI2[3];
  uint8_t rI3[3];
  uint8_t rI4[3];
  uint8_t rI5[3];
  uint8_t rI6[3];

  uint8_t rJ[3];
} registers;

typedef struct {
  uint8_t ow;
  uint8_t less;
  uint8_t equal;
  uint8_t greater;
} sflag;
