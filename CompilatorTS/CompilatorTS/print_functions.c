#include <stdlib.h>
#pragma warning(disable : 4996)
#include "print_functions.h"

/*! Сгенерировать строку в DOT-формате для дальнейшей визуализации для узла Expression.
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
        res = concat(res, (char*)"[label=\"");
        res = concat(res, node->identifierString);
        res = concat(res, (char*)"\"];\n");
        break;
    case _INT_LIT:
        res = concat(res, (char*)"[label=\"");
        res = concat(res, itoa(node->intValue, idStr, 10));
        res = concat(res, (char*)"\"];\n");
        break;
    case _PLUS:
        res = concat(res, (char*)"[label=\"+\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _MINUS:
        res = concat(res, (char*)"[label=\"-\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _MUL:
        res = concat(res, (char*)"[label=\"*\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _DIV:
        res = concat(res, (char*)"[label=\"/\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _POST_DECREMENT:
        res = concat(res, (char*)"[label=\"--\"];\n");
        res = concat(res, generateDotFromExpression(node->left));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->left->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _PREF_DECREMENT:
        res = concat(res, (char*)"[label=\"--\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _POST_INCREMENT:
        res = concat(res, (char*)"[label=\"++\"];\n");
        res = concat(res, generateDotFromExpression(node->left));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->left->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _PREF_INCREMENT:
        res = concat(res, (char*)"[label=\"++\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _MOD:
        res = concat(res, (char*)"[label=\"%\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _GREAT:
        res = concat(res, (char*)"[label=\">\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _LESS:
        res = concat(res, (char*)"[label=\"<\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _GREAT_EQUAL:
        res = concat(res, (char*)"[label=\">=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _LESS_EQUAL:
        res = concat(res, (char*)"[label=\"<=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _EQUAL:
        res = concat(res, (char*)"[label=\"==\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _NOT_EQUAL:
        res = concat(res, (char*)"[label=\"!=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _ASSIGNMENT:
        res = concat(res, (char*)"[label=\"=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _PLUS_ASSIGNMENT:
        res = concat(res, (char*)"[label=\"+=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _MINUS_ASSIGNMENT:
        res = concat(res, (char*)"[label=\"-=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _MUL_ASSIGNMENT:
        res = concat(res, (char*)"[label=\"*=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _DIV_ASSIGNMENT:
        res = concat(res, (char*)"[label=\"/=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _MOD_ASSIGNMENT:
        res = concat(res, (char*)"[label=\"%=\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _NOT:
        res = concat(res, (char*)"[label=\"!\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _ARRAY_ACCESS:
        res = concat(res, (char*)"[label=\"array_access\"];\n");
        res = concat(res, generateStrForBinOperation(node));
        break;
    case _FUNC_CALL:
        res = concat(res, (char*)"[label=\"invoke <name=");
        res = concat(res, node->identifierString);
        res = concat(res, (char*)">\"];\n");
        if (node->params != NULL)
        {
            res = concat(res, generateDotFromExpressionList(node->params));
            res = concat(res, itoa(node->id, idStr, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(node->params->id, idStr, 10));
            res = concat(res, (char*)"[label=\"params\"];\n");
        }
        break;
    case _BOOLEAN_LIT:
        res = concat(res, (char*)"[label=\"");
        if (node->boolValue == 1)
        {
            res = concat(res, (char*)"true");
        }
        else
        {
            res = concat(res, (char*)"false");
        }
        res = concat(res, (char*)"\"];\n");
        break;
    case _STRING_LIT:
        res = concat(res, (char*)"[label=\"");
        res = concat(res, getSafeCString(node->stringValue->buffer));
        res = concat(res, (char*)"\"];\n");
        break;
    case _FLOAT_LIT:
        res = concat(res, (char*)"[label=\"");
        float f = node->floatValue;
        char fstr[20];
        sprintf(fstr, "%f", f);
        res = concat(res, fstr);
        res = concat(res, (char*)"\"];\n");
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

/*! Сгенерировать строку в DOT-формате для дальнейшей визуализации для узла ExpressionList.
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

/*! Сгенерировать строку в DOT-формате для дальнейшей визуализации для узла Statement.
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
    case _WHILE:
        res = concat(res, (char*)"[label=\"WHILE\"];\n");
        res = concat(res, generateDotFromExpression(stmt->condition));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->condition->id, strId, 10));
        res = concat(res, (char*)"[label = \"condition\"];\n");
        if (stmt->complexBody != NULL)
        {
            res = concat(res, generateDotFromStatementList(stmt->complexBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->complexBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"control_body\"];\n");
        }
        else if (stmt->singleBody != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->singleBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->singleBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"control_body\"];\n");
        }
        break;
    case _DOWHILE:
        res = concat(res, (char*)"[label=\"DO_WHILE\"];\n");
        res = concat(res, generateDotFromExpression(stmt->condition));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->condition->id, strId, 10));
        res = concat(res, (char*)"[label = \"condition\"];\n");
        if (stmt->complexBody != NULL)
        {
            res = concat(res, generateDotFromStatementList(stmt->complexBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->complexBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"control_body\"];\n");
        }
        else if (stmt->singleBody != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->singleBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->singleBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"control_body\"];\n");
        }
        break;
    case _EMPTY:
        res = concat(res, (char*)"[label=\"empty_stmt\"];\n");
        break;
    case _BLOCK:
        res = concat(res, (char*)"[label=\"BLOCK\"];\n");
        if (stmt->complexBody != NULL)
        {
            res = concat(res, generateDotFromStatementList(stmt->complexBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->complexBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"statements\"];\n");
        }
        break;
    case _IF:
        res = concat(res, (char*)"[label=\"IF\"];\n");
        res = concat(res, generateDotFromExpression(stmt->condition));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->condition->id, strId, 10));
        res = concat(res, (char*)"[label = \"condition\"];\n");
        if (stmt->singleBody != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->singleBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->singleBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"true_body\"];\n");
        }
        if (stmt->falseBody != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->falseBody));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->falseBody->id, strId, 10));
            res = concat(res, (char*)"[label = \"false_body\"];\n");
        }
        break;
    case _VARDECL:
        res = concat(res, (char*)"[label=\"VAR <ident=");
        res = concat(res, stmt->varValId);
        res = concat(res, (char*)">\"];\n");
        res = concat(res, generateDotFromModifier(stmt->modifier));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->modifier->id, strId, 10));
        res = concat(res, (char*)"[label = \"modifier\"];\n");
        if (stmt->varValType != NULL)
        {
            res = concat(res, generateDotFromType(stmt->varValType));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->varValType->id, strId, 10));
            res = concat(res, (char*)"[label = \"type\"];\n");
        }

        break;
    case _RETURN:
        res = concat(res, (char*)"[label=\"RETURN\"];\n");
        if (stmt->expression != NULL)
        {
            res = concat(res, generateDotFromExpression(stmt->expression));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->expression->id, strId, 10));
            res = concat(res, (char*)"[label = \"expr\"];\n");
        }
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


/*! Сгенерировать строку в DOT-формате для дальнейшей визуализации для узла StatementList.
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

char* generateDotFromModifier(struct ModifierNode* mod)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(mod->id, strId, 10));

    switch (mod->type)
    {
    case _LET:
        res = concat(res, (char*)"[label=\"LET\"];\n");
        break;
    case _CONST:
        res = concat(res, (char*)"[label=\"CONST\"];\n");
        break;
    }

    return res;
}

char* generateDotFromType(struct TypeNode* typ)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(typ->id, strId, 10));

    switch (typ->type)
    {
    case _NUMBER:
        res = concat(res, (char*)"[label=\"NUMBER\"];\n");
        break;
    case _STRING:
        res = concat(res, (char*)"[label=\"STRING\"];\n");
        break;
    case _BOOLEAN:
        res = concat(res, (char*)"[label=\"BOOLEAN\"];\n");
        break;
    case _ANY:
        res = concat(res, (char*)"[label=\"ANY\"];\n");
        break;
    case _UNKNOWN:
        res = concat(res, (char*)"[label=\"UNKNOWN\"];\n");
        break;
    case _VOID:
        res = concat(res, (char*)"[label=\"VOID\"];\n");
        break;
    }

    return res;
}
