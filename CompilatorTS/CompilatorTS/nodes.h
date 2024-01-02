#pragma once
#include "stringBuffer.h"
#include "modifier_head.h"

/*------------------------------------ Expression -------------------------------------*/

/*! \brief Перечисление типов Expression. */
enum ExpressionType
{
    /// Префиксный инкремент.
    _PREF_INCREMENT,

    /// Префиксный декремент.
    _PREF_DECREMENT,

    /// Постфиксный инкремент.
    _POST_INCREMENT,

    /// Постфиксный декремент.
    _POST_DECREMENT,

    /// Унарный плюс.
    _UNARY_PLUS,

    /// Унарный минус.
    _UNARY_MINUS,

    /// Целочисленный литерал.
    _INT_LIT,

    /// Литерал вещественного числа с плавающей запятой.
    _FLOAT_LIT,

    /// Строковый литерал.
    _STRING_LIT,

    /// Булевый (логический) литерал.
    _BOOLEAN_LIT,

    /// Идентификатор.
    _IDENTIFIER,

    /// Выражение в круглых скобках.
    _BRACKETS,

    /// Выражение в квадратных скобках.
    _SQUARE_BRACKETS,

    /// Сложение.
    _PLUS,

    /// Вычитание.
    _MINUS,

    /// Деление.
    _DIV,

    /// Умножение.
    _MUL,

    /// Получение остатка от деления.
    _MOD,

    /// Сравнение "меньше".
    _LESS,

    /// Сравнение "больше".
    _GREAT,

    /// Сравнение "меньше или равно".
    _LESS_EQUAL,

    /// Сравнение "больше или равно".
    _GREAT_EQUAL,

    /// Сравнение "равно".
    _EQUAL,

    /// Сравнение "не равно".
    _NOT_EQUAL,

    /// Присваивание.
    _ASSIGNMENT,

    /// Сложение с присваиванием.
    _PLUS_ASSIGNMENT,

    /// Вычитание с присваиванием.
    _MINUS_ASSIGNMENT,

    /// Умножение с присваиванием.
    _MUL_ASSIGNMENT,

    /// Деление с присваиванием.
    _DIV_ASSIGNMENT,

    /// Взятие остатка с присваиванием.
    _MOD_ASSIGNMENT,

    /// Отрицание (Инверсия).
    _NOT,

    /// Доступ к члену массива.
    _ARRAY_ACCESS,

    /// Вызов функции.
    _FUNC_CALL,

    /// Дизъюнкция ("ИЛИ").
    _OR,

    /// Конъюнкция ("И").
    _AND,

    /// Тернарная операция (? :)
    _TERNARY,

    /// Оператор приведения типа (as)
    _AS_TYPE_CONVERSION

};

/*! \brief Структура узла Expression. */
struct ExpressionNode
{
    /// Идентификатор узла.
    int id;

    /// Целочисленное значение (только для целочисленных констант).
    int intValue;

    /// Логическое (булевое) значение (только для логических констант).
    int boolValue;

    /// Значение числа с плавающей запятой (только для контант типа FLOAT).
    float floatValue;

    /// Значение строкового литерала - строковый буффер (только для строковых литералов).
    struct stringBuffer *stringValue;

    /// Строка идентификатора (только для функций и переменных).
    char *identifierString;

    /// Тип обозреваемого Expression - вариант перечисления.
    enum ExpressionType type;

    /// Указатель на левый операнд бинарного Expression (для бинарных выражений).
    struct ExpressionNode *left;

    /// Указатель на правый операнд бинарного Expression (для бинарных выражений).
    struct ExpressionNode *right;

    /// Указатель на следующий Expression в списке ExpressionList (использовать при работе со списком Expression).
    struct ExpressionNode *next;

    /// Указатель на список Expression (параметры при вызове функций и методов).
    struct ExpressionListNode *params;

    /// Условие тернарной операции
    struct ExpressionNode *condition;

    /// Выражение, возвращаемое, если условие истинно
    struct ExpressionNode *trueExpr;

    /// Выражение, возвращаемое, если условие ложно
    struct ExpressionNode *falseExpr;

    /// Выражение, которое подлежит приведению типа
    struct ExpressionNode *conversionExpression;
};

/*------------------------------------ ExpressionList -------------------------------------*/

/*! \brief Структура узла списка Expression. */
struct ExpressionListNode
{
    /// Идентификатор узла.
    int id;

    /// Указатель на первый элемент списка Expression.
    struct ExpressionNode *first;

    /// Указатель на последний элемент списка Expression.
    struct ExpressionNode *last;
};

/*------------------------------------ Statement -------------------------------------*/

/*! \brief Перечисление типов Statement. */
enum StatementType
{
    /// Выражениие.
    _EXPRESSION,

    /// Пустой Statement.
    _EMPTY,
};

struct StatementListNode;

/*! \brief Структура узла Statement. */
struct StatementNode
{
    /// Идентификатор узла.
    int id;

    /// Тип обозреваемого Statement - вариант перечисления.
    enum StatementType type;

    /// Идентификатор переменной для выражения объявления переменной.
    char* varValId;

    /// Тип переменной для выражения объявления переменной с явным указанием типа.
    struct TypeNode* varValType;

    /// Ссылка на Expression, которое используется при созании Statement.
    struct ExpressionNode* expression;

    /// Ссылка на выражение условия (для циклов WHILE и DO..WHILE).
    struct ExpressionNode* condition;

    /// Ссылка на простое тело цикла.
    struct StatementNode* singleBody;

    /// Ссылка на составное тело цикла.
    struct StatementListNode* complexBody;

    /// Указатель на следующий Statement в списке StatementList (использовать при работе со списком Statement).
    struct StatementNode* next;

    /// Указатель на список переменных.
    struct VarDeclarationListNode* varDeclList;

    /// Временное хранилище модификаторов.
    struct ModifierHead* _tempHead;
};

/*------------------------------------ StatementList -------------------------------------*/

/*! \brief Структура узла списка Statement. */
struct StatementListNode
{
    /// Идентификатор узла.
    int id;

    /// Указатель на первый элемент списка Statement.
    struct StatementNode* first;

    /// Указатель на последний элемент списка Statement.
    struct StatementNode* last;
};
