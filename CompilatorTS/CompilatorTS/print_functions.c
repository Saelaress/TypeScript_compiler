#include <stdlib.h>
#pragma warning(disable : 4996)
#include "print_functions.h"

/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла Expression.
* \param[in] node Визуализироваемый узел.
* \return Строка кода на языке DOT из узла Expression.
*/
char * generateDotFromExpression(struct ExpressionNode * node)
{
    char base[] = "";
    char idStr[10];
    char* res = concat(base, itoa(node->id, idStr, 10));
    switch (node->type)
    {
    case _IDENTIFIER:
        res = concat(res, (char *)"[label=\"");
        res = concat(res, node->identifierString);
        res = concat(res, (char *)"\"];\n");
        break;
    case _INT_LIT:
        res = concat(res, (char *)"[label=\"");
        res = concat(res, itoa(node->intValue, idStr, 10));
        res = concat(res, (char *)"\"];\n");
        break;
    case _PLUS:
        res = concat(res, (char*)"[label=\"+\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _FLOAT_LIT:
        res = concat(res, (char*)"[label=\"");
        float f = node->floatValue;
        char fstr[20];
        sprintf(fstr, "%f", f);
        res = concat(res, fstr);
        res = concat(res, (char*)"\"];\n");
        break;
    case _PREF_INCREMENT:
        res = concat(res, (char*)"[label=\"PREF_++\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _PREF_DECREMENT:
        res = concat(res, (char*)"[label=\"PREF_--\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _POST_INCREMENT:
        res = concat(res, (char*)"[label=\"POST_++\"];\n");
        res = concat(res, generateDotFromExpression(node->left));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->left->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _POST_DECREMENT:
        res = concat(res, (char*)"[label=\"POST_--\"];\n");
        res = concat(res, generateDotFromExpression(node->left));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->left->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    default:
        break;
    }
    if(node->next != NULL)
    {
        res = concat(res, generateDotFromExpression(node->next));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char *)" -> ");
        res = concat(res, itoa(node->next->id, idStr, 10));
        res = concat(res, (char *)"[label=\"next\"];\n");
    }
    return res;
}

/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла ExpressionList.
* \param[in] listNode Визуализироваемый узел.
* \return Строка кода на языке DOT из узла ExpressionList.
*/
char * generateDotFromExpressionList(struct ExpressionListNode * listNode)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(listNode->id, strId, 10));
    res = concat(res, (char *)"[label=\"ExprList\"];\n");
    if (listNode->first != NULL)
    {
        res = concat(res, generateDotFromExpression(listNode->first));
        res = concat(res, itoa(listNode->id, strId, 10));
        res = concat(res, (char *)" -> ");
        res = concat(res, itoa(listNode->first->id, strId, 10));
        res = concat(res, (char *)"[label=\"first\"];\n");
    }
    return res;
}

/*!    /*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла Statement.
    * \param[in] stmt Визуализироваемый узел.
    * \return Строка кода на языке DOT из узла Statement.
    */
char* generateDotFromStatement(struct StatementNode* stmt)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(stmt->id, strId, 10));
    switch (stmt->type) {
    case _EXPRESSION:
        res = concat(res, (char*)"[label=\"stmt\"];\n");
        res = concat(res, generateDotFromExpression(stmt->expression));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->expression->id, strId, 10));
        res = concat(res, (char*)"[label=\"expr\"];\n");
        break;
    case _EMPTY:
        res = concat(res, (char*)"[label=\"empty_stmt\"];\n");
        break;
    }
    if (stmt->next != NULL)
    {
        res = concat(res, generateDotFromStatement(stmt->next));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->next->id, strId, 10));
        res = concat(res, (char*)"[label = \"next\"];\n");
    }
    return res;
}


/*! Сгегнерировать строку в DOT-формате для дальнейшей визуализации для узла StatementList.
* \param[in] stmtList Визуализироваемый узел.
* \return Строка кода на языке DOT из узла StatementList.
*/
char * generateDotFromStatementList(struct StatementListNode * stmtList)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(stmtList->id, strId, 10));
    res = concat(res, (char *)"[label=\"StmtList\"];\n");
    if (stmtList->first != NULL)
    {
        res = concat(res, generateDotFromStatement(stmtList->first));
        res = concat(res, itoa(stmtList->id, strId, 10));
        res = concat(res, (char *)" -> ");
        res = concat(res, itoa(stmtList->first->id, strId, 10));
        res = concat(res, (char *)"[label=\"first\"];\n");
    }
    return res;
}

/*! Динамичeски склеить две строки и вернуть ссылку на новую строку.
* \param[in] firstStr первая строка для склейки.
* \param[in] secStr вторая строка для склейки.
* \return Новая склеенная строка.
*/
char* concat(char* firstStr, char* secStr)
{
    char* result = (char*)malloc((strlen(firstStr) + strlen(secStr) + 1) * sizeof(char));
    result[0] = 0;
    strcpy(result, firstStr);
    strcat(result, secStr);
    //printf("len of \"%s\" is %d\n\n\n", firstStr, strlen(firstStr));
    //printf("len of \"%s\" is %d\n\n\n", secStr, strlen(secStr));
    return result;
}

/*! Сгенерировать DOT-строку для дочерних узллов Expression бинарной операции.
* \param[in] node узел, для дочерних узлов которого формируется DOT-строка.
* \return DOT-строка с дочерними узлами.
*/
char* generateStrForBinOperation(struct ExpressionNode* node)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, generateDotFromExpression(node->left));
    res = concat(res, generateDotFromExpression(node->right));
    res = concat(res, itoa(node->id, strId, 10));
    res = concat(res, (char*)" -> ");
    res = concat(res, itoa(node->left->id, strId, 10));
    res = concat(res, (char*)"[label=\"left\"];\n");
    res = concat(res, itoa(node->id, strId, 10));
    res = concat(res, (char*)" -> ");
    res = concat(res, itoa(node->right->id, strId, 10));
    res = concat(res, (char*)"[label=\"right\"];\n");
    return res;
}