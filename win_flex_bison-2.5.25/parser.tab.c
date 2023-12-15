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
    INCREMENT = 279,               /* INCREMENT  */
    DECREMENT = 280,               /* DECREMENT  */
    LET = 281,                     /* LET  */
    CONST = 282,                   /* CONST  */
    FUNC = 283,                    /* FUNC  */
    DECLARE = 284,                 /* DECLARE  */
    UNKNOWN = 285,                 /* UNKNOWN  */
    ANY = 286,                     /* ANY  */
    NUMBER = 287,                  /* NUMBER  */
    STRING = 288,                  /* STRING  */
    VOID = 289,                    /* VOID  */
    BOOLEAN = 290,                 /* BOOLEAN  */
    ENUM = 291,                    /* ENUM  */
    NUMBER_LITERAL = 292,          /* NUMBER_LITERAL  */
    STRING_LITERAL = 293,          /* STRING_LITERAL  */
    TRUE_LITERAL = 294,            /* TRUE_LITERAL  */
    FALSE_LITERAL = 295,           /* FALSE_LITERAL  */
    ID = 296,                      /* ID  */
    ENDL = 297,                    /* ENDL  */
    PLUS_ASSIGN = 298,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 299,            /* MINUS_ASSIGN  */
    MUL_ASSIGN = 300,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 301,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 302,              /* MOD_ASSIGN  */
    OR = 303,                      /* OR  */
    AND = 304,                     /* AND  */
    EQUALS = 305,                  /* EQUALS  */
    NOT_EQUALS = 306,              /* NOT_EQUALS  */
    LESS_OR_EQUAL = 307,           /* LESS_OR_EQUAL  */
    GREATER_OR_EQUAL = 308,        /* GREATER_OR_EQUAL  */
    IS = 309,                      /* IS  */
    AS = 310,                      /* AS  */
    NEW = 311,                     /* NEW  */
    PREF_INCREMENT = 312,          /* PREF_INCREMENT  */
    PREF_DECREMENT = 313,          /* PREF_DECREMENT  */
    POST_INCREMENT = 314,          /* POST_INCREMENT  */
    POST_DECREMENT = 315,          /* POST_DECREMENT  */
    NOT = 316,                     /* NOT  */
    UPLUS = 317,                   /* UPLUS  */
    UMINUS = 318                   /* UMINUS  */
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

#line 192 "parser.tab.c"

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
  YYSYMBOL_INCREMENT = 24,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 25,                 /* DECREMENT  */
  YYSYMBOL_LET = 26,                       /* LET  */
  YYSYMBOL_CONST = 27,                     /* CONST  */
  YYSYMBOL_FUNC = 28,                      /* FUNC  */
  YYSYMBOL_DECLARE = 29,                   /* DECLARE  */
  YYSYMBOL_UNKNOWN = 30,                   /* UNKNOWN  */
  YYSYMBOL_ANY = 31,                       /* ANY  */
  YYSYMBOL_NUMBER = 32,                    /* NUMBER  */
  YYSYMBOL_STRING = 33,                    /* STRING  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_BOOLEAN = 35,                   /* BOOLEAN  */
  YYSYMBOL_ENUM = 36,                      /* ENUM  */
  YYSYMBOL_NUMBER_LITERAL = 37,            /* NUMBER_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 38,            /* STRING_LITERAL  */
  YYSYMBOL_TRUE_LITERAL = 39,              /* TRUE_LITERAL  */
  YYSYMBOL_FALSE_LITERAL = 40,             /* FALSE_LITERAL  */
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_ENDL = 43,                      /* ENDL  */
  YYSYMBOL_44_ = 44,                       /* '='  */
  YYSYMBOL_PLUS_ASSIGN = 45,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 46,              /* MINUS_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 47,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 48,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 49,                /* MOD_ASSIGN  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* '?'  */
  YYSYMBOL_53_ = 53,                       /* ':'  */
  YYSYMBOL_OR = 54,                        /* OR  */
  YYSYMBOL_AND = 55,                       /* AND  */
  YYSYMBOL_EQUALS = 56,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUALS = 57,                /* NOT_EQUALS  */
  YYSYMBOL_58_ = 58,                       /* '<'  */
  YYSYMBOL_59_ = 59,                       /* '>'  */
  YYSYMBOL_LESS_OR_EQUAL = 60,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 61,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_IS = 62,                        /* IS  */
  YYSYMBOL_AS = 63,                        /* AS  */
  YYSYMBOL_64_ = 64,                       /* '+'  */
  YYSYMBOL_65_ = 65,                       /* '-'  */
  YYSYMBOL_66_ = 66,                       /* '*'  */
  YYSYMBOL_67_ = 67,                       /* '/'  */
  YYSYMBOL_68_ = 68,                       /* '%'  */
  YYSYMBOL_NEW = 69,                       /* NEW  */
  YYSYMBOL_PREF_INCREMENT = 70,            /* PREF_INCREMENT  */
  YYSYMBOL_PREF_DECREMENT = 71,            /* PREF_DECREMENT  */
  YYSYMBOL_POST_INCREMENT = 72,            /* POST_INCREMENT  */
  YYSYMBOL_POST_DECREMENT = 73,            /* POST_DECREMENT  */
  YYSYMBOL_NOT = 74,                       /* NOT  */
  YYSYMBOL_UPLUS = 75,                     /* UPLUS  */
  YYSYMBOL_UMINUS = 76,                    /* UMINUS  */
  YYSYMBOL_77_ = 77,                       /* '.'  */
  YYSYMBOL_78_ = 78,                       /* ')'  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* '{'  */
  YYSYMBOL_82_ = 82,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_program = 84,                   /* program  */
  YYSYMBOL_program_elem = 85,              /* program_elem  */
  YYSYMBOL_endl = 86,                      /* endl  */
  YYSYMBOL_endl_opt = 87,                  /* endl_opt  */
  YYSYMBOL_stmt_sep = 88,                  /* stmt_sep  */
  YYSYMBOL_expr_list = 89,                 /* expr_list  */
  YYSYMBOL_expr_list_opt = 90,             /* expr_list_opt  */
  YYSYMBOL_expr = 91,                      /* expr  */
  YYSYMBOL_block_statement = 92,           /* block_statement  */
  YYSYMBOL_if_stmt = 93,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 94,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 95,             /* do_while_stmt  */
  YYSYMBOL_for_stmt = 96,                  /* for_stmt  */
  YYSYMBOL_switch_stmt = 97,               /* switch_stmt  */
  YYSYMBOL_case_list = 98,                 /* case_list  */
  YYSYMBOL_case_stmt = 99,                 /* case_stmt  */
  YYSYMBOL_break_opt = 100,                /* break_opt  */
  YYSYMBOL_return_statement = 101,         /* return_statement  */
  YYSYMBOL_function_declaration = 102,     /* function_declaration  */
  YYSYMBOL_try_catch_block = 103,          /* try_catch_block  */
  YYSYMBOL_catch_clause = 104,             /* catch_clause  */
  YYSYMBOL_error_type = 105,               /* error_type  */
  YYSYMBOL_stmt_list_opt = 106,            /* stmt_list_opt  */
  YYSYMBOL_stmt_list = 107,                /* stmt_list  */
  YYSYMBOL_stmt = 108,                     /* stmt  */
  YYSYMBOL_modifier = 109,                 /* modifier  */
  YYSYMBOL_type = 110,                     /* type  */
  YYSYMBOL_type_mark = 111,                /* type_mark  */
  YYSYMBOL_variable = 112,                 /* variable  */
  YYSYMBOL_var_init = 113,                 /* var_init  */
  YYSYMBOL_var_list = 114,                 /* var_list  */
  YYSYMBOL_dimensions = 115,               /* dimensions  */
  YYSYMBOL_dimensions_list = 116,          /* dimensions_list  */
  YYSYMBOL_param = 117,                    /* param  */
  YYSYMBOL_param_list = 118,               /* param_list  */
  YYSYMBOL_param_list_0_or_more = 119,     /* param_list_0_or_more  */
  YYSYMBOL_enum_declaration = 120,         /* enum_declaration  */
  YYSYMBOL_id_list_init = 121,             /* id_list_init  */
  YYSYMBOL_id_list = 122                   /* id_list  */
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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   759

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
       2,     2,     2,     2,     2,     2,     2,    68,     2,     2,
      80,    78,    66,    64,    79,    65,    77,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    42,
      58,    44,    59,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    43,    45,    46,
      47,    48,    49,    54,    55,    56,    57,    60,    61,    62,
      63,    69,    70,    71,    72,    73,    74,    75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    85,    85,    86,    89,    90,    93,    94,    97,    98,
     101,   102,   105,   106,   109,   110,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   150,   152,   153,   156,   159,   162,   165,   168,   169,
     172,   173,   176,   177,   180,   183,   184,   187,   190,   191,
     194,   195,   198,   199,   202,   203,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     222,   223,   226,   227,   228,   229,   230,   231,   232,   235,
     238,   239,   240,   241,   242,   245,   248,   249,   250,   251,
     252,   255,   258,   259,   262,   263,   266,   267,   270,   271,
     274,   275,   280,   281,   284,   285
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
  "SWITCH", "CASE", "TRY", "CATCH", "INCREMENT", "DECREMENT", "LET",
  "CONST", "FUNC", "DECLARE", "UNKNOWN", "ANY", "NUMBER", "STRING", "VOID",
  "BOOLEAN", "ENUM", "NUMBER_LITERAL", "STRING_LITERAL", "TRUE_LITERAL",
  "FALSE_LITERAL", "ID", "';'", "ENDL", "'='", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "'['", "']'",
  "'?'", "':'", "OR", "AND", "EQUALS", "NOT_EQUALS", "'<'", "'>'",
  "LESS_OR_EQUAL", "GREATER_OR_EQUAL", "IS", "AS", "'+'", "'-'", "'*'",
  "'/'", "'%'", "NEW", "PREF_INCREMENT", "PREF_DECREMENT",
  "POST_INCREMENT", "POST_DECREMENT", "NOT", "UPLUS", "UMINUS", "'.'",
  "')'", "','", "'('", "'{'", "'}'", "$accept", "program", "program_elem",
  "endl", "endl_opt", "stmt_sep", "expr_list", "expr_list_opt", "expr",
  "block_statement", "if_stmt", "while_stmt", "do_while_stmt", "for_stmt",
  "switch_stmt", "case_list", "case_stmt", "break_opt", "return_statement",
  "function_declaration", "try_catch_block", "catch_clause", "error_type",
  "stmt_list_opt", "stmt_list", "stmt", "modifier", "type", "type_mark",
  "variable", "var_init", "var_list", "dimensions", "dimensions_list",
  "param", "param_list", "param_list_0_or_more", "enum_declaration",
  "id_list_init", "id_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-110)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     477,    83,   -13,   -13,   -13,   -13,   -13,   -13,  -246,  -246,
     -13,   -13,  -246,  -246,  -246,  -246,  -246,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   396,  -246,   625,   -13,  -246,
    -246,     0,  -246,  -246,  -246,  -246,  -246,  -246,   -13,  -246,
     625,  -246,    -5,   550,    28,    35,    45,    65,    68,    16,
     105,  -246,    83,    83,    83,    83,    83,    83,   550,  -246,
    -246,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,  -246,  -246,    -5,  -246,  -246,  -246,
     115,  -246,  -246,   142,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,  -246,  -246,    14,    14,  -246,   588,    77,   550,  -246,
      -5,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,   109,    83,    83,
      83,    83,    83,     0,     0,     0,   -13,    83,    83,    83,
      83,   139,    90,    96,  -246,  -246,  -246,   686,   686,   686,
     686,   686,   686,   656,   656,   465,   108,   137,   137,   137,
     137,   137,   137,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,    39,    39,    14,    14,    14,    56,    57,  -246,    99,
    -246,   100,  -246,   111,   656,   656,   656,   656,   -13,  -246,
      11,   -13,   -13,   136,   144,   -13,   -13,   -13,    -3,  -246,
     -13,   -13,   -13,   114,   164,   129,   130,   132,  -246,   172,
     -46,   173,  -246,   -13,    83,   109,   175,   -13,   176,  -246,
      -3,   178,   180,    83,   -13,   -13,   -13,   -13,   -13,   -13,
    -246,   -13,   -13,   -13,    40,   -13,   -13,    83,   686,  -246,
       3,  -246,   166,  -246,   184,  -246,     9,  -246,   -13,  -246,
     656,   550,    83,   550,   154,   195,    50,    51,   550,   156,
     176,   -24,   -23,   385,   -16,  -246,   -13,   160,   227,   656,
    -246,   -13,   -13,   -13,  -246,  -246,   -13,   158,   -13,  -246,
     -13,  -246,   -13,  -246,   191,  -246,   -13,   200,    13,   -28,
     190,   172,  -246,   550,   203,   204,   -13,   550,   -13,   -13,
     -13,     8,  -246,   -13,   -13,  -246,  -246,   165,   -13,  -246,
      83,  -246,    83,   193,    83,   -13,  -246,   107,    68,  -246,
     176,   -13,   198,   686,   656,   -13,   656,  -246,  -246,  -246,
     -13,   -13,  -246,   171,  -246,   174,   550,   201,   177,  -246,
     -13,   -13,   234,   -13,   -13,    83,   550,     0,  -246,   550,
      68,   686,  -246,  -246,   234,   -13,  -246,  -246
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     8,     8,     8,     8,     8,     8,    90,    91,
       8,     8,    23,    24,    25,    26,    27,     8,     8,     8,
       8,     8,     8,     8,     8,     0,     2,     0,     8,    77,
      78,     0,    79,    81,    88,     5,    82,     4,     8,    87,
       0,     6,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    72,     1,
       3,     0,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,    18,    16,    11,    76,    83,    80,
       0,    64,     7,     0,     8,     8,     8,     8,     8,     8,
       8,    22,    21,    19,    17,    46,     0,     0,    73,    74,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     8,     8,     8,     0,     0,     0,
       0,     0,     0,     0,    28,    51,    75,    40,    41,    42,
      43,    44,    45,     8,     8,    48,    47,    38,    39,    34,
      35,    36,    37,    96,    95,    92,    93,    97,    94,    98,
      20,    29,    30,    31,    32,    33,    11,     0,    85,     0,
      84,     0,    86,     0,     8,     8,     8,     8,     8,    67,
       8,     8,     8,     0,     0,     8,     8,     8,   101,   102,
       8,     8,     8,     0,     0,     0,     0,     0,   119,     0,
       0,     0,    50,     8,     0,     0,     0,     8,     0,   112,
     103,     0,     0,     0,     8,     8,     8,     8,     8,     8,
     116,     8,     8,     8,   124,     8,     8,     0,   105,    99,
       8,   107,     0,   100,     0,   113,     8,   106,     8,   110,
       8,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,    49,     0,   111,     8,     0,    52,     8,
      54,     8,     8,     8,   114,   118,     8,     0,     8,   122,
       8,   121,     8,   120,     0,    55,     8,     0,     0,     0,
       0,     0,    66,    72,     0,     0,     8,     0,     8,     8,
       8,     0,    58,     8,     8,   115,   117,     0,     8,   125,
      14,    53,     0,     0,     0,     8,    59,     0,     0,    65,
       0,     8,     0,    12,     8,     8,     8,    57,    70,    71,
       8,     8,   123,    15,   104,     0,    72,     0,     0,    68,
       8,     8,    62,     8,     8,     0,     0,     0,    61,    72,
       0,    13,    56,    63,    62,     8,    60,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   228,   -17,    -2,    -7,  -246,  -246,   255,   -36,
    -246,  -246,  -246,  -246,  -246,  -246,   -43,   -94,  -246,  -246,
    -246,  -246,  -246,  -245,  -246,     6,  -246,    46,  -171,   -61,
    -207,  -246,    42,  -246,   -26,  -246,  -246,  -246,  -246,  -246
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    26,    42,   264,    87,   321,   322,    27,    28,
      29,    30,    31,    32,    33,   301,   302,   348,    34,    35,
      36,   189,   330,   107,   108,   109,    38,   170,   198,   134,
     199,   135,   219,   220,   230,   231,   191,    39,   235,   236
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    44,    45,    46,    47,    48,    37,   196,    49,    50,
      86,   243,    98,   277,    86,    51,    52,    53,    54,    55,
      56,    57,    58,    86,    89,   303,    88,   299,   195,   300,
      41,    37,   299,    91,   300,   232,    90,   196,    92,   233,
      41,    -8,    61,    41,   110,  -109,    41,   217,   307,    93,
     304,  -108,    41,   279,    41,   280,   282,    99,   281,   283,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,  -109,    41,    -8,   274,    84,    85,  -108,   208,
     315,   342,   137,   138,   139,   140,   141,   142,   143,    92,
      -9,   195,   273,   196,   354,    81,    82,    83,    94,    -9,
     196,    84,    85,   332,   146,    95,   176,   176,   176,   305,
      12,    13,    14,    15,    16,    96,   178,   180,   182,   275,
     276,   177,   179,   181,   183,    -9,   197,   328,   329,   163,
     164,   165,   166,   167,   168,    97,   100,    18,    19,    24,
     169,   193,   194,    20,    21,   241,   133,    22,   136,   145,
     247,   249,   188,    23,    72,    73,    74,    75,    76,    77,
     190,    78,    79,    80,    81,    82,    83,   192,   200,   201,
      84,    85,   203,   204,   205,   206,   207,   212,   209,   210,
     211,   202,   224,   214,   215,   216,   218,   213,   221,   222,
     223,    79,    80,    81,    82,    83,   225,   226,   227,    84,
      85,   237,   228,   229,   234,   242,   240,   265,   244,   246,
     195,   248,   251,   252,   253,   254,   255,   256,   266,   257,
     258,   259,   260,   261,   262,   271,   272,   278,   285,   286,
     292,   296,   298,   196,   308,   309,   325,   319,   267,   334,
     340,   347,   341,    60,   343,   344,    40,   268,   316,   270,
     356,   239,   245,     0,   284,   306,     0,   287,     0,   288,
     289,   290,     0,     0,   291,     0,   293,     0,   294,     0,
     295,     0,   331,     0,   297,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   310,     0,   312,   313,   314,     0,
       0,   317,   318,   311,     0,     0,   320,   101,   102,   103,
     104,   105,   106,   327,   355,     0,     0,     0,     0,   333,
       0,     0,   335,   336,   337,     0,     0,     0,   338,   339,
      86,     0,     0,     0,     0,     0,     0,     0,   345,   346,
     353,   349,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,   171,   172,   173,   174,   175,     0,     0,
       0,     0,   184,   185,   186,   187,    59,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     4,
       0,     0,     5,     0,     0,     0,     6,     0,     7,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     0,    84,    85,     0,
      18,    19,     0,     0,     0,     0,    20,    21,     0,   238,
      22,     0,     0,     0,     0,     0,    23,    24,   250,     0,
       1,     0,     0,     0,     0,     0,     0,     2,     3,     0,
       4,     0,   263,     5,     0,     0,     0,     6,     0,     7,
       0,     0,     0,     8,     9,    10,     0,   269,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     0,    84,    85,     0,
       0,    18,    19,     0,     0,     0,     0,    20,    21,     0,
       0,    22,     0,     1,     0,     0,     0,    23,    24,     0,
       2,     3,     0,     4,     0,   323,     5,   324,     0,   326,
       6,     0,     7,     0,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,     0,     0,     0,     0,
      20,    21,     0,     0,    22,     0,     0,     0,     0,     0,
      23,    24,    62,    63,    64,    65,    66,    67,    68,     0,
      69,     0,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,    80,    81,    82,    83,     0,     0,     0,
      84,    85,     0,     0,     0,     0,   144,    61,    41,    62,
      63,    64,    65,    66,    67,    68,     0,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     0,    84,    85,    41,
      62,    63,    64,    65,    66,    67,    68,     0,    69,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    78,
      79,    80,    81,    82,    83,     0,     0,     0,    84,    85,
      62,    63,    64,    65,    66,    67,    68,     0,    69,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    78,
      79,    80,    81,    82,    83,     0,     0,     0,    84,    85
};

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     0,    53,    10,    11,
      27,   218,    48,   258,    31,    17,    18,    19,    20,    21,
      22,    23,    24,    40,    31,    53,    28,    19,    44,    21,
      43,    25,    19,    40,    21,    81,    38,    53,    43,   210,
      43,    44,    42,    43,    61,    42,    43,    50,   293,    43,
      78,    42,    43,   260,    43,    79,    79,    41,    82,    82,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    79,    43,    44,   256,    72,    73,    79,    78,
      82,   336,    94,    95,    96,    97,    98,    99,   100,    43,
      44,    44,    52,    53,   349,    66,    67,    68,    80,    53,
      53,    72,    73,   320,   108,    80,   133,   134,   135,   290,
      37,    38,    39,    40,    41,    80,   133,   134,   135,    78,
      79,   133,   134,   135,   136,    79,    79,    30,    31,    30,
      31,    32,    33,    34,    35,    80,    41,    64,    65,    81,
      41,   153,   154,    70,    71,   216,    41,    74,    16,    82,
     221,   222,    23,    80,    56,    57,    58,    59,    60,    61,
      80,    63,    64,    65,    66,    67,    68,    81,    79,    79,
      72,    73,   184,   185,   186,   187,   188,    51,   190,   191,
     192,    80,    78,   195,   196,   197,   198,    53,   200,   201,
     202,    64,    65,    66,    67,    68,    42,    78,    78,    72,
      73,   213,    80,    41,    41,   217,    41,    51,   220,    41,
      44,    41,   224,   225,   226,   227,   228,   229,    44,   231,
     232,   233,   234,   235,   236,    81,    41,    81,    78,    12,
      82,    50,    42,    53,    41,    41,    53,    82,   250,    51,
      79,    17,    78,    25,    53,    78,     1,   251,   301,   253,
     354,   215,   220,    -1,   266,   291,    -1,   269,    -1,   271,
     272,   273,    -1,    -1,   276,    -1,   278,    -1,   280,    -1,
     282,    -1,   318,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,    -1,   298,   299,   300,    -1,
      -1,   303,   304,   297,    -1,    -1,   308,    52,    53,    54,
      55,    56,    57,   315,   350,    -1,    -1,    -1,    -1,   321,
      -1,    -1,   324,   325,   326,    -1,    -1,    -1,   330,   331,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
     347,   343,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,     0,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    22,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    72,    73,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    -1,   214,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,   223,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,
      13,    -1,   237,    16,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    26,    27,    28,    -1,   252,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    72,    73,    -1,
      -1,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    74,    -1,     3,    -1,    -1,    -1,    80,    81,    -1,
      10,    11,    -1,    13,    -1,   310,    16,   312,    -1,   314,
      20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    72,    73,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    72,    73,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    72,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    10,    11,    13,    16,    20,    22,    26,    27,
      28,    36,    37,    38,    39,    40,    41,    42,    64,    65,
      70,    71,    74,    80,    81,    84,    85,    91,    92,    93,
      94,    95,    96,    97,   101,   102,   103,   108,   109,   120,
      91,    43,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,     0,
      85,    42,    44,    45,    46,    47,    48,    49,    50,    52,
      54,    55,    56,    57,    58,    59,    60,    61,    63,    64,
      65,    66,    67,    68,    72,    73,    86,    88,    87,    88,
      87,    88,    43,   108,    80,    80,    80,    80,    92,    41,
      41,    91,    91,    91,    91,    91,    91,   106,   107,   108,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    41,   112,   114,    16,    87,    87,    87,
      87,    87,    87,    87,    78,    82,   108,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    30,    31,    32,    33,    34,    35,    41,
     110,    91,    91,    91,    91,    91,    86,    87,    88,    87,
      88,    87,    88,    87,    91,    91,    91,    91,    23,   104,
      80,   119,    81,    87,    87,    44,    53,    79,   111,   113,
      79,    79,    80,    87,    87,    87,    87,    87,    78,    87,
      87,    87,    51,    53,    87,    87,    87,    50,    87,   115,
     116,    87,    87,    87,    78,    42,    78,    78,    80,    41,
     117,   118,    81,   111,    41,   121,   122,    87,    91,   110,
      41,   112,    87,   113,    87,   115,    41,   112,    41,   112,
      91,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    91,    87,    51,    44,    87,   108,    91,
     108,    81,    41,    52,   111,    78,    79,   106,    81,   113,
      79,    82,    79,    82,    87,    78,    12,    87,    87,    87,
      87,    87,    82,    87,    87,    87,    50,    87,    42,    19,
      21,    98,    99,    53,    78,   111,   117,   106,    41,    41,
      87,   108,    87,    87,    87,    82,    99,    87,    87,    82,
      87,    89,    90,    91,    91,    53,    91,    87,    30,    31,
     105,    92,   113,    87,    51,    87,    87,    87,    87,    87,
      79,    78,   106,    53,    78,    87,    87,    17,   100,    87,
      87,    91,   108,    88,   106,    92,   100,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    93,    93,    94,    95,    96,    97,    98,    98,
      99,    99,   100,   100,   101,   102,   102,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   111,
     112,   112,   112,   112,   112,   113,   114,   114,   114,   114,
     114,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     0,     1,
       2,     1,     1,     5,     0,     2,     2,     3,     2,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     4,     4,     8,
       6,     4,     9,    12,     9,    10,    17,    13,     1,     2,
       8,     6,     0,     2,     3,    12,    10,     5,    10,    14,
       1,     1,     0,     1,     1,     2,     2,     1,     1,     1,
       2,     1,     1,     2,     4,     4,     4,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     3,     3,     4,    11,     3,     5,     5,     5,     5,
       5,     3,     1,     2,     3,     5,     1,     5,     5,     2,
       9,     9,     3,     7,     1,     5
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

#line 1599 "parser.tab.c"

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

#line 289 "../parser.y"

{/*Секция пользовательского кода*/}
