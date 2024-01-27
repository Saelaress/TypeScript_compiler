#pragma once
#include "nodes.h"


/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла Expression.
* \param[in] node Визуализироваемый узел.
* \return Строка кода на языке DOT из узла Expression.
*/
char * generateDotFromExpression(struct ExpressionNode * node);

/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла ExpressionList.
* \param[in] listNode Визуализироваемый узел.
* \return Строка кода на языке DOT из узла ExpressionList.
*/
char * generateDotFromExpressionList(struct ExpressionListNode * listNode);

/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла Statement.
* \param[in] stmt Визуализироваемый узел.
* \return Строка кода на языке DOT из узла Statement.
*/
char * generateDotFromStatement(struct StatementNode * stmt);

/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла StatementList.
* \param[in] stmtList Визуализироваемый узел.
* \return Строка кода на языке DOT из узла StatementList.
*/
char * generateDotFromStatementList(struct StatementListNode * stmtList);

/*! Динамичски склеить две строки и вернуть ссылку на новую строку.
* \param[in] firstStr первая строка для склейки.
* \param[in] secStr вторая строка для склейки.
* \return Новая склеенная строка.
*/
char * concat(char * firstStr, char * secStr);

/*! Сгенерировать DOT-строку для дочерних узллов Expression бинарной операции.
* \param[in] node узел, для дочерних узлов которого формируется DOT-строка.
* \return DOT-строка с дочерними узлами.
*/
char* generateStrForBinOperation(struct ExpressionNode* node);

/*! \brief Сгенерировать строку в DOT-формате для визуализации узла модификатора (ModifierNode).
 * \param[in] mod Модификатор переменной.
 * \return Строка кода на языке DOT из узла модификатора.
 */
char* generateDotFromModifier(struct ModifierNode* mod);

/*! \brief Сгенерировать строку в DOT-формате для визуализации узла типа (TypeNode).
 * \param[in] typ Тип переменной.
 * \return Строка кода на языке DOT из узла типа.
 */
char* generateDotFromType(struct TypeNode* typ);

/*! Сгенерировать DOT-строку для файла Kotlin. Строка будет содержать корневую структуру направленного графа digraph prg.
* \param[in] node Визуализироваемый узел.
* \return DOT-строка с дочерними узлами.
*/
char * generateDotFromTSFile(struct TSFileNode * node);

/*! Сгенерировать DOT-строку для списка элементов файла Kotlin.
* \param[in] node Узел списка элементов файла Kotlin.
* \return DOT-строка с дочерними узлами.
*/
char * generateDotFromTSFileElementList(struct TSFileElementListNode * node);

/*! Сгенерировать DOT-строку для элемента файла Kotlin.
* \param[in] node Узел элемента файла Kotlin.
* \return DOT-строка с дочерними узлами.
*/
char * generateDotFromTSFileElement(struct TSFileElementNode * node);


/*! Сгенерировать DOT-строку для узла функции.
* \param[in] node Узел функции.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromFunction(struct FunctionNode* node);


/*! Сгенерировать DOT-строку для узла объявления переменной.
* \param[in] varDecl Узел объявления переменной.
* \return DOT-строка с дочерними узлами.
*/
char * generateDotFromVarDeclaration(struct VarDeclarationNode * varDecl);

/*! Сгенерировать строку в DOT-формате для дальнейшей визуализации для узла stmt типа VarDeclarationListNode.
* \param[in] stmt Визуализироваемый узел.
* \return Строка кода на языке DOT из узла Statement типа VarDeclarationListNode.
*/
char* generateDotFromStmtVarDeclarationList(struct StatementNode* stmt);

/*! Сгенерировать DOT-строку для списка элементов ParamListNode.
* \param[in] node Узел списка элементов ParamListNode.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromParamList(struct ParamListNode* node);

/*! Сгенерировать DOT-строку для элемента ParamListNode.
* \param[in] node Узел элемента ParamListNode.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromParamForFuncNode(struct ParamForFuncNode* node);

