/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "../parser.y"
 /*Пролог*/
#include "tree_nodes.h"
// Объявления предварительных функций и классов


#line 77 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    RETURN = 258,                  /* RETURN  */
    DELETE = 259,                  /* DELETE  */
    EXPORT = 260,                  /* EXPORT  */
    PUBLIC = 261,                  /* PUBLIC  */
    PROTECTED = 262,               /* PROTECTED  */
    PRIVATE = 263,                 /* PRIVATE  */
    READONLY = 264,                /* READONLY  */
    DO = 265,                      /* DO  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    FOR = 268,                     /* FOR  */
    OF = 269,                      /* OF  */
    IN = 270,                      /* IN  */
    WHILE = 271,                   /* WHILE  */
    BREAK = 272,                   /* BREAK  */
    CONTINUE = 273,                /* CONTINUE  */
    DEFAULT = 274,                 /* DEFAULT  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    TRY = 277,                     /* TRY  */
    CATCH = 278,                   /* CATCH  */
    THROW = 279,                   /* THROW  */
    INCREMENT = 280,               /* INCREMENT  */
    DECREMENT = 281,               /* DECREMENT  */
    LET = 282,                     /* LET  */
    CONST = 283,                   /* CONST  */
    FUNC = 284,                    /* FUNC  */
    DECLARE = 285,                 /* DECLARE  */
    UNKNOWN = 286,                 /* UNKNOWN  */
    ANY = 287,                     /* ANY  */
    NUMBER = 288,                  /* NUMBER  */
    STRING = 289,                  /* STRING  */
    VOID = 290,                    /* VOID  */
    BOOLEAN = 291,                 /* BOOLEAN  */
    ENUM = 292,                    /* ENUM  */
    NUMBER_LITERAL = 293,          /* NUMBER_LITERAL  */
    STRING_LITERAL = 294,          /* STRING_LITERAL  */
    TRUE_LITERAL = 295,            /* TRUE_LITERAL  */
    FALSE_LITERAL = 296,           /* FALSE_LITERAL  */
    ID = 297,                      /* ID  */
    ENDL = 298,                    /* ENDL  */
    PLUS_ASSIGN = 299,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 300,            /* MINUS_ASSIGN  */
    MUL_ASSIGN = 301,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 302,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 303,              /* MOD_ASSIGN  */
    OR = 304,                      /* OR  */
    AND = 305,                     /* AND  */
    EQUALS = 306,                  /* EQUALS  */
    NOT_EQUALS = 307,              /* NOT_EQUALS  */
    LESS_OR_EQUAL = 308,           /* LESS_OR_EQUAL  */
    GREATER_OR_EQUAL = 309,        /* GREATER_OR_EQUAL  */
    IS = 310,                      /* IS  */
    AS = 311,                      /* AS  */
    NEW = 312,                     /* NEW  */
    PREF_INCREMENT = 313,          /* PREF_INCREMENT  */
    PREF_DECREMENT = 314,          /* PREF_DECREMENT  */
    POST_INCREMENT = 315,          /* POST_INCREMENT  */
    POST_DECREMENT = 316,          /* POST_DECREMENT  */
    NOT = 317,                     /* NOT  */
    UPLUS = 318,                   /* UPLUS  */
    UMINUS = 319                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "../parser.y"

    char* str;
    int num;

#line 193 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_RETURN = 3,                     /* RETURN  */
  YYSYMBOL_DELETE = 4,                     /* DELETE  */
  YYSYMBOL_EXPORT = 5,                     /* EXPORT  */
  YYSYMBOL_PUBLIC = 6,                     /* PUBLIC  */
  YYSYMBOL_PROTECTED = 7,                  /* PROTECTED  */
  YYSYMBOL_PRIVATE = 8,                    /* PRIVATE  */
  YYSYMBOL_READONLY = 9,                   /* READONLY  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_OF = 14,                        /* OF  */
  YYSYMBOL_IN = 15,                        /* IN  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 19,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_TRY = 22,                       /* TRY  */
  YYSYMBOL_CATCH = 23,                     /* CATCH  */
  YYSYMBOL_THROW = 24,                     /* THROW  */
  YYSYMBOL_INCREMENT = 25,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 26,                 /* DECREMENT  */
  YYSYMBOL_LET = 27,                       /* LET  */
  YYSYMBOL_CONST = 28,                     /* CONST  */
  YYSYMBOL_FUNC = 29,                      /* FUNC  */
  YYSYMBOL_DECLARE = 30,                   /* DECLARE  */
  YYSYMBOL_UNKNOWN = 31,                   /* UNKNOWN  */
  YYSYMBOL_ANY = 32,                       /* ANY  */
  YYSYMBOL_NUMBER = 33,                    /* NUMBER  */
  YYSYMBOL_STRING = 34,                    /* STRING  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_BOOLEAN = 36,                   /* BOOLEAN  */
  YYSYMBOL_ENUM = 37,                      /* ENUM  */
  YYSYMBOL_NUMBER_LITERAL = 38,            /* NUMBER_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 39,            /* STRING_LITERAL  */
  YYSYMBOL_TRUE_LITERAL = 40,              /* TRUE_LITERAL  */
  YYSYMBOL_FALSE_LITERAL = 41,             /* FALSE_LITERAL  */
  YYSYMBOL_ID = 42,                        /* ID  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_ENDL = 44,                      /* ENDL  */
  YYSYMBOL_45_ = 45,                       /* '='  */
  YYSYMBOL_PLUS_ASSIGN = 46,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 47,              /* MINUS_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 48,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 49,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 50,                /* MOD_ASSIGN  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_53_ = 53,                       /* '?'  */
  YYSYMBOL_54_ = 54,                       /* ':'  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_AND = 56,                       /* AND  */
  YYSYMBOL_EQUALS = 57,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 58,                /* NOT_EQUALS  */
  YYSYMBOL_59_ = 59,                       /* '<'  */
  YYSYMBOL_60_ = 60,                       /* '>'  */
  YYSYMBOL_LESS_OR_EQUAL = 61,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 62,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_IS = 63,                        /* IS  */
  YYSYMBOL_AS = 64,                        /* AS  */
  YYSYMBOL_65_ = 65,                       /* '+'  */
  YYSYMBOL_66_ = 66,                       /* '-'  */
  YYSYMBOL_67_ = 67,                       /* '*'  */
  YYSYMBOL_68_ = 68,                       /* '/'  */
  YYSYMBOL_69_ = 69,                       /* '%'  */
  YYSYMBOL_NEW = 70,                       /* NEW  */
  YYSYMBOL_PREF_INCREMENT = 71,            /* PREF_INCREMENT  */
  YYSYMBOL_PREF_DECREMENT = 72,            /* PREF_DECREMENT  */
  YYSYMBOL_POST_INCREMENT = 73,            /* POST_INCREMENT  */
  YYSYMBOL_POST_DECREMENT = 74,            /* POST_DECREMENT  */
  YYSYMBOL_NOT = 75,                       /* NOT  */
  YYSYMBOL_UPLUS = 76,                     /* UPLUS  */
  YYSYMBOL_UMINUS = 77,                    /* UMINUS  */
  YYSYMBOL_78_ = 78,                       /* '.'  */
  YYSYMBOL_79_ = 79,                       /* ')'  */
  YYSYMBOL_80_ = 80,                       /* ','  */
  YYSYMBOL_81_ = 81,                       /* '('  */
  YYSYMBOL_82_ = 82,                       /* '{'  */
  YYSYMBOL_83_ = 83,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_prog = 85,                      /* prog  */
  YYSYMBOL_program = 86,                   /* program  */
  YYSYMBOL_program_elem = 87,              /* program_elem  */
  YYSYMBOL_endl = 88,                      /* endl  */
  YYSYMBOL_endl_opt = 89,                  /* endl_opt  */
  YYSYMBOL_stmt_sep = 90,                  /* stmt_sep  */
  YYSYMBOL_expr_list = 91,                 /* expr_list  */
  YYSYMBOL_expr_list_endl_opt = 92,        /* expr_list_endl_opt  */
  YYSYMBOL_expr_list_endl = 93,            /* expr_list_endl  */
  YYSYMBOL_expr = 94,                      /* expr  */
  YYSYMBOL_block_statement = 95,           /* block_statement  */
  YYSYMBOL_if_stmt = 96,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 97,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 98,             /* do_while_stmt  */
  YYSYMBOL_for_stmt = 99,                  /* for_stmt  */
  YYSYMBOL_switch_stmt = 100,              /* switch_stmt  */
  YYSYMBOL_case_list = 101,                /* case_list  */
  YYSYMBOL_case_list_break = 102,          /* case_list_break  */
  YYSYMBOL_case_stmt_break = 103,          /* case_stmt_break  */
  YYSYMBOL_break_opt_special = 104,        /* break_opt_special  */
  YYSYMBOL_case_stmt = 105,                /* case_stmt  */
  YYSYMBOL_break_opt = 106,                /* break_opt  */
  YYSYMBOL_return_statement = 107,         /* return_statement  */
  YYSYMBOL_function_declaration = 108,     /* function_declaration  */
  YYSYMBOL_try_catch_block = 109,          /* try_catch_block  */
  YYSYMBOL_catch_clause = 110,             /* catch_clause  */
  YYSYMBOL_error_type = 111,               /* error_type  */
  YYSYMBOL_stmt_list_opt = 112,            /* stmt_list_opt  */
  YYSYMBOL_stmt_list = 113,                /* stmt_list  */
  YYSYMBOL_stmt_top = 114,                 /* stmt_top  */
  YYSYMBOL_stmt = 115,                     /* stmt  */
  YYSYMBOL_modifier = 116,                 /* modifier  */
  YYSYMBOL_type = 117,                     /* type  */
  YYSYMBOL_type_mark = 118,                /* type_mark  */
  YYSYMBOL_variable_endl = 119,            /* variable_endl  */
  YYSYMBOL_variable_stmt = 120,            /* variable_stmt  */
  YYSYMBOL_var_init = 121,                 /* var_init  */
  YYSYMBOL_var_list = 122,                 /* var_list  */
  YYSYMBOL_var_list_stmt = 123,            /* var_list_stmt  */
  YYSYMBOL_dimensions = 124,               /* dimensions  */
  YYSYMBOL_dimensions_list = 125,          /* dimensions_list  */
  YYSYMBOL_param = 126,                    /* param  */
  YYSYMBOL_param_list = 127,               /* param_list  */
  YYSYMBOL_param_list_0_or_more = 128,     /* param_list_0_or_more  */
  YYSYMBOL_enum_declaration = 129,         /* enum_declaration  */
  YYSYMBOL_id_list_init = 130,             /* id_list_init  */
  YYSYMBOL_id_list_endl = 131              /* id_list_endl  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   722

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  397

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    69,     2,     2,
      81,    79,    67,    65,    80,    66,    78,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    43,
      59,    45,    60,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,    83,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    44,    46,
      47,    48,    49,    50,    55,    56,    57,    58,    61,    62,
      63,    64,    70,    71,    72,    73,    74,    75,    76,    77
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    89,    90,    93,    94,    97,    98,   101,
     102,   105,   106,   109,   110,   113,   114,   117,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   159,   161,   162,   165,   168,
     171,   174,   177,   178,   181,   182,   185,   186,   189,   190,
     191,   192,   195,   196,   199,   200,   201,   204,   207,   208,
     211,   214,   215,   218,   219,   222,   223,   226,   227,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   245,   246,   249,   250,   253,   254,   255,   256,
     257,   258,   259,   262,   265,   266,   267,   268,   269,   272,
     273,   274,   275,   276,   279,   282,   283,   284,   285,   286,
     289,   290,   291,   292,   293,   294,   297,   300,   301,   304,
     305,   308,   309,   312,   313,   316,   317,   318,   319,   322,
     323,   326,   327
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "RETURN", "DELETE",
  "EXPORT", "PUBLIC", "PROTECTED", "PRIVATE", "READONLY", "DO", "IF",
  "ELSE", "FOR", "OF", "IN", "WHILE", "BREAK", "CONTINUE", "DEFAULT",
  "SWITCH", "CASE", "TRY", "CATCH", "THROW", "INCREMENT", "DECREMENT",
  "LET", "CONST", "FUNC", "DECLARE", "UNKNOWN", "ANY", "NUMBER", "STRING",
  "VOID", "BOOLEAN", "ENUM", "NUMBER_LITERAL", "STRING_LITERAL",
  "TRUE_LITERAL", "FALSE_LITERAL", "ID", "';'", "ENDL", "'='",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "'['", "']'", "'?'", "':'", "OR", "AND", "EQUALS", "NOT_EQUALS", "'<'",
  "'>'", "LESS_OR_EQUAL", "GREATER_OR_EQUAL", "IS", "AS", "'+'", "'-'",
  "'*'", "'/'", "'%'", "NEW", "PREF_INCREMENT", "PREF_DECREMENT",
  "POST_INCREMENT", "POST_DECREMENT", "NOT", "UPLUS", "UMINUS", "'.'",
  "')'", "','", "'('", "'{'", "'}'", "$accept", "prog", "program",
  "program_elem", "endl", "endl_opt", "stmt_sep", "expr_list",
  "expr_list_endl_opt", "expr_list_endl", "expr", "block_statement",
  "if_stmt", "while_stmt", "do_while_stmt", "for_stmt", "switch_stmt",
  "case_list", "case_list_break", "case_stmt_break", "break_opt_special",
  "case_stmt", "break_opt", "return_statement", "function_declaration",
  "try_catch_block", "catch_clause", "error_type", "stmt_list_opt",
  "stmt_list", "stmt_top", "stmt", "modifier", "type", "type_mark",
  "variable_endl", "variable_stmt", "var_init", "var_list",
  "var_list_stmt", "dimensions", "dimensions_list", "param", "param_list",
  "param_list_0_or_more", "enum_declaration", "id_list_init",
  "id_list_endl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-281)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     520,     3,     3,     3,     3,     3,     3,    79,  -281,  -281,
       3,     3,  -281,  -281,  -281,  -281,   -28,     3,     3,     3,
       3,     3,     3,     3,     3,     3,    44,   520,  -281,   560,
       3,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,     3,
    -281,  -281,    13,   446,    14,    32,    48,    61,    34,   560,
      51,   104,     3,  -281,    79,    79,    79,    79,    79,    79,
      79,   446,  -281,  -281,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,  -281,  -281,    13,
    -281,  -281,   107,  -281,    79,  -281,  -281,   143,     3,     3,
       3,     3,     3,  -281,     3,     3,    79,     3,   109,  -281,
     629,  -281,  -281,    35,    35,  -281,   599,    80,   446,  -281,
    -281,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,   188,    79,    79,
      79,    79,    79,    68,    82,  -281,    85,  -281,   560,     3,
      79,    79,    79,    79,   141,    88,    96,    87,   105,  -281,
     111,  -281,  -281,   629,   629,   629,   629,   629,   629,   599,
     599,   648,   334,    58,    58,    58,    58,    58,    58,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,    66,    66,    35,
      35,    35,   -19,    56,  -281,     3,     3,  -281,   110,   599,
     599,   599,   599,     3,  -281,     3,     3,     3,  -281,     3,
    -281,   134,   142,     3,     3,     3,    43,    68,   150,   153,
       3,   123,   163,   129,   130,   144,    12,   -40,   -32,    79,
    -281,     3,    79,   188,   168,     3,   181,  -281,  -281,    43,
    -281,  -281,    68,  -281,  -281,     3,  -281,  -281,    79,     3,
       3,     3,     3,     3,     3,  -281,  -281,     3,     3,     3,
       3,  -281,     3,   -49,   629,    79,   629,  -281,    68,  -281,
    -281,   175,    68,   183,  -281,  -281,    -6,  -281,    -6,   599,
     446,    79,   446,   149,   190,    84,    73,   446,   152,   181,
     -47,     3,  -281,   115,    -6,  -281,  -281,  -281,  -281,     3,
     156,   224,   599,  -281,     3,     3,     3,  -281,  -281,     3,
     155,     3,  -281,     3,  -281,   199,   193,    68,     3,   202,
      39,   -24,   192,   212,  -281,   446,   217,     3,     3,     3,
    -281,   446,     3,     3,     3,    39,   178,  -281,  -281,     3,
       3,  -281,  -281,   179,     3,   181,   -37,    79,  -281,    79,
     209,    79,  -281,  -281,     3,   124,    34,  -281,   181,  -281,
     213,   599,     3,   599,  -281,  -281,  -281,     3,     3,  -281,
      68,   185,   446,   219,   195,  -281,  -281,  -281,     3,     7,
       3,     3,   446,   114,  -281,  -281,   446,    34,  -281,     3,
     -31,     7,     3,   184,  -281,  -281,  -281
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     9,     9,     9,     9,     9,     0,   104,   105,
       9,     9,    25,    26,    27,    28,    29,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     0,     2,     3,     0,
       9,    90,    91,    93,    92,    94,     6,    95,     5,     9,
      99,     7,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,   100,    15,     0,     0,     0,     0,     0,
       0,    85,     1,     4,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,    20,    18,    12,
      89,    96,     0,     8,     0,   103,   102,     0,     9,     9,
       9,     9,     9,   101,     9,     9,    15,     9,     0,    16,
      13,    24,    23,    21,    19,    48,     9,     0,    86,    87,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,   130,     0,    98,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    54,
       0,    55,    88,    42,    43,    44,    45,    46,    47,     9,
       9,    50,    49,    40,    41,    36,    37,    38,    39,   110,
     109,   106,   107,   111,   108,   112,    22,    31,    32,    33,
      34,    35,    12,     0,    97,     9,     9,    77,     0,     9,
       9,     9,     9,     9,    80,     9,     9,     9,    53,     9,
      30,     0,     0,     9,     9,     9,     9,     9,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     9,     0,     0,     0,     9,   115,   120,   137,     9,
     116,   121,     9,   125,   131,     9,   129,   135,     0,     9,
       9,     9,     9,     9,     9,   144,   141,     9,     9,     9,
       9,   148,     9,     0,    14,     0,   124,   113,     9,   126,
     132,     0,     9,   117,   122,   138,   127,   133,     0,     9,
       0,     0,     0,     0,     0,     0,     0,    85,     0,   151,
       0,     9,   145,    51,   128,   134,   136,   114,   119,     9,
       0,    56,     9,    58,     9,     9,     9,   139,   143,     9,
       0,     9,   149,     9,   146,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    79,    85,     0,     9,     9,     9,
      59,     0,     9,     9,     9,     0,     0,    64,    62,     9,
       9,   140,   142,     0,     9,   152,     0,    15,    57,     0,
       0,     0,    65,    63,     9,     0,     0,    78,     0,   147,
       0,     9,     9,     9,    61,    83,    84,     9,     9,   150,
       9,     0,    85,     0,     0,    81,   118,   123,     9,    74,
       9,     9,     0,    71,    67,    73,    85,     0,    60,     9,
      75,    74,     9,    76,    66,    72,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -281,  -281,  -281,   248,     0,    -2,   138,  -281,   -94,  -281,
     291,   -43,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   -59,
    -113,   -56,  -111,  -281,  -281,  -281,  -281,  -281,  -280,  -281,
      11,   -11,  -281,    49,  -200,  -178,  -130,  -230,  -281,  -281,
      45,  -281,   -38,  -281,  -281,  -281,   -27,  -281
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    26,    27,    28,    42,    43,    90,   107,   108,   109,
      29,    30,    31,    32,    33,    34,    35,   335,   336,   337,
     384,   338,   385,    95,    36,    37,   204,   367,   117,   118,
      96,   119,    39,   186,   216,   144,   145,   217,   146,   147,
     238,   239,   256,   257,   206,    40,   262,   263
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    45,    46,    47,    48,   102,   272,   310,    50,    51,
     260,    38,   157,    93,   214,    53,    54,    55,    56,    57,
      58,    59,    60,    61,   383,    93,   -10,   259,    91,    89,
     339,   291,    97,   313,   292,   -10,   314,    92,    38,   213,
     243,   246,   258,   313,    62,   343,   359,    41,   214,    89,
     106,   261,   -69,    52,   254,   340,   269,    93,   333,   312,
     334,   -10,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   307,    64,    41,   244,   247,
     -68,   255,   379,   104,   235,    98,   150,   151,   152,   153,
     154,   213,   155,   156,   270,   158,   391,   162,    87,    88,
     214,    64,    41,    99,   160,   312,    25,    12,    13,    14,
      15,    16,   341,    82,    83,    84,    85,    86,   369,   100,
      18,    87,    88,    84,    85,    86,   215,   306,   214,    87,
      88,   193,   101,   192,    19,    20,   105,   198,    89,   143,
      21,    22,   308,   309,    23,   365,   366,   389,    41,   149,
      24,   159,   195,   161,   203,   196,   208,   211,   212,   205,
      73,    74,    75,    76,    77,    78,    79,    80,   207,    81,
      82,    83,    84,    85,    86,   209,   230,   103,    87,    88,
     210,   220,   242,   218,   219,   245,   231,   221,   222,   223,
     224,   225,   249,   226,   227,   228,   250,   229,   251,   252,
     268,   232,   233,   234,   236,   240,   192,   192,   248,   179,
     180,   181,   182,   183,   184,   253,   213,   296,   299,   265,
     185,   304,   305,   271,   311,   317,   318,   273,   324,   192,
     276,   327,   192,   278,   329,   332,   214,   280,   281,   282,
     283,   284,   285,   360,   254,   286,   287,   288,   289,   344,
     290,   354,   357,   362,   378,   370,   294,   -70,   192,   301,
     297,   303,   192,   380,   381,    63,   352,   300,   394,   353,
     395,   194,   267,     0,   275,   342,   197,     0,   328,   315,
       0,     0,     0,     0,     0,     0,     0,   316,    49,     0,
     319,     0,   320,   321,   322,     0,     0,   323,     0,   325,
       0,   326,     0,   368,     0,     0,   331,    89,     0,     0,
     348,     0,     0,     0,     0,   345,   346,   347,     0,     0,
     349,   350,   351,     0,     0,     0,     0,   355,   356,     0,
       0,     0,   358,     0,   392,   110,   111,   112,   113,   114,
     115,   116,   364,     0,   237,   241,     0,     0,     0,   371,
     372,   373,     0,     0,     0,   374,   375,     0,   376,     0,
     192,   388,     0,     0,     0,     0,   382,   274,   386,   387,
     277,     0,     0,   390,     0,   148,     0,   393,     0,     0,
     396,    75,    76,    77,    78,    79,    80,   110,    81,    82,
      83,    84,    85,    86,     0,     0,   295,    87,    88,     0,
     298,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,     0,   187,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,   199,   200,   201,   202,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,   330,     1,     2,     0,     3,
       0,     0,     4,     0,     0,     0,     5,     0,     6,     0,
       7,     0,     0,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,    19,    20,     0,     0,     0,     0,    21,    22,     0,
     264,    23,     0,   266,     0,     0,     0,    24,    25,     0,
       1,     2,     0,     3,     0,     0,     4,     0,     0,   279,
       5,     0,     6,     0,     7,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,   293,    11,    12,    13,
      14,    15,    16,    17,     0,     0,     0,     0,     0,     0,
       0,    18,   302,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,     0,     0,     0,
       0,    21,    22,     0,     0,    23,     0,     0,     0,     0,
       0,    24,    25,    64,    41,    65,    66,    67,    68,    69,
      70,    71,     0,    72,     0,    73,    74,    75,    76,    77,
      78,    79,    80,     0,    81,    82,    83,    84,    85,    86,
       0,     0,     0,    87,    88,     0,     0,     0,   110,     0,
     361,     0,   363,    41,    65,    66,    67,    68,    69,    70,
      71,     0,    72,     0,    73,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     0,    87,    88,    65,    66,    67,    68,    69,    70,
      71,     0,    72,     0,    73,    74,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    83,    84,    85,    86,     0,
       0,     0,    87,    88,    74,    75,    76,    77,    78,    79,
      80,     0,    81,    82,    83,    84,    85,    86,     0,     0,
       0,    87,    88
};

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,    48,   236,   287,    10,    11,
      42,     0,   106,    44,    54,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    17,    44,    45,   227,    30,    29,
      54,    80,    43,    80,    83,    54,    83,    39,    27,    45,
     218,   219,    82,    80,     0,   325,    83,    44,    54,    49,
      52,    83,    83,    81,    42,    79,   234,    44,    19,   289,
      21,    80,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   285,    43,    44,   218,   219,
      83,    79,   372,    42,    51,    81,    98,    99,   100,   101,
     102,    45,   104,   105,   234,   107,   386,   118,    73,    74,
      54,    43,    44,    81,   116,   345,    82,    38,    39,    40,
      41,    42,   322,    65,    66,    67,    68,    69,   358,    81,
      51,    73,    74,    67,    68,    69,    80,    53,    54,    73,
      74,   143,    81,   143,    65,    66,    42,   149,   148,    42,
      71,    72,    79,    80,    75,    31,    32,    43,    44,    16,
      81,    52,    80,    83,    23,    80,    79,   169,   170,    81,
      55,    56,    57,    58,    59,    60,    61,    62,    82,    64,
      65,    66,    67,    68,    69,    80,    52,    49,    73,    74,
      79,    81,    42,   195,   196,    42,    54,   199,   200,   201,
     202,   203,    79,   205,   206,   207,    43,   209,    79,    79,
      42,   213,   214,   215,   216,   217,   216,   217,   220,    31,
      32,    33,    34,    35,    36,    81,    45,    52,    45,   231,
      42,    82,    42,   235,    82,    79,    12,   239,    83,   239,
     242,    42,   242,   245,    51,    43,    54,   249,   250,   251,
     252,   253,   254,   347,    42,   257,   258,   259,   260,    42,
     262,    83,    83,    54,    79,    52,   268,    83,   268,   280,
     272,   282,   272,    54,    79,    27,   335,   279,   391,   335,
     391,   143,   233,    -1,   239,   323,   148,    -1,   315,   291,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,     7,    -1,
     302,    -1,   304,   305,   306,    -1,    -1,   309,    -1,   311,
      -1,   313,    -1,   356,    -1,    -1,   318,   317,    -1,    -1,
     331,    -1,    -1,    -1,    -1,   327,   328,   329,    -1,    -1,
     332,   333,   334,    -1,    -1,    -1,    -1,   339,   340,    -1,
      -1,    -1,   344,    -1,   387,    54,    55,    56,    57,    58,
      59,    60,   354,    -1,   216,   217,    -1,    -1,    -1,   361,
     362,   363,    -1,    -1,    -1,   367,   368,    -1,   370,    -1,
     370,   382,    -1,    -1,    -1,    -1,   378,   239,   380,   381,
     242,    -1,    -1,   383,    -1,    94,    -1,   389,    -1,    -1,
     392,    57,    58,    59,    60,    61,    62,   106,    64,    65,
      66,    67,    68,    69,    -1,    -1,   268,    73,    74,    -1,
     272,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,   317,    10,    11,    -1,    13,
      -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    22,    -1,
      24,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   370,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    71,    72,    -1,
     229,    75,    -1,   232,    -1,    -1,    -1,    81,    82,    -1,
      10,    11,    -1,    13,    -1,    -1,    16,    -1,    -1,   248,
      20,    -1,    22,    -1,    24,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   265,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,   347,    -1,
     349,    -1,   351,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    73,    74,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    73,    74,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    73,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    13,    16,    20,    22,    24,    27,    28,
      29,    37,    38,    39,    40,    41,    42,    43,    51,    65,
      66,    71,    72,    75,    81,    82,    85,    86,    87,    94,
      95,    96,    97,    98,    99,   100,   108,   109,   114,   116,
     129,    44,    88,    89,    89,    89,    89,    89,    89,    94,
      89,    89,    81,    89,    89,    89,    89,    89,    89,    89,
      89,    89,     0,    87,    43,    45,    46,    47,    48,    49,
      50,    51,    53,    55,    56,    57,    58,    59,    60,    61,
      62,    64,    65,    66,    67,    68,    69,    73,    74,    88,
      90,    89,    89,    44,     3,   107,   114,   115,    81,    81,
      81,    81,    95,    90,    42,    42,    89,    91,    92,    93,
      94,    94,    94,    94,    94,    94,    94,   112,   113,   115,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    42,   119,   120,   122,   123,    94,    16,
      89,    89,    89,    89,    89,    89,    89,    92,    89,    52,
      89,    83,   115,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    31,
      32,    33,    34,    35,    36,    42,   117,    94,    94,    94,
      94,    94,    88,    89,    90,    80,    80,    90,    89,    94,
      94,    94,    94,    23,   110,    81,   128,    82,    79,    80,
      79,    89,    89,    45,    54,    80,   118,   121,    89,    89,
      81,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      52,    54,    89,    89,    89,    51,    89,    90,   124,   125,
      89,    90,    42,   119,   120,    42,   119,   120,    89,    79,
      43,    79,    79,    81,    42,    79,   126,   127,    82,   118,
      42,    83,   130,   131,    94,    89,    94,   117,    42,   119,
     120,    89,   121,    89,    90,   124,    89,    90,    89,    94,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    80,    83,    94,    89,    90,    52,    89,    90,    45,
      89,   115,    94,   115,    82,    42,    53,   118,    79,    80,
     112,    82,   121,    80,    83,    89,    89,    79,    12,    89,
      89,    89,    89,    89,    83,    89,    89,    42,   130,    51,
      90,    89,    43,    19,    21,   101,   102,   103,   105,    54,
      79,   118,   126,   112,    42,    89,    89,    89,   115,    89,
      89,    89,   103,   105,    83,    89,    89,    83,    89,    83,
      92,    94,    54,    94,    89,    31,    32,   111,    95,   121,
      52,    89,    89,    89,    89,    89,    89,    90,    79,   112,
      54,    79,    89,    17,   104,   106,    89,    89,   115,    43,
      88,   112,    95,    89,   104,   106,    89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    96,    96,    97,    98,
      99,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   106,   106,   106,   107,   108,   108,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   118,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   120,   121,   122,   122,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   129,   130,
     130,   131,   131
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     0,
       1,     2,     1,     1,     5,     0,     1,     2,     2,     3,
       2,     3,     4,     3,     3,     1,     1,     1,     1,     1,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     3,     4,
       4,     8,     6,     5,     4,     4,     9,    12,     9,    11,
      17,    13,     1,     2,     1,     2,     8,     6,     0,     2,
       3,     1,     8,     6,     0,     2,     3,     3,    12,    10,
       5,    10,    14,     1,     1,     0,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     6,     4,     4,     5,    12,     6,
       4,     4,     5,    12,     3,     4,     5,     5,     6,     4,
       1,     4,     5,     5,     6,     4,     3,     1,     2,     3,
       5,     1,     5,     5,     3,     8,     9,    12,     7,     3,
       7,     2,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1629 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 330 "../parser.y"

{/*Секция пользовательского кода*/}
