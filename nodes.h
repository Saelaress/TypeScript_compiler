#pragma once
#include "stringBuffer.h"

/*------------------------------------ Expression -------------------------------------*/

/*! \brief Перечисление типов Expression. */
enum ExpressionType
{

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

    /// Тип, к которому выполняется приведение
    struct TypeNode *asType;

    /// Выражение, которое подлежит приведению типа
    struct ExpressionNode *conversionExpression;
};