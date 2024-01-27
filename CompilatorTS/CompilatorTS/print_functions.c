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
    case _UNARY_PLUS:
        res = concat(res, (char*)"[label=\"U_+\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
        break;
    case _UNARY_MINUS:
        res = concat(res, (char*)"[label=\"U_-\"];\n");
        res = concat(res, generateDotFromExpression(node->right));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->right->id, idStr, 10));
        res = concat(res, (char*)";\n");
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
        if (node->params->first != NULL)
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
    case _BRACKETS:
        res = concat(res, (char*)"[label=\"()\"];\n");
        res = concat(res, generateDotFromExpression(node->left));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->left->id, idStr, 10));
        res = concat(res, (char*)"[label=\"inner\"];\n");
        break;
    case _SQUARE_BRACKETS:
        res = concat(res, (char*)"[label=\"[]\"];\n");
        res = concat(res, generateDotFromExpressionList(node->params));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->params->id, idStr, 10));
        res = concat(res, (char*)"[label=\"inner\"];\n");
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
        if (stmt->body != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->body));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->body->id, strId, 10));
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
        if (stmt->body != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->body));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->body->id, strId, 10));
            res = concat(res, (char*)"[label = \"control_body\"];\n");
        }
        break;
    case _EMPTY:
        res = concat(res, (char*)"[label=\"empty_stmt\"];\n");
        break;
    case _BLOCK:
        res = concat(res, (char*)"[label=\"BLOCK\"];\n");
        if (stmt->body != NULL)
        {
            res = concat(res, generateDotFromStatementList(stmt->body));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->body->id, strId, 10));
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
        if (stmt->body != NULL)
        {
            res = concat(res, generateDotFromStatement(stmt->body));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->body->id, strId, 10));
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
    case _VARDECLLIST:
        res = concat(res, generateDotFromStmtVarDeclarationList(stmt));
        break;
    case _FOR:
        res = concat(res, (char*)"[label=\"FOR\"];\n");
        if (stmt->initializer != NULL) {
            if (stmt->initializer->varDeclList != NULL)
            {
                res = concat(res, itoa(stmt->initializer->id, strId, 10));
                res = concat(res, generateDotFromStmtVarDeclarationList(stmt->initializer));
            }
            else
            {
                res = concat(res, generateDotFromStatement(stmt->initializer));
            }
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->initializer->id, strId, 10));
            res = concat(res, (char*)"[label = \"initializer\"];\n");
        }
        if (stmt->condition != NULL) {
            res = concat(res, generateDotFromExpression(stmt->condition));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->condition->id, strId, 10));
            res = concat(res, (char*)"[label = \"condition\"];\n");
        }
        if (stmt->expression != NULL) {
            res = concat(res, generateDotFromExpression(stmt->expression));
            res = concat(res, itoa(stmt->id, strId, 10));
            res = concat(res, (char*)" -> ");
            res = concat(res, itoa(stmt->expression->id, strId, 10));
            res = concat(res, (char*)"[label = \"expression\"];\n");
        }
        res = concat(res, generateDotFromStatement(stmt->body));
        res = concat(res, itoa(stmt->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(stmt->body->id, strId, 10));
        res = concat(res, (char*)"[label = \"control_body\"];\n");
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

/*! Сгенерировать DOT-строку для дочерних узлов Expression бинарной операции.
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


/*!Сгенерировать DOT - строку для файла TS.трока будет содержать корневую структуру направленного графа digraph prg.
* \param[in] node Визуализироваемый узел.
* \return DOT - строка с дочерними узлами.
*/
char* generateDotFromTSFile(struct TSFileNode* node)
{
    char base[] = "digraph prg {\n";
    char strId[10];
    char* res = concat(base, itoa(node->id, strId, 10));
    res = concat(res, (char*)"[label=\"TSFile\"];\n");

    res = concat(res, generateDotFromTSFileElementList(node->elemList));

    res = concat(res, itoa(node->id, strId, 10));
    res = concat(res, (char*)" -> ");
    res = concat(res, itoa(node->elemList->id, strId, 10));
    res = concat(res, (char*)";\n");
    res = concat(res, (char*)"}");
    return res;
}

/*! Сгенерировать DOT-строку для списка элементов файла TS.
* \param[in] node Узел списка элементов файла TS.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromTSFileElementList(struct TSFileElementListNode* node)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(node->id, strId, 10));
    res = concat(res, (char*)"[label=\"TSFileElementList\"];\n");
    if (node->first != NULL)
    {
        res = concat(res, generateDotFromTSFileElement(node->first));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->first->id, strId, 10));
        res = concat(res, (char*)"[label=\"first\"];\n");
    }
    return res;
}

/*! Сгенерировать DOT-строку для элемена файла TS.
* \param[in] node Узел элемента файла TS.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromTSFileElement(struct TSFileElementNode* node)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(node->id, strId, 10));
    res = concat(res, (char*)"[label=\"TSFileElement\"];\n");
    if (node->stmt != NULL)
    {
        res = concat(res, generateDotFromStatement(node->stmt));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->stmt->id, strId, 10));
        res = concat(res, (char*)"[label=\"stmt\"];\n");
    }
    if (node->func != NULL)
    {
        res = concat(res, generateDotFromFunction(node->func));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->func->id, strId, 10));
        res = concat(res, (char*)"[label=\"function\"];\n");
    }


    if (node->next != NULL)
    {
        res = concat(res, generateDotFromTSFileElement(node->next));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->next->id, strId, 10));
        res = concat(res, (char*)"[label=\"next\"];\n");
    }
    return res;
}
/*! Сгенерировать DOT-строку для узла объявления переменной.
* \param[in] varDecl Узел объявления переменной.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromVarDeclaration(struct VarDeclarationNode* varDecl)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(varDecl->id, strId, 10));
    res = concat(res, (char*)"[label=\"VAR <ident=");
    res = concat(res, varDecl->identifier);
    res = concat(res, (char*)">\"];\n");
    if (varDecl->type != NULL)
    {
        res = concat(res, generateDotFromType(varDecl->type));
        res = concat(res, itoa(varDecl->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(varDecl->type->id, strId, 10));
        res = concat(res, (char*)"[label = \"type\"];\n");
    }
    if (varDecl->dimen != NULL)
    {
        res = concat(res, itoa(varDecl->dimen->id, strId, 10));
        res = concat(res, (char*)"[label=\"");
        res = concat(res, itoa(varDecl->dimen->dimension, strId, 10));
        res = concat(res, (char*)"\"];\n");
        res = concat(res, itoa(varDecl->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(varDecl->dimen->id, strId, 10));
        res = concat(res, (char*)"[label = \"dimension\"];\n");
    }
    if (varDecl->expression != NULL)
    {
        res = concat(res, generateDotFromExpression(varDecl->expression));
        res = concat(res, itoa(varDecl->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(varDecl->expression->id, strId, 10));
        res = concat(res, (char*)"[label = \"expr\"];\n");
    }
    if (varDecl->next != NULL)
    {
        res = concat(res, generateDotFromVarDeclaration(varDecl->next));
        res = concat(res, itoa(varDecl->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(varDecl->next->id, strId, 10));
        res = concat(res, (char*)"[label=\"next\"];\n");
    }
    return res;
}


/*! Сгенерировать строку в DOT-формате для дальнейшей визуализации для узла stmt типа VarDeclarationListNode.
* \param[in] stmt Визуализироваемый узел.
* \return Строка кода на языке DOT из узла Statement типа VarDeclarationListNode.
*/
char* generateDotFromStmtVarDeclarationList(struct StatementNode* stmt)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, (char*)"[label=\"VARDECLLIST\"];\n");
    res = concat(res, generateDotFromModifier(stmt->modifier));
    res = concat(res, itoa(stmt->id, strId, 10));
    res = concat(res, (char*)" -> ");
    res = concat(res, itoa(stmt->modifier->id, strId, 10));
    res = concat(res, (char*)"[label = \"modifier\"];\n");
    res = concat(res, generateDotFromVarDeclaration(stmt->varDeclList->first));
    res = concat(res, itoa(stmt->id, strId, 10));
    res = concat(res, (char*)" -> ");
    res = concat(res, itoa(stmt->varDeclList->first->id, strId, 10));
    res = concat(res, (char*)"[label = \"first\"];\n");
    return res;
}

/*! \brief Сгенерировать строку в DOT-формате для визуализации узла модификатора (ModifierNode).
 * \param[in] mod Модификатор переменной.
 * \return Строка кода на языке DOT из узла модификатора.
 */
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

/*! \brief Сгенерировать строку в DOT-формате для визуализации узла типа (TypeNode).
 * \param[in] typ Тип переменной.
 * \return Строка кода на языке DOT из узла типа.
 */
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



/*! Сгенерировать DOT-строку для узла функции.
* \param[in] node Узел функции.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromFunction(struct FunctionNode* node)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(node->id, strId, 10));
    res = concat(res, (char*)"[label=\"Function <ident=");
    res = concat(res, node->identifier);
    res = concat(res, (char*)">\"];\n");
    if (node->returnValue != NULL)
    {
        res = concat(res, generateDotFromType(node->returnValue));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->returnValue->id, strId, 10));
        res = concat(res, (char*)"[label=\"type\"];\n");
    }
    if (node->params->first != NULL) /*Список параметров.*/
    {
        res = concat(res, generateDotFromParamList(node->params));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->params->id, strId, 10));
        res = concat(res, (char*)"[label=\"params\"];\n");
    }
    res = concat(res, generateDotFromStatementList(node->body));
    res = concat(res, itoa(node->id, strId, 10));
    res = concat(res, (char*)" -> ");
    res = concat(res, itoa(node->body->id, strId, 10));
    res = concat(res, (char*)"[label=\"body\"];\n");
    return res;
}


/*! Сгенерировать DOT-строку для списка элементов ParamListNode.
* \param[in] node Узел списка элементов ParamListNode.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromParamList(struct ParamListNode* node)
{
    char base[] = "";
    char strId[10];
    char* res = concat(base, itoa(node->id, strId, 10));
    res = concat(res, (char*)"[label=\"ParamListNode\"];\n");
    if (node->first != NULL)
    {
        res = concat(res, generateDotFromParamForFuncNode(node->first));
        res = concat(res, itoa(node->id, strId, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->first->id, strId, 10));
        res = concat(res, (char*)"[label=\"first\"];\n");
    }
    return res;
}

/*! Сгенерировать DOT-строку для элемента ParamListNode.
* \param[in] node Узел элемента ParamListNode.
* \return DOT-строка с дочерними узлами.
*/
char* generateDotFromParamForFuncNode(struct ParamForFuncNode* node)
{
    char base[] = "";
    char idStr[10];
    char* res = concat(base, itoa(node->id, idStr, 10));
    res = concat(res, (char*)"[label=\"Param <ident=");
    if (node->identifier != NULL) {
        res = concat(res, node->identifier);
        res = concat(res, (char*)">\"];\n");
    }
    if (node->type != NULL) {
        res = concat(res, generateDotFromType(node->type));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->type->id, idStr, 10));
        res = concat(res, (char*)"[label = \"type\"];\n");
    }
    if (node->next != NULL)
    {
        res = concat(res, generateDotFromParamForFuncNode(node->next));
        res = concat(res, itoa(node->id, idStr, 10));
        res = concat(res, (char*)" -> ");
        res = concat(res, itoa(node->next->id, idStr, 10));
        res = concat(res, (char*)"[label=\"next\"];\n");
    }
    return res;

}


