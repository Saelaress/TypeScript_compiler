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



#line 78 "parser.tab.c"

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
    INTERFACE = 258,               /* INTERFACE  */
    IMPLEMENTS = 259,              /* IMPLEMENTS  */
    CONSTRUCTOR = 260,             /* CONSTRUCTOR  */
    NEW = 261,                     /* NEW  */
    EXTENDS = 262,                 /* EXTENDS  */
    THIS = 263,                    /* THIS  */
    CLASS = 264,                   /* CLASS  */
    STATIC = 265,                  /* STATIC  */
    RETURN = 266,                  /* RETURN  */
    DELETE = 267,                  /* DELETE  */
    EXPORT = 268,                  /* EXPORT  */
    PUBLIC = 269,                  /* PUBLIC  */
    PROTECTED = 270,               /* PROTECTED  */
    PRIVATE = 271,                 /* PRIVATE  */
    READONLY = 272,                /* READONLY  */
    DO = 273,                      /* DO  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    FOR = 276,                     /* FOR  */
    OF = 277,                      /* OF  */
    IN = 278,                      /* IN  */
    WHILE = 279,                   /* WHILE  */
    BREAK = 280,                   /* BREAK  */
    CONTINUE = 281,                /* CONTINUE  */
    DEFAULT = 282,                 /* DEFAULT  */
    SWITCH = 283,                  /* SWITCH  */
    CASE = 284,                    /* CASE  */
    TRY = 285,                     /* TRY  */
    CATCH = 286,                   /* CATCH  */
    INCREMENT = 287,               /* INCREMENT  */
    DECREMENT = 288,               /* DECREMENT  */
    LET = 289,                     /* LET  */
    CONST = 290,                   /* CONST  */
    FUNC = 291,                    /* FUNC  */
    DECLARE = 292,                 /* DECLARE  */
    UNKNOWN = 293,                 /* UNKNOWN  */
    ANY = 294,                     /* ANY  */
    NUMBER = 295,                  /* NUMBER  */
    STRING = 296,                  /* STRING  */
    VOID = 297,                    /* VOID  */
    BOOLEAN = 298,                 /* BOOLEAN  */
    ENUM = 299,                    /* ENUM  */
    NUMBER_LITERAL = 300,          /* NUMBER_LITERAL  */
    STRING_LITERAL = 301,          /* STRING_LITERAL  */
    TRUE_LITERAL = 302,            /* TRUE_LITERAL  */
    FALSE_LITERAL = 303,           /* FALSE_LITERAL  */
    ID = 304,                      /* ID  */
    ENDL = 305,                    /* ENDL  */
    PLUS_ASSIGN = 306,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 307,            /* MINUS_ASSIGN  */
    MUL_ASSIGN = 308,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 309,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 310,              /* MOD_ASSIGN  */
    OR = 311,                      /* OR  */
    AND = 312,                     /* AND  */
    EQUALS = 313,                  /* EQUALS  */
    NOT_EQUALS = 314,              /* NOT_EQUALS  */
    LESS_OR_EQUAL = 315,           /* LESS_OR_EQUAL  */
    GREATER_OR_EQUAL = 316,        /* GREATER_OR_EQUAL  */
    IS = 317,                      /* IS  */
    AS = 318,                      /* AS  */
    PREF_INCREMENT = 319,          /* PREF_INCREMENT  */
    PREF_DECREMENT = 320,          /* PREF_DECREMENT  */
    POST_INCREMENT = 321,          /* POST_INCREMENT  */
    POST_DECREMENT = 322,          /* POST_DECREMENT  */
    NOT = 323,                     /* NOT  */
    UPLUS = 324,                   /* UPLUS  */
    UMINUS = 325                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "../parser.y"

    char* str;
    int num;

#line 200 "parser.tab.c"

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
  YYSYMBOL_INTERFACE = 3,                  /* INTERFACE  */
  YYSYMBOL_IMPLEMENTS = 4,                 /* IMPLEMENTS  */
  YYSYMBOL_CONSTRUCTOR = 5,                /* CONSTRUCTOR  */
  YYSYMBOL_NEW = 6,                        /* NEW  */
  YYSYMBOL_EXTENDS = 7,                    /* EXTENDS  */
  YYSYMBOL_THIS = 8,                       /* THIS  */
  YYSYMBOL_CLASS = 9,                      /* CLASS  */
  YYSYMBOL_STATIC = 10,                    /* STATIC  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_DELETE = 12,                    /* DELETE  */
  YYSYMBOL_EXPORT = 13,                    /* EXPORT  */
  YYSYMBOL_PUBLIC = 14,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 15,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 16,                   /* PRIVATE  */
  YYSYMBOL_READONLY = 17,                  /* READONLY  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_OF = 22,                        /* OF  */
  YYSYMBOL_IN = 23,                        /* IN  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_BREAK = 25,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 26,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_TRY = 30,                       /* TRY  */
  YYSYMBOL_CATCH = 31,                     /* CATCH  */
  YYSYMBOL_INCREMENT = 32,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 33,                 /* DECREMENT  */
  YYSYMBOL_LET = 34,                       /* LET  */
  YYSYMBOL_CONST = 35,                     /* CONST  */
  YYSYMBOL_FUNC = 36,                      /* FUNC  */
  YYSYMBOL_DECLARE = 37,                   /* DECLARE  */
  YYSYMBOL_UNKNOWN = 38,                   /* UNKNOWN  */
  YYSYMBOL_ANY = 39,                       /* ANY  */
  YYSYMBOL_NUMBER = 40,                    /* NUMBER  */
  YYSYMBOL_STRING = 41,                    /* STRING  */
  YYSYMBOL_VOID = 42,                      /* VOID  */
  YYSYMBOL_BOOLEAN = 43,                   /* BOOLEAN  */
  YYSYMBOL_ENUM = 44,                      /* ENUM  */
  YYSYMBOL_NUMBER_LITERAL = 45,            /* NUMBER_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 46,            /* STRING_LITERAL  */
  YYSYMBOL_TRUE_LITERAL = 47,              /* TRUE_LITERAL  */
  YYSYMBOL_FALSE_LITERAL = 48,             /* FALSE_LITERAL  */
  YYSYMBOL_ID = 49,                        /* ID  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_ENDL = 51,                      /* ENDL  */
  YYSYMBOL_52_ = 52,                       /* '='  */
  YYSYMBOL_PLUS_ASSIGN = 53,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 54,              /* MINUS_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 55,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 56,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 57,                /* MOD_ASSIGN  */
  YYSYMBOL_58_ = 58,                       /* '['  */
  YYSYMBOL_59_ = 59,                       /* ']'  */
  YYSYMBOL_60_ = 60,                       /* '?'  */
  YYSYMBOL_61_ = 61,                       /* ':'  */
  YYSYMBOL_OR = 62,                        /* OR  */
  YYSYMBOL_AND = 63,                       /* AND  */
  YYSYMBOL_EQUALS = 64,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 65,                /* NOT_EQUALS  */
  YYSYMBOL_66_ = 66,                       /* '<'  */
  YYSYMBOL_67_ = 67,                       /* '>'  */
  YYSYMBOL_LESS_OR_EQUAL = 68,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 69,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_IS = 70,                        /* IS  */
  YYSYMBOL_AS = 71,                        /* AS  */
  YYSYMBOL_72_ = 72,                       /* '+'  */
  YYSYMBOL_73_ = 73,                       /* '-'  */
  YYSYMBOL_74_ = 74,                       /* '*'  */
  YYSYMBOL_75_ = 75,                       /* '/'  */
  YYSYMBOL_76_ = 76,                       /* '%'  */
  YYSYMBOL_PREF_INCREMENT = 77,            /* PREF_INCREMENT  */
  YYSYMBOL_PREF_DECREMENT = 78,            /* PREF_DECREMENT  */
  YYSYMBOL_POST_INCREMENT = 79,            /* POST_INCREMENT  */
  YYSYMBOL_POST_DECREMENT = 80,            /* POST_DECREMENT  */
  YYSYMBOL_NOT = 81,                       /* NOT  */
  YYSYMBOL_UPLUS = 82,                     /* UPLUS  */
  YYSYMBOL_UMINUS = 83,                    /* UMINUS  */
  YYSYMBOL_84_ = 84,                       /* '.'  */
  YYSYMBOL_85_ = 85,                       /* ')'  */
  YYSYMBOL_86_ = 86,                       /* ','  */
  YYSYMBOL_87_ = 87,                       /* '('  */
  YYSYMBOL_88_ = 88,                       /* '{'  */
  YYSYMBOL_89_ = 89,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_program = 91,                   /* program  */
  YYSYMBOL_program_elem = 92,              /* program_elem  */
  YYSYMBOL_endl = 93,                      /* endl  */
  YYSYMBOL_endl_opt = 94,                  /* endl_opt  */
  YYSYMBOL_stmt_sep = 95,                  /* stmt_sep  */
  YYSYMBOL_expr_list = 96,                 /* expr_list  */
  YYSYMBOL_expr_list_opt = 97,             /* expr_list_opt  */
  YYSYMBOL_expr = 98,                      /* expr  */
  YYSYMBOL_block_statement = 99,           /* block_statement  */
  YYSYMBOL_if_stmt = 100,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 101,               /* while_stmt  */
  YYSYMBOL_do_while_stmt = 102,            /* do_while_stmt  */
  YYSYMBOL_for_stmt = 103,                 /* for_stmt  */
  YYSYMBOL_switch_stmt = 104,              /* switch_stmt  */
  YYSYMBOL_case_list = 105,                /* case_list  */
  YYSYMBOL_case_stmt = 106,                /* case_stmt  */
  YYSYMBOL_break_opt = 107,                /* break_opt  */
  YYSYMBOL_return_statement = 108,         /* return_statement  */
  YYSYMBOL_function_declaration = 109,     /* function_declaration  */
  YYSYMBOL_try_catch_block = 110,          /* try_catch_block  */
  YYSYMBOL_catch_clause = 111,             /* catch_clause  */
  YYSYMBOL_error_type = 112,               /* error_type  */
  YYSYMBOL_stmt_list_opt = 113,            /* stmt_list_opt  */
  YYSYMBOL_stmt_list = 114,                /* stmt_list  */
  YYSYMBOL_stmt = 115,                     /* stmt  */
  YYSYMBOL_modifier = 116,                 /* modifier  */
  YYSYMBOL_type = 117,                     /* type  */
  YYSYMBOL_type_mark = 118,                /* type_mark  */
  YYSYMBOL_type_mark_opt = 119,            /* type_mark_opt  */
  YYSYMBOL_variable = 120,                 /* variable  */
  YYSYMBOL_var_init = 121,                 /* var_init  */
  YYSYMBOL_var_list = 122,                 /* var_list  */
  YYSYMBOL_var_stmt = 123,                 /* var_stmt  */
  YYSYMBOL_dimensions = 124,               /* dimensions  */
  YYSYMBOL_dimensions_list = 125,          /* dimensions_list  */
  YYSYMBOL_param = 126,                    /* param  */
  YYSYMBOL_param_list = 127,               /* param_list  */
  YYSYMBOL_param_list_0_or_more = 128,     /* param_list_0_or_more  */
  YYSYMBOL_implements_decl = 129,          /* implements_decl  */
  YYSYMBOL_readonly_opt = 130,             /* readonly_opt  */
  YYSYMBOL_static_opt = 131,               /* static_opt  */
  YYSYMBOL_visibility = 132,               /* visibility  */
  YYSYMBOL_visibility_opt = 133,           /* visibility_opt  */
  YYSYMBOL_class_member = 134,             /* class_member  */
  YYSYMBOL_class_member_list = 135,        /* class_member_list  */
  YYSYMBOL_class_body = 136,               /* class_body  */
  YYSYMBOL_class_declaration = 137,        /* class_declaration  */
  YYSYMBOL_enum_declaration = 138,         /* enum_declaration  */
  YYSYMBOL_id_list = 139                   /* id_list  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   728

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  431

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
       2,     2,     2,     2,     2,     2,     2,    76,     2,     2,
      87,    85,    74,    72,    86,    73,    84,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    50,
      66,    52,    67,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,    89,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    51,    53,    54,    55,    56,
      57,    62,    63,    64,    65,    68,    69,    70,    71,    77,
      78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    94,    97,    98,   101,   102,   105,   106,
     109,   110,   113,   114,   117,   118,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   160,   162,   163,   166,   169,   172,   175,
     178,   179,   182,   183,   186,   187,   190,   193,   194,   197,
     200,   201,   204,   205,   208,   209,   212,   213,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   231,   232,   235,   236,   237,   238,   239,   240,   241,
     244,   247,   248,   251,   252,   253,   254,   257,   260,   261,
     264,   265,   266,   267,   268,   269,   272,   275,   276,   279,
     280,   283,   284,   287,   288,   291,   292,   295,   296,   299,
     300,   303,   304,   305,   308,   309,   312,   313,   314,   317,
     318,   321,   322,   325,   326,   327,   328,   331,   334,   335,
     336,   337
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
  "\"end of file\"", "error", "\"invalid token\"", "INTERFACE",
  "IMPLEMENTS", "CONSTRUCTOR", "NEW", "EXTENDS", "THIS", "CLASS", "STATIC",
  "RETURN", "DELETE", "EXPORT", "PUBLIC", "PROTECTED", "PRIVATE",
  "READONLY", "DO", "IF", "ELSE", "FOR", "OF", "IN", "WHILE", "BREAK",
  "CONTINUE", "DEFAULT", "SWITCH", "CASE", "TRY", "CATCH", "INCREMENT",
  "DECREMENT", "LET", "CONST", "FUNC", "DECLARE", "UNKNOWN", "ANY",
  "NUMBER", "STRING", "VOID", "BOOLEAN", "ENUM", "NUMBER_LITERAL",
  "STRING_LITERAL", "TRUE_LITERAL", "FALSE_LITERAL", "ID", "';'", "ENDL",
  "'='", "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "'['", "']'", "'?'", "':'", "OR", "AND", "EQUALS",
  "NOT_EQUALS", "'<'", "'>'", "LESS_OR_EQUAL", "GREATER_OR_EQUAL", "IS",
  "AS", "'+'", "'-'", "'*'", "'/'", "'%'", "PREF_INCREMENT",
  "PREF_DECREMENT", "POST_INCREMENT", "POST_DECREMENT", "NOT", "UPLUS",
  "UMINUS", "'.'", "')'", "','", "'('", "'{'", "'}'", "$accept", "program",
  "program_elem", "endl", "endl_opt", "stmt_sep", "expr_list",
  "expr_list_opt", "expr", "block_statement", "if_stmt", "while_stmt",
  "do_while_stmt", "for_stmt", "switch_stmt", "case_list", "case_stmt",
  "break_opt", "return_statement", "function_declaration",
  "try_catch_block", "catch_clause", "error_type", "stmt_list_opt",
  "stmt_list", "stmt", "modifier", "type", "type_mark", "type_mark_opt",
  "variable", "var_init", "var_list", "var_stmt", "dimensions",
  "dimensions_list", "param", "param_list", "param_list_0_or_more",
  "implements_decl", "readonly_opt", "static_opt", "visibility",
  "visibility_opt", "class_member", "class_member_list", "class_body",
  "class_declaration", "enum_declaration", "id_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-317)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-143)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      53,   -49,   -49,    15,  -317,  -317,  -317,  -317,   -24,    -7,
      55,  -317,  -317,  -317,   -49,   -49,     3,   -32,   -49,   -49,
     -49,   -49,   -22,   -49,    75,    78,    17,    37,  -317,    82,
      33,  -317,     2,  -317,  -317,  -317,   -49,   104,  -317,    21,
      46,   -49,   -49,   -49,  -317,   -49,   -49,   -49,   -49,    50,
     -49,  -317,   -49,   100,  -317,  -317,    93,    17,    20,    54,
     335,   515,    89,   -49,    42,  -317,   -49,   119,   -49,  -317,
      81,   -49,  -317,  -317,   -49,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,   171,   -49,   -49,   -49,   -49,   -49,   -49,
    -317,  -317,   -49,  -317,  -317,  -317,  -317,  -317,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   386,   -49,  -317,  -317,
     122,  -317,  -317,  -317,  -317,    97,   515,  -317,   -49,  -317,
     -49,    17,   -49,  -317,   122,  -317,  -317,  -317,   135,    82,
     386,   515,   110,   115,   120,   123,   118,   162,  -317,   171,
     171,   171,   171,   171,   171,   515,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,  -317,
    -317,   -49,   -24,  -317,  -317,  -317,  -317,  -317,   164,   515,
     132,    17,     6,    80,  -317,  -317,  -317,  -317,   190,   -49,
     -49,   -49,   -49,   -49,   -49,   138,   138,    -5,    -5,   138,
     -49,   139,   623,   134,  -317,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   335,   171,   171,   171,   171,   171,   176,     9,   -49,
     122,  -317,   141,  -317,   142,   -49,    61,   122,   135,   -49,
     171,   171,   171,   171,   201,   148,   153,  -317,  -317,   623,
     623,   623,   623,   623,   623,   577,   577,   505,   644,   188,
     188,   188,   188,   188,   188,  -317,   125,   125,    -5,    -5,
      -5,   -40,   -47,   155,   156,  -317,  -317,  -317,   171,   -49,
     195,  -317,  -317,    61,  -317,  -317,   -49,   163,   577,   577,
     577,   577,   -49,  -317,   -49,   -49,   196,   198,   169,    57,
     122,   -49,   -49,   623,   206,   122,   218,  -317,  -317,   186,
     -49,   191,   225,   193,   194,   207,   231,   171,  -317,   -49,
     -49,   195,   234,   234,  -317,  -317,   -49,   -49,   171,   -49,
     -49,   -49,   -49,   -49,   128,   -49,   623,   171,   171,   122,
      27,  -317,  -317,   238,   515,   577,   515,   171,   515,   215,
     255,   195,   -21,   409,   220,   -47,   -49,   217,   222,   290,
     577,  -317,   -49,   -49,  -317,   -49,  -317,  -317,   128,  -317,
     171,   -49,  -317,   -49,   259,   107,   -36,   262,   195,   254,
    -317,   515,   -49,   -49,   -49,    -1,  -317,   -49,   -49,   128,
    -317,   122,  -317,   171,   253,   171,   -49,  -317,   146,   118,
     195,  -317,   577,   -49,   577,  -317,  -317,  -317,   -49,   -49,
    -317,   230,   515,   258,   235,  -317,   -49,   291,   -49,   -49,
     515,   122,  -317,   515,   118,  -317,  -317,   291,   -49,  -317,
    -317
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     8,     0,     2,     5,     4,     6,     9,     0,
       0,     1,     3,     7,     8,     8,     0,     0,     8,     8,
       8,     8,     8,     8,     0,     0,   134,     0,   124,     0,
       0,   125,     8,   133,   132,   131,     8,   129,   139,   134,
       0,     8,     8,     8,   121,     8,     8,     8,     8,     0,
       8,   135,     8,   127,   140,   143,     0,   134,     0,     0,
       0,    74,     0,     8,     0,   130,     8,     0,     8,   126,
       0,     8,   119,   123,     8,    97,    96,    93,    94,    98,
      95,    99,   100,     0,     8,     8,     8,     8,     8,     8,
      91,    92,     8,    23,    24,    25,    26,    27,     8,     8,
       8,     8,     8,     8,     8,     8,     0,     8,    79,    80,
       0,    81,    83,    89,    84,     0,    75,    76,     8,    88,
       8,   134,     8,   128,     8,   136,   138,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,    14,    74,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,    18,
      16,     8,    11,    78,    85,    82,    68,    77,     0,    74,
       0,   134,    11,     0,   111,   120,   122,    66,     0,     8,
       8,     8,     8,     8,     8,    22,    21,    19,    17,    46,
       8,     0,    12,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     8,
       8,    86,     0,   144,     0,     8,     8,     0,   101,     8,
       0,     0,     0,     0,     0,     0,    15,    28,    53,    40,
      41,    42,    43,    44,    45,     8,     8,    48,    47,    38,
      39,    34,    35,    36,    37,    20,    29,    30,    31,    32,
      33,    52,     0,     0,     0,    87,    67,   146,     0,     8,
       0,   112,   117,     8,   113,   102,     8,     0,     8,     8,
       8,     8,     8,    69,     8,     8,     0,     0,     0,     8,
     106,     8,     8,   107,     0,     0,     0,   114,   118,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    50,     8,
       8,     0,     0,     0,   116,   110,     8,     8,     0,     8,
       8,     8,     8,     8,   149,     8,    13,     0,    14,   103,
       8,   108,   109,     0,    74,     8,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     8,     0,     0,    54,
       8,    56,     8,     8,   148,     8,   147,    51,   105,   106,
      14,     8,    57,     8,     0,     0,     0,     0,     0,     0,
     137,     0,     8,     8,     8,     0,    60,     8,     8,   150,
     103,     0,    55,     0,     0,     0,     8,    61,     0,     0,
       0,   115,     8,     8,     8,    59,    72,    73,     8,     8,
     151,     0,    74,     0,     0,    70,     8,    64,     8,     8,
       0,     0,    63,    74,     0,    58,    65,    64,     8,    62,
      71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,   318,   -54,    -2,    65,  -317,  -316,   289,  -133,
    -317,  -317,  -317,  -317,  -317,  -317,   -63,  -104,  -317,  -317,
    -317,  -317,  -317,  -141,  -317,  -108,  -317,   105,   -57,  -317,
    -129,  -143,  -317,   157,    51,  -317,   210,  -317,   158,   304,
    -317,  -317,  -317,  -317,   301,  -317,   -48,   292,  -317,  -317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     8,     9,   184,   200,   201,   106,   107,
     108,   109,   110,   111,   112,   385,   386,   422,   113,     5,
     114,   293,   408,   115,   116,   117,   118,    82,    48,   286,
     229,   237,   230,   125,   282,   283,    44,    45,    23,    21,
      67,    53,    36,    37,    38,    39,    40,     6,   119,   335
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    72,     7,   193,   203,   235,    18,    18,   177,    70,
      19,     7,    16,    17,    46,    11,    24,    25,    26,    27,
      29,    30,   354,   188,     1,   387,   383,    13,   384,     7,
      49,    33,    34,    35,    51,    33,    34,    35,   232,    56,
      57,    58,    14,    59,    60,    61,    62,    -8,    64,   388,
      65,     2,   172,     7,   379,    22,   172,    13,    -9,   146,
       7,   121,     1,    28,   123,   365,   126,    -9,   366,   128,
     182,   185,   129,   180,   169,   170,   172,  -104,     7,   171,
      71,    46,   131,   132,   133,   134,   135,   136,   396,     2,
     137,    20,    -9,    -9,    46,  -104,   138,   139,   140,   141,
     142,   143,   144,   145,    15,   174,  -141,   146,     7,     1,
    -142,   146,     7,  -104,    52,   279,   178,    66,   179,   279,
     181,    47,   183,    41,    31,    42,   236,    32,    41,   300,
     122,    43,   235,   234,   383,    55,   384,   305,    63,    73,
      74,    46,    69,  -105,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    22,   124,   227,
     127,   173,   146,     7,   182,   175,   182,   120,   339,     7,
      -8,   285,   182,   172,   406,   407,   176,   240,   241,   242,
     243,   244,   245,   341,   342,   187,    46,   189,   246,   166,
     167,   168,   190,   357,   169,   170,   105,   191,   364,   171,
     192,   194,   369,   228,   239,   299,    93,    94,    95,    96,
      97,   233,   171,   248,   247,   271,   272,   273,   274,   182,
     276,   277,   292,   278,   280,   390,   294,   287,   359,   295,
     361,   301,   302,    99,   100,   182,   172,   235,   101,   102,
     310,   172,   103,   296,   297,   318,   320,   410,   104,   319,
     164,   165,   166,   167,   168,   324,   409,   169,   170,   298,
     326,   417,   171,   392,   327,   330,   329,   304,   331,   332,
     334,   306,   427,   340,   309,   172,   311,   312,   313,   314,
     315,   428,   316,   317,   333,   275,   356,   321,   368,   322,
     323,   281,   284,   362,   363,   367,   371,   372,   328,   382,
     373,   389,   425,   391,   403,   416,   421,   337,   338,   418,
     419,    12,   397,   429,   343,   344,   265,   346,   347,   348,
     349,   350,   351,   352,   308,   231,    50,   172,   355,   186,
      54,   238,     0,   358,     0,    68,     0,     0,   307,     0,
       0,     0,     0,     0,   370,     0,     0,     0,   374,     0,
     375,   376,     0,   377,   281,   284,   378,   172,     0,   380,
     325,   381,   130,    75,    76,    77,    78,    79,    80,     0,
     393,   394,   395,     0,    81,   398,   399,   400,     0,     0,
       0,     0,     0,     0,   405,     0,     0,     0,     0,     0,
     411,   412,   413,     0,   325,     0,   414,   415,     0,     0,
       0,     0,     0,     0,   420,     0,   423,   424,     0,     0,
       0,     0,     0,     0,     0,     0,   430,     0,   195,   196,
     197,   198,   199,   202,     0,     0,   146,     7,   147,   148,
     149,   150,   151,   152,   153,     0,   154,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   401,   163,   164,   165,
     166,   167,   168,     0,     0,   169,   170,     0,     0,     0,
     171,   155,   156,   157,   158,   159,   160,   161,   162,     0,
     163,   164,   165,   166,   167,   168,   426,     0,   169,   170,
       0,     0,     0,   171,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
       0,   266,   267,   268,   269,   270,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,   288,
     289,   290,   291,    84,    85,     0,    86,     0,     0,    87,
       0,     0,     0,    88,     0,    89,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,     0,   303,   156,   157,
     158,   159,   160,   161,   162,     0,   163,   164,   165,   166,
     167,   168,     0,     0,   169,   170,     0,    99,   100,   171,
       0,     0,   101,   102,     0,     0,   103,     0,     0,     0,
       0,     0,   104,   105,     0,     0,   336,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,     0,     0,
       0,     0,     0,     0,     0,     0,   353,   202,     7,   147,
     148,   149,   150,   151,   152,   153,   360,   154,     0,   155,
     156,   157,   158,   159,   160,   161,   162,     0,   163,   164,
     165,   166,   167,   168,     0,     0,   169,   170,     0,   202,
       0,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   148,   149,   150,   151,
     152,   153,   402,   154,   404,   155,   156,   157,   158,   159,
     160,   161,   162,     0,   163,   164,   165,   166,   167,   168,
       0,     0,   169,   170,     0,     0,     0,   171,   157,   158,
     159,   160,   161,   162,     0,   163,   164,   165,   166,   167,
     168,     0,     0,   169,   170,     0,     0,     0,   171
};

static const yytype_int16 yycheck[] =
{
       2,    58,    51,   136,   145,    52,     4,     4,   116,    57,
       7,    51,    14,    15,    61,     0,    18,    19,    20,    21,
      22,    23,   338,   131,     9,    61,    27,    51,    29,    51,
      32,    14,    15,    16,    36,    14,    15,    16,   179,    41,
      42,    43,    49,    45,    46,    47,    48,    87,    50,    85,
      52,    36,   106,    51,   370,    87,   110,    51,    52,    50,
      51,    63,     9,    85,    66,    86,    68,    61,    89,    71,
     124,   128,    74,   121,    79,    80,   130,    50,    51,    84,
      60,    61,    84,    85,    86,    87,    88,    89,    89,    36,
      92,    88,    86,    87,    61,    86,    98,    99,   100,   101,
     102,   103,   104,   105,    49,   107,    89,    50,    51,     9,
      89,    50,    51,    86,    10,    58,   118,    17,   120,    58,
     122,    88,   124,    86,    49,    88,   183,    49,    86,   272,
      88,    49,    52,   181,    27,    89,    29,   280,    88,    85,
      86,    61,    49,    86,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,    87,    49,   171,
      89,   106,    50,    51,   228,   110,   230,    88,   321,    51,
      52,   238,   236,   237,    38,    39,    89,   189,   190,   191,
     192,   193,   194,   322,   323,   130,    61,    87,   200,    74,
      75,    76,    87,   344,    79,    80,    88,    87,   351,    84,
      87,    49,   355,    49,    24,   272,    45,    46,    47,    48,
      49,    89,    84,    89,    85,    49,   228,   229,   230,   283,
      89,    89,    31,   235,   236,   378,    88,   239,   346,    86,
     348,    86,    86,    72,    73,   299,   300,    52,    77,    78,
      87,   305,    81,   255,   256,    59,    87,   400,    87,    61,
      72,    73,    74,    75,    76,    59,   399,    79,    80,   271,
      52,   412,    84,   381,    88,    50,    85,   279,    85,    85,
      49,   283,   423,    49,   286,   339,   288,   289,   290,   291,
     292,   424,   294,   295,    87,   230,    58,   299,   355,   301,
     302,   236,   237,    88,    49,    85,    89,    85,   310,    50,
      20,    49,   420,    59,    61,    85,    25,   319,   320,    61,
      85,     3,   385,   427,   326,   327,   221,   329,   330,   331,
     332,   333,   334,   335,   283,   178,    32,   391,   340,   129,
      39,   183,    -1,   345,    -1,    53,    -1,    -1,   283,    -1,
      -1,    -1,    -1,    -1,   356,    -1,    -1,    -1,   360,    -1,
     362,   363,    -1,   365,   299,   300,   368,   421,    -1,   371,
     305,   373,    83,    38,    39,    40,    41,    42,    43,    -1,
     382,   383,   384,    -1,    49,   387,   388,   389,    -1,    -1,
      -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,
     402,   403,   404,    -1,   339,    -1,   408,   409,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    -1,   418,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,   139,   140,
     141,   142,   143,   144,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,   391,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    -1,
      84,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,   421,    -1,    79,    80,
      -1,    -1,    -1,    84,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,   240,
     241,   242,   243,    18,    19,    -1,    21,    -1,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,   278,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    72,    73,    84,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,   317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,   338,    51,    52,
      53,    54,    55,    56,    57,    58,   347,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    80,    -1,   370,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,   393,    60,   395,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    -1,    84,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    36,    91,    92,   109,   137,    51,    93,    94,
      94,     0,    92,    51,    49,    49,    94,    94,     4,     7,
      88,   129,    87,   128,    94,    94,    94,    94,    85,    94,
      94,    49,    49,    14,    15,    16,   132,   133,   134,   135,
     136,    86,    88,    49,   126,   127,    61,    88,   118,    94,
     129,    94,    10,   131,   134,    89,    94,    94,    94,    94,
      94,    94,    94,    88,    94,    94,    17,   130,   137,    49,
     136,    60,   118,    85,    86,    38,    39,    40,    41,    42,
      43,    49,   117,    11,    18,    19,    21,    24,    28,    30,
      34,    35,    44,    45,    46,    47,    48,    49,    50,    72,
      73,    77,    78,    81,    87,    88,    98,    99,   100,   101,
     102,   103,   104,   108,   110,   113,   114,   115,   116,   138,
      88,    94,    88,    94,    49,   123,    94,    89,    94,    94,
      98,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    50,    52,    53,    54,
      55,    56,    57,    58,    60,    62,    63,    64,    65,    66,
      67,    68,    69,    71,    72,    73,    74,    75,    76,    79,
      80,    84,    93,    95,    94,    95,    89,   115,    94,    94,
     136,    94,    93,    94,    95,   118,   126,    95,   115,    87,
      87,    87,    87,    99,    49,    98,    98,    98,    98,    98,
      96,    97,    98,   113,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    49,   120,
     122,   123,   113,    89,   136,    52,   118,   121,   128,    24,
      94,    94,    94,    94,    94,    94,    94,    85,    89,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,   117,    98,    98,    98,    98,
      98,    49,    94,    94,    94,    95,    89,    89,    94,    58,
      94,    95,   124,   125,    95,   118,   119,    94,    98,    98,
      98,    98,    31,   111,    88,    86,    94,    94,    94,   118,
     121,    86,    86,    98,    94,   121,    94,    95,   124,    94,
      87,    94,    94,    94,    94,    94,    94,    94,    59,    61,
      87,    94,    94,    94,    59,    95,    52,    88,    94,    85,
      50,    85,    85,    87,    49,   139,    98,    94,    94,   121,
      49,   120,   120,    94,    94,    98,    94,    94,    94,    94,
      94,    94,    94,    98,    97,    94,    58,   113,    94,   115,
      98,   115,    88,    49,   121,    86,    89,    85,   118,   121,
      94,    89,    85,    20,    94,    94,    94,    94,    94,    97,
      94,    94,    50,    27,    29,   105,   106,    61,    85,    49,
     121,    59,   115,    94,    94,    94,    89,   106,    94,    94,
      94,    95,    98,    61,    98,    94,    38,    39,   112,    99,
     121,    94,    94,    94,    94,    94,    85,   113,    61,    85,
      94,    25,   107,    94,    94,   115,    95,   113,    99,   107,
      94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,   100,   100,   101,   102,   103,   104,
     105,   105,   106,   106,   107,   107,   108,   109,   109,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     118,   119,   119,   120,   120,   120,   120,   121,   122,   122,
     123,   123,   123,   123,   123,   123,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   138,   139,   139,
     139,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     1,
       2,     1,     1,     5,     0,     2,     2,     3,     2,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     4,     4,     8,
       6,     9,     4,     4,     9,    12,     9,    10,    17,    13,
       1,     2,     8,     6,     0,     2,     3,    12,    10,     5,
      10,    14,     1,     1,     0,     1,     1,     2,     2,     1,
       1,     1,     2,     1,     1,     2,     3,     4,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     5,     1,     3,     3,     3,     5,     5,
       6,     2,     4,     4,     5,    12,     3,     1,     2,     3,
       5,     1,     5,     5,     2,     3,     5,     0,     2,     0,
       2,     1,     1,     1,     0,     2,     4,    13,     4,     1,
       2,     0,     1,     8,    12,    10,    13,     9,     3,     1,
       5,     7
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

#line 1658 "parser.tab.c"

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

#line 340 "../parser.y"

{/*Секция пользовательского кода*/}
