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
  YYSYMBOL_OR = 61,                        /* OR  */
  YYSYMBOL_AND = 62,                       /* AND  */
  YYSYMBOL_EQUALS = 63,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 64,                /* NOT_EQUALS  */
  YYSYMBOL_65_ = 65,                       /* '<'  */
  YYSYMBOL_66_ = 66,                       /* '>'  */
  YYSYMBOL_LESS_OR_EQUAL = 67,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 68,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_IS = 69,                        /* IS  */
  YYSYMBOL_AS = 70,                        /* AS  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '-'  */
  YYSYMBOL_73_ = 73,                       /* '*'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_PREF_INCREMENT = 76,            /* PREF_INCREMENT  */
  YYSYMBOL_PREF_DECREMENT = 77,            /* PREF_DECREMENT  */
  YYSYMBOL_POST_INCREMENT = 78,            /* POST_INCREMENT  */
  YYSYMBOL_POST_DECREMENT = 79,            /* POST_DECREMENT  */
  YYSYMBOL_NOT = 80,                       /* NOT  */
  YYSYMBOL_UPLUS = 81,                     /* UPLUS  */
  YYSYMBOL_UMINUS = 82,                    /* UMINUS  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* ')'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* '('  */
  YYSYMBOL_87_ = 87,                       /* ':'  */
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
  YYSYMBOL_extends_decl = 131,             /* extends_decl  */
  YYSYMBOL_implements_decl_opt = 132,      /* implements_decl_opt  */
  YYSYMBOL_implements_decl = 133,          /* implements_decl  */
  YYSYMBOL_property_modifier = 134,        /* property_modifier  */
  YYSYMBOL_visibility = 135,               /* visibility  */
  YYSYMBOL_class_member = 136,             /* class_member  */
  YYSYMBOL_class_visibility_member = 137,  /* class_visibility_member  */
  YYSYMBOL_class_visibility_member_list = 138, /* class_visibility_member_list  */
  YYSYMBOL_class_body = 139,               /* class_body  */
  YYSYMBOL_class_declaration = 140,        /* class_declaration  */
  YYSYMBOL_enum_declaration = 141,         /* enum_declaration  */
  YYSYMBOL_id_list = 142                   /* id_list  */
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
#define YYLAST   729

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  437

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
       2,     2,     2,     2,     2,     2,     2,    75,     2,     2,
      86,    84,    73,    71,    85,    72,    83,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    50,
      65,    52,    66,    60,     2,     2,     2,     2,     2,     2,
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
      57,    61,    62,    63,    64,    67,    68,    69,    70,    76,
      77,    78,    79,    80,    81,    82
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
     190,   191,   192,   193,   196,   197,   200,   203,   204,   207,
     210,   211,   214,   215,   218,   219,   222,   223,   224,   225,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   241,   244,   245,   248,   249,   250,   251,   252,   253,
     254,   257,   260,   261,   264,   267,   268,   271,   272,   275,
     276,   277,   280,   283,   284,   287,   290,   293,   294,   295,
     296,   299,   300,   303,   304,   307,   308,   311,   312,   315,
     316,   317,   318,   319,   320,   323,   324,   325,   328,   329,
     330,   333,   334,   337,   338,   341,   342,   345,   348,   351,
     352
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
  "MOD_ASSIGN", "'['", "']'", "'?'", "OR", "AND", "EQUALS", "NOT_EQUALS",
  "'<'", "'>'", "LESS_OR_EQUAL", "GREATER_OR_EQUAL", "IS", "AS", "'+'",
  "'-'", "'*'", "'/'", "'%'", "PREF_INCREMENT", "PREF_DECREMENT",
  "POST_INCREMENT", "POST_DECREMENT", "NOT", "UPLUS", "UMINUS", "'.'",
  "')'", "','", "'('", "':'", "'{'", "'}'", "$accept", "program",
  "program_elem", "endl", "endl_opt", "stmt_sep", "expr_list",
  "expr_list_opt", "expr", "block_statement", "if_stmt", "while_stmt",
  "do_while_stmt", "for_stmt", "switch_stmt", "case_list", "case_stmt",
  "break_opt", "return_statement", "function_declaration",
  "try_catch_block", "catch_clause", "error_type", "stmt_list_opt",
  "stmt_list", "stmt", "empty_stmt", "modifier", "type", "type_mark",
  "type_mark_opt", "variable", "var_init_opt", "var_list",
  "var_declaration", "dimensions", "dimensions_list", "param",
  "optional_param", "param_list", "param_list_0_or_more", "extends_decl",
  "implements_decl_opt", "implements_decl", "property_modifier",
  "visibility", "class_member", "class_visibility_member",
  "class_visibility_member_list", "class_body", "class_declaration",
  "enum_declaration", "id_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-327)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-157)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,   -25,   -25,   147,  -327,  -327,  -327,  -327,   -11,     7,
      37,  -327,  -327,  -327,   -25,   -25,    90,    29,   -25,   -25,
       1,   -25,    97,   153,  -327,   123,    63,  -327,   -25,   -25,
     -39,   -25,  -327,  -327,   -25,   -25,   -25,   -25,   137,   106,
     115,    11,    77,    62,   487,   114,  -327,   -25,   -25,   -25,
    -327,  -327,   -25,  -327,  -327,  -327,  -327,  -327,  -327,  -327,
    -327,   359,   -25,   -25,   -25,   -25,   -25,   -25,  -327,  -327,
     -25,  -327,  -327,  -327,  -327,   -31,  -327,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   558,  -327,  -327,  -327,   139,  -327,
    -327,  -327,  -327,   -25,   180,  -327,  -327,    65,   139,  -327,
     -25,    74,   158,   122,   123,   558,   487,   127,   130,   131,
     133,   135,   184,   -25,   359,   359,   359,   359,   359,   359,
     359,   487,  -327,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,  -327,  -327,   -25,   -11,  -327,  -327,
     150,  -327,  -327,  -327,   -25,   194,  -327,   487,  -327,  -327,
    -327,  -327,  -327,  -327,   359,    58,  -327,  -327,   -46,   -25,
    -327,  -327,  -327,  -327,  -327,  -327,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,    62,   -27,   160,   646,   162,   162,
      76,    76,   162,   614,   161,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   200,  -327,   122,   -25,
     145,   155,   -25,   614,   236,  -327,    74,    74,   169,   231,
     235,   359,   359,   359,   359,   230,   176,  -327,   185,  -327,
     181,  -327,   646,   646,   646,   646,   646,   646,   614,   614,
     477,   517,   163,   163,   163,   163,   163,   163,   228,   228,
      76,    76,    76,   -44,   -26,   122,   217,  -327,   186,   183,
     139,  -327,    96,  -327,  -327,  -327,   -25,   -25,   614,   614,
     614,   614,   -25,  -327,   -25,   -25,  -327,   214,   187,   201,
     -25,   232,  -327,   -26,  -327,  -327,   -25,   -25,  -327,  -327,
     205,   207,   202,   247,   215,   216,   218,   256,   359,  -327,
     -25,   -25,   249,   232,   260,  -327,   359,   194,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   145,   -25,   646,   359,   359,
    -327,   -25,   646,   145,   359,   359,    72,   359,   487,   226,
     266,  -327,   -35,   646,   -25,   258,  -327,   614,   614,   558,
     309,   614,  -327,  -327,   -25,   -25,   -25,  -327,   248,   -25,
     250,   252,   309,   313,   287,   166,    82,   291,  -327,   359,
    -327,  -327,   321,   -25,   -25,   -25,   -25,   136,  -327,   -25,
     -25,   145,   -25,   -25,    72,   359,   255,   359,   259,  -327,
     135,   173,  -327,   286,    72,   558,  -327,   614,   -25,   614,
    -327,  -327,  -327,  -327,   -25,  -327,   558,  -327,  -327,   267,
     487,   265,   272,  -327,   -25,   -25,   -25,   -25,   -25,   487,
     335,   335,   487,   135,  -327,  -327,   139,  -327,  -327,   -25,
     -25,  -327,  -327,   335,   335,  -327,  -327
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     8,     0,     2,     5,     4,     6,     9,     0,
       0,     1,     3,     7,     8,     8,   133,     0,     8,     8,
       8,     8,     0,   135,   132,     0,     0,   134,     8,     8,
       8,     8,   127,   129,     8,     8,     8,     8,     0,     0,
       0,     0,     0,     0,    84,     0,   137,     8,     8,     8,
     125,   131,     8,   108,   107,   104,   105,   109,   106,   110,
     111,     0,     8,     8,     8,     8,     8,     8,   102,   103,
       8,    23,    24,    25,    26,    27,   101,     8,     8,     8,
       8,     8,     8,     8,     0,    97,    91,    92,     0,    93,
      95,   100,    96,     8,     8,    86,    87,     0,     0,    99,
       8,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,    14,     0,     0,     0,     0,     0,
       0,    84,    10,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,    18,    16,     8,    11,    90,    94,
       0,    85,    88,    89,     8,     0,    98,    84,   143,   147,
     146,   145,   141,   149,     0,   139,   151,   153,     8,     8,
     150,   138,   126,   128,   130,    76,     8,     8,     8,     8,
       8,     8,     8,     8,     0,    15,     0,    12,    22,    21,
      19,    17,    47,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     8,
     115,     8,     8,     8,   142,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    29,
       0,    54,    41,    42,    43,    44,    45,    46,     8,     8,
      49,    48,    39,    40,    35,    36,    37,    38,    30,    31,
      32,    33,    34,    53,     0,   112,     0,   117,     0,     0,
       0,   144,   139,   152,   154,   157,     8,     8,     8,     8,
       8,     8,     8,    79,     8,     8,    28,     0,     0,     0,
       8,     0,   123,     8,   113,   114,     8,     8,    77,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       8,     8,     0,   120,     0,   124,     0,     0,     8,     8,
       8,     8,     8,     8,     8,   115,     8,    13,     0,    14,
     122,     8,   116,   115,     0,     0,     0,     0,     0,     0,
       0,   159,     0,    50,     8,     0,   118,     8,     8,     0,
      55,     8,    61,    62,     8,     8,     8,   158,     0,     8,
       0,     0,    56,     0,     0,     0,     0,     0,    52,    14,
      63,    64,     0,     8,     8,     8,     8,     8,    68,     8,
       8,   115,     8,     8,     0,     0,     0,     0,     0,    69,
       0,     0,   160,     0,     0,     0,    57,     8,     8,     8,
      67,    80,    82,    83,     8,   121,     0,    59,    58,     0,
       0,     0,     0,    60,     8,     8,     8,     8,     8,     0,
      74,    74,     0,     0,    65,    66,     0,    72,    73,     8,
       8,    81,    75,    74,    74,    70,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -327,  -327,   360,   -82,    -1,   -67,  -327,  -325,   270,   -96,
    -327,  -327,  -327,  -327,  -327,  -327,   -15,  -326,  -327,   170,
    -327,  -327,  -327,  -112,  -327,   -84,   -53,  -327,   193,   -33,
    -327,    47,  -322,  -327,  -327,  -256,    79,   261,   263,  -327,
    -327,  -327,  -327,  -327,  -327,   142,   154,   144,  -327,  -327,
     171,  -327,  -327
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     8,   266,   148,   185,   186,    84,    85,
      86,    87,    88,    89,    90,   377,   378,   427,    91,   163,
      92,   283,   404,    93,    94,    95,    96,    97,    60,    37,
     295,   220,   267,   221,    98,   292,   293,    32,    33,    34,
      21,    19,    29,    30,   164,   165,   166,   167,   168,   169,
     170,    99,   326
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   147,   341,   344,     7,   147,     7,    50,   194,
     152,   346,     7,    16,    17,   182,   147,    22,    23,    25,
      26,   149,   176,   147,     7,     7,     7,    38,    39,    40,
      41,   156,   290,    42,    43,    44,    45,   315,   175,   113,
      13,   153,    -8,  -156,   382,   222,   101,   102,   103,  -136,
     356,   104,     7,   177,   357,   114,    14,   315,    -8,   392,
       1,   106,   107,   108,   109,   110,   111,    -8,   224,   112,
     172,    49,    -8,    -8,    -8,   225,   115,   116,   117,   118,
     119,   120,   121,     1,   158,    24,    15,     2,   159,   160,
     161,   162,   150,   151,    -8,   428,   155,    18,    35,   157,
      53,    54,    55,    56,    57,    58,   224,   435,   436,     7,
       2,    59,   184,   225,   154,    20,     7,    71,    72,    73,
      74,    75,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,    77,    78,   216,    27,    11,    79,    80,
      35,    36,    81,   218,   144,   145,     1,    28,    82,   146,
      83,    51,    52,   375,   226,   376,   379,   227,   228,   380,
       5,     6,    31,     5,     6,   229,   230,   231,   232,   233,
     234,   235,   236,     2,   238,   264,    46,     7,   147,   122,
       7,    61,   240,   375,    47,   376,     7,    -8,    62,    63,
      48,    64,   100,   299,    65,  -119,     7,   171,    66,    35,
      67,   402,   403,   178,    68,    69,   179,   180,   265,   181,
     268,   269,   270,    83,    70,    71,    72,    73,    74,    75,
      76,     7,   294,   183,   139,   140,   141,   142,   143,   217,
     350,   144,   145,   219,   239,   146,   146,   287,   288,   263,
     241,    77,    78,   271,   352,   276,    79,    80,   275,   277,
      81,   282,   289,   291,   284,   286,    82,   147,    83,   296,
     285,   297,   298,   309,   310,   300,   301,   302,   303,   304,
     305,   306,   362,   307,   308,   353,   320,   311,   396,   312,
     290,   318,   314,   319,   401,   316,   317,   321,   407,   322,
     323,   141,   142,   143,   324,   325,   144,   145,   330,   328,
     329,   146,   331,   147,   354,   355,   359,   334,   335,   336,
     337,   338,   339,   340,   147,   342,   415,   431,   408,    -8,
     345,   105,   368,   373,   370,   424,   371,   374,   429,   413,
     381,   383,   398,   358,   147,   405,   360,   361,   400,   363,
     364,   414,   417,   365,   366,   367,   418,   416,   369,   432,
     426,   372,   389,    12,   333,   173,   425,   174,   272,   430,
     313,   274,   384,   385,   386,   387,   388,   237,   390,   391,
     273,   393,   394,     0,   187,   188,   189,   190,   191,   192,
     193,     0,     0,     0,     0,     0,   409,   410,   411,     0,
       0,     0,     0,   412,    71,    72,    73,    74,    75,     0,
       0,     0,     0,   419,   420,   421,   422,   423,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   433,   434,
      77,    78,     0,     0,   223,    79,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,   278,   279,   280,   281,    62,    63,     0,    64,     0,
       0,    65,     0,     0,     0,    66,     0,    67,     0,     0,
       0,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,     0,   132,
     133,   134,   135,   136,   137,   138,     0,     0,   139,   140,
     141,   142,   143,     0,     0,   144,   145,     0,    77,    78,
     146,     0,     0,    79,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,    83,     0,     0,   327,     0,
     133,   134,   135,   136,   137,   138,   332,     0,   139,   140,
     141,   142,   143,     0,     0,   144,   145,     0,   343,   187,
     146,     0,     0,     0,   347,   348,   349,   351,   122,     7,
     123,   124,   125,   126,   127,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,   139,
     140,   141,   142,   143,     0,     0,   144,   145,     0,   187,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   397,     0,   399,     0,     0,
       0,     0,     0,     0,   406,     7,   123,   124,   125,   126,
     127,   128,   129,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     0,     0,   139,   140,   141,   142,   143,
       0,     0,   144,   145,     0,     0,     0,   146,   123,   124,
     125,   126,   127,   128,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,   139,   140,   141,
     142,   143,     0,     0,   144,   145,     0,     0,     0,   146
};

static const yytype_int16 yycheck[] =
{
       1,     2,    84,   325,   329,    51,    88,    51,    41,   121,
      94,   333,    51,    14,    15,   111,    98,    18,    19,    20,
      21,    88,   106,   105,    51,    51,    51,    28,    29,    30,
      31,    98,    58,    34,    35,    36,    37,   293,   105,    70,
      51,    94,    86,    89,   369,   157,    47,    48,    49,    88,
      85,    52,    51,   106,    89,    86,    49,   313,    85,   381,
       9,    62,    63,    64,    65,    66,    67,     9,    10,    70,
     103,    60,    14,    15,    16,    17,    77,    78,    79,    80,
      81,    82,    83,     9,    10,    84,    49,    36,    14,    15,
      16,    17,    93,    94,    36,   421,    97,     7,    87,   100,
      38,    39,    40,    41,    42,    43,    10,   433,   434,    51,
      36,    49,   113,    17,    49,    86,    51,    45,    46,    47,
      48,    49,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    71,    72,   146,    49,     0,    76,    77,
      87,    88,    80,   154,    78,    79,     9,     4,    86,    83,
      88,    84,    85,    27,   165,    29,    84,   168,   169,    87,
       0,     0,    49,     3,     3,   176,   177,   178,   179,   180,
     181,   182,   183,    36,   185,   218,    49,    51,   270,    50,
      51,    11,   193,    27,    88,    29,    51,    52,    18,    19,
      85,    21,    88,   270,    24,    50,    51,    49,    28,    87,
      30,    38,    39,    86,    34,    35,    86,    86,   219,    86,
     221,   222,   223,    88,    44,    45,    46,    47,    48,    49,
      50,    51,   265,    49,    71,    72,    73,    74,    75,    89,
     336,    78,    79,    49,    84,    83,    83,   248,   249,    49,
      89,    71,    72,    17,   338,    24,    76,    77,    89,    24,
      80,    31,   263,   264,    88,    84,    86,   349,    88,    52,
      85,    85,    89,    59,    87,   276,   277,   278,   279,   280,
     281,   282,   349,   284,   285,   338,    84,    86,   384,   290,
      58,    86,   293,    86,   390,   296,   297,    50,   394,    84,
      84,    73,    74,    75,    86,    49,    78,    79,    59,   310,
     311,    83,    52,   395,    88,    49,    58,   318,   319,   320,
     321,   322,   323,   324,   406,   326,   410,   423,   395,    20,
     331,    61,    84,    20,    84,   419,    84,    50,   422,   406,
      49,    20,    87,   344,   426,    59,   347,   348,    89,   350,
     351,    84,    87,   354,   355,   356,    84,   410,   359,   426,
      25,   362,   377,     3,   317,   104,   419,   104,   226,   422,
     291,   227,   373,   374,   375,   376,   377,   184,   379,   380,
     226,   382,   383,    -1,   114,   115,   116,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,   397,   398,   399,    -1,
      -1,    -1,    -1,   404,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,   414,   415,   416,   417,   418,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
      71,    72,    -1,    -1,   164,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,   231,   232,   233,   234,    18,    19,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    62,
      63,    64,    65,    66,    67,    68,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    78,    79,    -1,    71,    72,
      83,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    88,    -1,    -1,   308,    -1,
      63,    64,    65,    66,    67,    68,   316,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    78,    79,    -1,   328,   329,
      83,    -1,    -1,    -1,   334,   335,   336,   337,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    -1,    78,    79,    -1,   369,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,   385,    -1,   387,    -1,    -1,
      -1,    -1,    -1,    -1,   394,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    36,    91,    92,   109,   140,    51,    93,    94,
      94,     0,    92,    51,    49,    49,    94,    94,     7,   131,
      86,   130,    94,    94,    84,    94,    94,    49,     4,   132,
     133,    49,   127,   128,   129,    87,    88,   119,    94,    94,
      94,    94,    94,    94,    94,    94,    49,    88,    85,    60,
     119,    84,    85,    38,    39,    40,    41,    42,    43,    49,
     118,    11,    18,    19,    21,    24,    28,    30,    34,    35,
      44,    45,    46,    47,    48,    49,    50,    71,    72,    76,
      77,    80,    86,    88,    98,    99,   100,   101,   102,   103,
     104,   108,   110,   113,   114,   115,   116,   117,   124,   141,
      88,    94,    94,    94,    94,    98,    94,    94,    94,    94,
      94,    94,    94,    70,    86,    94,    94,    94,    94,    94,
      94,    94,    50,    52,    53,    54,    55,    56,    57,    58,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    71,
      72,    73,    74,    75,    78,    79,    83,    93,    95,    95,
      94,    94,   115,   116,    49,    94,    95,    94,    10,    14,
      15,    16,    17,   109,   134,   135,   136,   137,   138,   139,
     140,    49,   119,   127,   128,    95,   115,   116,    86,    86,
      86,    86,    99,    49,    94,    96,    97,    98,    98,    98,
      98,    98,    98,    98,   113,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    89,    94,    49,
     121,   123,   113,    98,    10,    17,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,   118,    94,    84,
      94,    89,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    49,   119,    94,    94,   122,    94,    94,
      94,    17,   135,   136,   137,    89,    24,    24,    98,    98,
      98,    98,    31,   111,    88,    85,    84,    94,    94,    94,
      58,    94,   125,   126,   119,   120,    52,    85,    89,    95,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    59,
      87,    86,    94,   126,    94,   125,    94,    94,    86,    86,
      84,    50,    84,    84,    86,    49,   142,    98,    94,    94,
      59,    52,    98,   121,    94,    94,    94,    94,    94,    94,
      94,   122,    94,    98,    97,    94,   122,    98,    98,    98,
      99,    98,   115,   116,    88,    49,    85,    89,    94,    58,
      94,    94,    95,    94,    94,    94,    94,    94,    84,    94,
      84,    84,    94,    20,    50,    27,    29,   105,   106,    84,
      87,    49,    97,    20,    94,    94,    94,    94,    94,   106,
      94,    94,   122,    94,    94,    98,    99,    98,    87,    98,
      89,    99,    38,    39,   112,    59,    98,    99,    95,    94,
      94,    94,    94,    95,    84,   115,   116,    87,    84,    94,
      94,    94,    94,    94,   115,   116,    25,   107,   107,   115,
     116,    99,    95,    94,    94,   107,   107
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
     106,   106,   106,   106,   107,   107,   108,   109,   109,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   120,   121,   122,   122,   123,   123,   124,
     124,   124,   125,   126,   126,   127,   128,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   141,   142,
     142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     5,     0,     1,     2,     3,     2,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     4,     4,
       8,     6,    10,     4,     4,     9,    10,    13,    14,    14,
      15,     9,     9,    11,    11,    17,    17,    13,     1,     2,
       9,     9,     7,     7,     0,     2,     3,    13,    11,     5,
       9,    13,     1,     1,     0,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     3,     0,     4,     2,     6,     3,
       6,    13,     3,     1,     2,     3,     5,     1,     5,     1,
       5,     5,     2,     0,     3,     0,     1,     3,     5,     1,
       2,     1,     2,     1,     3,     1,     1,     1,     4,     1,
       1,     1,     3,     1,     3,     0,     1,    13,     9,     2,
       6
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

#line 1668 "parser.tab.c"

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

#line 355 "../parser.y"

{/*Секция пользовательского кода*/}
