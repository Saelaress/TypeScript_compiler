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
  YYSYMBOL_empty_stmt = 116,               /* empty_stmt  */
  YYSYMBOL_modifier = 117,                 /* modifier  */
  YYSYMBOL_type = 118,                     /* type  */
  YYSYMBOL_type_mark = 119,                /* type_mark  */
  YYSYMBOL_type_mark_opt = 120,            /* type_mark_opt  */
  YYSYMBOL_variable = 121,                 /* variable  */
  YYSYMBOL_var_init_opt = 122,             /* var_init_opt  */
  YYSYMBOL_var_list = 123,                 /* var_list  */
  YYSYMBOL_var_declaration = 124,          /* var_declaration  */
  YYSYMBOL_dimensions = 125,               /* dimensions  */
  YYSYMBOL_dimensions_list = 126,          /* dimensions_list  */
  YYSYMBOL_param = 127,                    /* param  */
  YYSYMBOL_optional_param = 128,           /* optional_param  */
  YYSYMBOL_param_list = 129,               /* param_list  */
  YYSYMBOL_param_list_0_or_more = 130,     /* param_list_0_or_more  */
  YYSYMBOL_implements_decl = 131,          /* implements_decl  */
  YYSYMBOL_readonly_opt = 132,             /* readonly_opt  */
  YYSYMBOL_static_opt = 133,               /* static_opt  */
  YYSYMBOL_visibility = 134,               /* visibility  */
  YYSYMBOL_visibility_opt = 135,           /* visibility_opt  */
  YYSYMBOL_class_member = 136,             /* class_member  */
  YYSYMBOL_class_member_list = 137,        /* class_member_list  */
  YYSYMBOL_class_body = 138,               /* class_body  */
  YYSYMBOL_class_declaration = 139,        /* class_declaration  */
  YYSYMBOL_enum_declaration = 140,         /* enum_declaration  */
  YYSYMBOL_id_list = 141                   /* id_list  */
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
#define YYLAST   776

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

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
     155,   156,   157,   158,   161,   163,   164,   165,   166,   167,
     168,   171,   172,   175,   176,   179,   180,   183,   186,   187,
     190,   191,   194,   195,   198,   201,   202,   205,   208,   209,
     212,   213,   216,   217,   220,   221,   222,   223,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   239,
     242,   243,   246,   247,   248,   249,   250,   251,   252,   255,
     258,   259,   262,   265,   266,   269,   270,   273,   274,   275,
     278,   281,   282,   285,   288,   291,   292,   293,   294,   297,
     298,   301,   302,   305,   306,   309,   310,   313,   314,   315,
     318,   319,   322,   323,   324,   325,   328,   329,   332,   333,
     336,   337,   338,   339,   342,   345,   346
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
  "stmt_list", "stmt", "empty_stmt", "modifier", "type", "type_mark",
  "type_mark_opt", "variable", "var_init_opt", "var_list",
  "var_declaration", "dimensions", "dimensions_list", "param",
  "optional_param", "param_list", "param_list_0_or_more",
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

#define YYPACT_NINF (-334)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-150)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,    64,    64,    83,  -334,  -334,  -334,  -334,    74,    12,
      46,  -334,  -334,  -334,    64,    64,     3,    61,    64,    64,
      64,    64,   -28,    64,    82,    95,    44,    -6,  -334,   129,
      33,  -334,     4,  -334,  -334,  -334,    64,   183,  -334,    64,
     114,    64,    64,    64,  -334,  -334,    64,    64,    64,    64,
     117,    64,  -334,    64,     7,    53,  -334,   159,    44,    86,
      90,   206,   565,   130,    64,    28,  -334,    64,   168,  -334,
    -334,  -334,   131,    64,  -334,  -334,    64,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,   134,    64,    64,    64,    64,
      64,    64,  -334,  -334,    64,  -334,  -334,  -334,  -334,   -22,
    -334,    64,    64,    64,    64,    64,    64,    64,   604,  -334,
    -334,  -334,   137,  -334,  -334,  -334,  -334,   133,   462,  -334,
    -334,    64,  -334,    64,    44,    64,  -334,    -8,   140,    26,
    -334,  -334,   158,   129,   604,   565,   141,   142,   145,   146,
     148,   188,    64,   164,   134,   134,   134,   134,   134,   134,
     565,  -334,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,  -334,  -334,    64,    74,  -334,  -334,  -334,
    -334,  -334,  -334,   189,   565,   163,    44,    36,  -334,   201,
    -334,   170,  -334,  -334,  -334,  -334,    64,    64,    64,    64,
      64,    64,    64,    64,   206,    64,   174,   174,    93,    93,
     174,   638,   165,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   210,    23,   137,   176,  -334,   177,
      20,    64,    64,    64,   239,   240,   134,   134,   134,   134,
     236,   182,  -334,   134,   186,  -334,   671,   671,   671,   671,
     671,   671,   638,   638,   490,   692,   151,   151,   151,   151,
     151,   151,   110,   110,    93,    93,    93,   -25,   158,  -334,
    -334,  -334,    64,   214,  -334,    20,    57,   134,   224,    64,
      64,   638,   638,   638,   638,    64,  -334,    64,    26,   193,
     671,  -334,   215,   218,   195,   221,   214,   233,  -334,    64,
      64,   671,    23,   140,   199,   200,   213,   245,   216,   217,
     212,   251,   219,  -334,  -334,    64,    64,  -334,    64,   565,
     222,   158,  -334,    64,    64,    64,    64,    64,    64,    64,
     140,    64,    64,   134,   134,   254,   226,    64,  -334,   134,
     134,    62,   134,   565,   230,   270,  -334,   -13,   134,   457,
     235,    64,  -334,   565,   638,   638,   604,   301,   638,  -334,
    -334,    64,    64,    64,  -334,   671,  -334,   134,   234,   237,
     257,   301,   310,   289,   109,    52,   294,   285,  -334,  -334,
    -334,   325,    64,    64,    64,    64,    10,  -334,    64,    64,
     140,  -334,    64,    62,   134,   286,   134,  -334,  -334,   175,
     148,  -334,    62,   604,  -334,   638,    64,   638,  -334,  -334,
      64,  -334,   604,  -334,  -334,   263,   565,   288,   266,  -334,
      64,   327,    64,    64,   565,   137,  -334,   565,   148,  -334,
    -334,    64,   327,  -334,  -334,  -334
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     8,     0,     2,     5,     4,     6,     9,     0,
       0,     1,     3,     7,     8,     8,     0,     0,     8,     8,
       8,     8,     8,     8,     0,     0,   140,     0,   130,     0,
       0,   131,     8,   139,   138,   137,     8,   135,   146,     8,
       0,     8,     8,     8,   125,   127,     8,     8,     8,     8,
       0,     8,   141,     8,   133,   140,   150,     0,   140,     0,
       0,     0,    82,     0,     8,     0,   136,     8,     0,   145,
     147,   132,     0,     8,   123,   129,     8,   106,   105,   102,
     103,   107,   104,   108,   109,     0,     8,     8,     8,     8,
       8,     8,   100,   101,     8,    23,    24,    25,    26,    27,
      99,     8,     8,     8,     8,     8,     8,     8,     0,    95,
      89,    90,     0,    91,    93,    98,    94,     0,     8,    84,
      85,     8,    97,     8,   140,     8,   134,   110,   113,   117,
     142,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
      82,    10,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,    18,    16,     8,    11,    88,    92,    76,
      83,    86,    87,     0,    82,     0,   140,     0,   112,     0,
     115,     0,   124,   126,   128,    74,     8,     8,     8,     8,
       8,     8,     8,     8,     0,     8,    22,    21,    19,    17,
      47,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,   151,     0,
     111,     8,     8,     8,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    14,     0,    54,    41,    42,    43,    44,
      45,    46,     8,     8,    49,    48,    39,    40,    35,    36,
      37,    38,    30,    31,    32,    33,    34,    53,     0,    96,
      75,   153,     8,     0,   121,     8,     0,     0,     0,     8,
       8,     8,     8,     8,     8,     8,    77,     8,    15,     0,
      12,    28,     0,     0,     0,     0,   118,     0,   122,     8,
       8,   114,   110,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    51,     8,     8,   120,     8,    82,
       0,     0,   116,     8,     8,     8,     8,     8,     8,     8,
     113,     8,     8,     0,    14,     0,     0,     8,   111,     0,
       0,     0,     0,     0,     0,     0,   155,     0,     0,    50,
       0,     8,   144,    82,     8,     8,     0,    55,     8,    61,
      62,     8,     8,     8,   154,    13,    52,    14,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,   143,    63,
      64,     0,     8,     8,     8,     8,     0,    68,     8,     8,
     113,   119,     8,     0,     0,     0,     0,    67,    69,     0,
       0,   156,     0,     0,    57,     8,     8,     8,    80,    81,
       8,    78,     0,    59,    58,     0,    82,     0,     0,    60,
       8,    72,     8,     8,     0,     0,    71,    82,     0,    65,
      66,     8,    72,    79,    73,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -334,  -334,   350,  -106,    -1,  -109,  -334,  -333,   229,  -135,
    -334,  -334,  -334,  -334,  -334,  -334,   -42,   -87,  -334,  -334,
    -334,  -334,  -334,  -120,  -334,  -103,   -84,  -334,   152,    -3,
    -334,    69,  -304,  -334,   178,  -273,    75,   232,   246,  -334,
     172,   330,  -334,  -334,  -334,  -334,   313,  -334,   -54,   315,
    -334,  -334
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     8,   189,   177,   298,   299,   108,   109,
     110,   111,   112,   113,   114,   396,   397,   436,   115,     5,
     116,   296,   420,   117,   118,   119,   120,   121,    84,   240,
     188,   128,   190,   129,   130,   284,   285,    44,    45,    46,
      23,    21,    68,    54,    36,    37,    38,    39,    40,     6,
     122,   341
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   176,   178,    72,   202,   176,    18,    18,   332,
      19,   360,   308,    16,    17,   181,     1,    24,    25,    26,
      27,    29,    30,     7,    67,   195,     7,    49,   176,     7,
     212,    50,   196,   308,   182,    52,   356,   394,    55,   395,
      57,    58,    59,     7,   387,    60,    61,    62,    63,   142,
      65,   197,    66,    -8,     1,     7,    74,    28,    33,    34,
      35,    14,    -8,   124,   237,    -8,   126,    33,    34,    35,
     185,     7,   132,   373,     7,   133,   374,     7,   282,    -8,
      41,     2,    42,    11,    -8,   135,   136,   137,   138,   139,
     140,    20,     1,   141,    47,    15,   411,    47,   143,   407,
     144,   145,   146,   147,   148,   149,   150,    95,    96,    97,
      98,    99,    -8,   398,    41,     7,   125,   180,    47,     2,
     183,    48,   184,    22,   186,    13,   187,   279,   191,   192,
     176,    31,   239,  -148,   101,   102,   394,   399,   395,   103,
     104,   204,  -149,   105,    32,   309,    73,    47,    22,   106,
     107,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   173,   174,   234,    75,    76,   175,    43,    95,
      96,    97,    98,    99,   170,   171,   172,   151,     7,   173,
     174,     7,    -8,    53,   175,   244,   245,   246,   247,   248,
     249,   250,   251,    56,   253,    64,   101,   102,    71,   346,
     254,   103,   104,   418,   419,   105,   367,   127,   123,    47,
     131,   106,   179,   168,   169,   170,   171,   172,   198,   199,
     173,   174,   200,   201,   278,   175,   107,   203,   235,   283,
     286,   287,   288,   378,    77,    78,    79,    80,    81,    82,
     369,   205,   238,   242,   255,    83,   243,   381,   175,   277,
     176,   302,   303,   289,   290,   280,   281,   295,   414,   370,
     297,   301,   282,   312,   324,   421,   304,   423,   323,   325,
     327,   305,   326,   310,   307,   328,   333,   334,   314,   315,
     316,   317,   318,   319,   320,   336,   321,   322,   335,   339,
     340,   337,   338,   443,   424,   342,   431,   176,   329,   330,
     347,   331,   361,   429,   134,   362,   176,   442,   371,   372,
     376,    -8,   389,   388,   343,   344,   441,   345,   348,   176,
     392,   439,   349,   350,   351,   352,   353,   354,   355,   393,
     357,   358,   390,   400,   401,   402,   363,   416,   430,   432,
     440,   433,   435,    12,   408,   445,   252,   313,   306,   241,
     377,   236,    51,   379,   380,   193,   382,   383,    70,    69,
     384,   385,   386,   206,   207,   208,   209,   210,   211,   194,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,   404,   405,   406,     0,     0,   409,   410,     0,
       0,   412,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   426,   427,     0,     0,   428,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   434,
       0,   437,   438,     0,     0,     0,     0,     0,     0,     0,
     444,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,   291,   292,   293,   294,     0,
      86,    87,   300,    88,     0,     0,    89,     0,     0,     0,
      90,     0,    91,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,    96,    97,
      98,    99,   100,     7,     0,     0,   311,     0,     0,   160,
     161,   162,   163,   164,   165,   166,   167,     0,     0,   168,
     169,   170,   171,   172,   101,   102,   173,   174,     0,   103,
     104,   175,     0,   105,     0,     0,     0,     0,     0,   106,
     107,     0,     0,   161,   162,   163,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,   172,     0,     0,   173,
     174,     0,   359,   300,   175,     0,    85,     0,   364,   365,
     366,   368,     0,    86,    87,     0,    88,   375,     0,    89,
       0,     0,     0,    90,     0,    91,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,   300,     0,     0,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   413,   415,     0,   417,     0,   101,   102,     0,
       0,   422,   103,   104,     0,     0,   105,     0,     0,     0,
       0,     0,   106,   107,   151,     7,   152,   153,   154,   155,
     156,   157,   158,     0,   159,     0,   160,   161,   162,   163,
     164,   165,   166,   167,     0,     0,   168,   169,   170,   171,
     172,     0,     0,   173,   174,     0,     0,     0,   175,     7,
     152,   153,   154,   155,   156,   157,   158,     0,   159,     0,
     160,   161,   162,   163,   164,   165,   166,   167,     0,     0,
     168,   169,   170,   171,   172,     0,     0,   173,   174,     0,
       0,     0,   175,   152,   153,   154,   155,   156,   157,   158,
       0,   159,     0,   160,   161,   162,   163,   164,   165,   166,
     167,     0,     0,   168,   169,   170,   171,   172,     0,     0,
     173,   174,     0,     0,     0,   175,   162,   163,   164,   165,
     166,   167,     0,     0,   168,   169,   170,   171,   172,     0,
       0,   173,   174,     0,     0,     0,   175
};

static const yytype_int16 yycheck[] =
{
       1,     2,   108,   112,    58,   140,   112,     4,     4,   313,
       7,   344,   285,    14,    15,   118,     9,    18,    19,    20,
      21,    22,    23,    51,    17,   134,    51,    30,   134,    51,
     150,    32,   135,   306,   118,    36,   340,    27,    39,    29,
      41,    42,    43,    51,   377,    46,    47,    48,    49,    71,
      51,   135,    53,    61,     9,    51,    59,    85,    14,    15,
      16,    49,    87,    64,   184,    87,    67,    14,    15,    16,
     124,    51,    73,    86,    51,    76,    89,    51,    58,    87,
      86,    36,    88,     0,    61,    86,    87,    88,    89,    90,
      91,    88,     9,    94,    61,    49,   400,    61,    99,    89,
     101,   102,   103,   104,   105,   106,   107,    45,    46,    47,
      48,    49,    86,    61,    86,    51,    88,   118,    61,    36,
     121,    88,   123,    87,   125,    51,   127,   236,   129,   132,
     236,    49,   186,    89,    72,    73,    27,    85,    29,    77,
      78,   142,    89,    81,    49,    88,    60,    61,    87,    87,
      88,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,    79,    80,   175,    85,    86,    84,    49,    45,
      46,    47,    48,    49,    74,    75,    76,    50,    51,    79,
      80,    51,    52,    10,    84,   196,   197,   198,   199,   200,
     201,   202,   203,    89,   205,    88,    72,    73,    49,   329,
     211,    77,    78,    38,    39,    81,   351,    49,    88,    61,
      89,    87,    89,    72,    73,    74,    75,    76,    87,    87,
      79,    80,    87,    87,   235,    84,    88,    49,    49,   240,
     241,   242,   243,   363,    38,    39,    40,    41,    42,    43,
     353,    87,    89,    52,    89,    49,    86,   366,    84,    49,
     366,   262,   263,    24,    24,    89,    89,    31,   403,   353,
      88,    85,    58,    49,    59,   410,   277,   412,    85,    61,
      59,   282,    87,   286,   285,    52,    87,    87,   289,   290,
     291,   292,   293,   294,   295,    50,   297,   298,    85,    87,
      49,    85,    85,   438,   413,    86,   426,   413,   309,   310,
      88,   312,    58,   422,    85,    89,   422,   437,    88,    49,
      85,    20,    85,    89,   325,   326,   435,   328,   331,   435,
      20,   434,   333,   334,   335,   336,   337,   338,   339,    50,
     341,   342,    85,    49,    59,    20,   347,    61,    85,    61,
     434,    85,    25,     3,   396,   442,   204,   288,   283,   187,
     361,   183,    32,   364,   365,   133,   367,   368,    55,    54,
     371,   372,   373,   144,   145,   146,   147,   148,   149,   133,
     381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   392,   393,   394,   395,    -1,    -1,   398,   399,    -1,
      -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   415,   416,   417,    -1,    -1,   420,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,
      -1,   432,   433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     441,    -1,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,   246,   247,   248,   249,    -1,
      18,    19,   253,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,   287,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      73,    74,    75,    76,    72,    73,    79,    80,    -1,    77,
      78,    84,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    -1,   343,   344,    84,    -1,    11,    -1,   349,   350,
     351,   352,    -1,    18,    19,    -1,    21,   358,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   403,   404,    -1,   406,    -1,    72,    73,    -1,
      -1,   412,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    88,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    84,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    -1,    84,    52,    53,    54,    55,    56,    57,    58,
      -1,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      79,    80,    -1,    -1,    -1,    84,    64,    65,    66,    67,
      68,    69,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    36,    91,    92,   109,   139,    51,    93,    94,
      94,     0,    92,    51,    49,    49,    94,    94,     4,     7,
      88,   131,    87,   130,    94,    94,    94,    94,    85,    94,
      94,    49,    49,    14,    15,    16,   134,   135,   136,   137,
     138,    86,    88,    49,   127,   128,   129,    61,    88,   119,
      94,   131,    94,    10,   133,    94,    89,    94,    94,    94,
      94,    94,    94,    94,    88,    94,    94,    17,   132,   139,
     136,    49,   138,    60,   119,    85,    86,    38,    39,    40,
      41,    42,    43,    49,   118,    11,    18,    19,    21,    24,
      28,    30,    34,    35,    44,    45,    46,    47,    48,    49,
      50,    72,    73,    77,    78,    81,    87,    88,    98,    99,
     100,   101,   102,   103,   104,   108,   110,   113,   114,   115,
     116,   117,   140,    88,    94,    88,    94,    49,   121,   123,
     124,    89,    94,    94,    98,    94,    94,    94,    94,    94,
      94,    94,    71,    94,    94,    94,    94,    94,    94,    94,
      94,    50,    52,    53,    54,    55,    56,    57,    58,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    72,    73,
      74,    75,    76,    79,    80,    84,    93,    95,    95,    89,
      94,   115,   116,    94,    94,   138,    94,    94,   120,    94,
     122,    94,   119,   127,   128,    95,   115,   116,    87,    87,
      87,    87,    99,    49,    94,    87,    98,    98,    98,    98,
      98,    98,   113,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    49,   124,   113,    89,   138,
     119,   130,    52,    86,    94,    94,    94,    94,    94,    94,
      94,    94,   118,    94,    94,    89,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    49,    94,    95,
      89,    89,    58,    94,   125,   126,    94,    94,    94,    24,
      24,    98,    98,    98,    98,    31,   111,    88,    96,    97,
      98,    85,    94,    94,    94,    94,   126,    94,   125,    88,
     119,    98,    49,   121,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    85,    59,    61,    87,    59,    52,    94,
      94,    94,   122,    87,    87,    85,    50,    85,    85,    87,
      49,   141,    86,    94,    94,    94,   113,    88,   119,    94,
      94,    94,    94,    94,    94,    94,   122,    94,    94,    98,
      97,    58,    89,    94,    98,    98,    98,    99,    98,   115,
     116,    88,    49,    86,    89,    98,    85,    94,   113,    94,
      94,    95,    94,    94,    94,    94,    94,    97,    89,    85,
      85,    94,    20,    50,    27,    29,   105,   106,    61,    85,
      49,    59,    20,    94,    94,    94,    94,    89,   106,    94,
      94,   122,    94,    98,    99,    98,    61,    98,    38,    39,
     112,    99,    98,    99,    95,    94,    94,    94,    94,    95,
      85,   113,    61,    85,    94,    25,   107,    94,    94,   115,
     116,    95,   113,    99,    94,   107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   105,   105,
     106,   106,   107,   107,   108,   109,   109,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   119,
     120,   120,   121,   122,   122,   123,   123,   124,   124,   124,
     125,   126,   126,   127,   128,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   136,   136,   136,   136,   137,   137,   138,   138,
     139,   139,   139,   139,   140,   141,   141
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     5,     0,     1,     2,     3,     2,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     5,     6,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     4,     4,
       8,     6,     9,     4,     4,     9,    10,    13,    14,    14,
      15,     9,     9,    11,    11,    17,    17,    12,     1,     2,
       8,     6,     0,     3,     3,    12,    10,     5,     9,    13,
       1,     1,     0,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     2,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     2,     2,     0,     4,     2,     6,     1,     5,    11,
       3,     1,     2,     3,     5,     1,     5,     1,     5,     5,
       2,     3,     5,     0,     2,     0,     2,     1,     1,     1,
       0,     2,     4,    13,    11,     3,     1,     3,     0,     2,
       8,    12,    10,    13,     9,     2,     6
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

#line 1676 "parser.tab.c"

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

#line 349 "../parser.y"

{/*Секция пользовательского кода*/}
