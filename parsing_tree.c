#include <stdlib.h>
#include "parsing_tree.h"

int ID = 0;

/*------------------------------------ Expression -------------------------------------*/

/*! Создать узел оператора дизъюнкции (||).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла дизъюнкции.
 */
struct ExpressionNode *createOrExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _OR;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора конъюнкции (&&).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла конъюнкции.
 */
struct ExpressionNode *createAndExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _AND;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел тернарной операции (? :).
 * \param[in] condition условие тернарной операции.
 * \param[in] trueExpr выражение, возвращаемое, если условие истинно.
 * \param[in] falseExpr выражение, возвращаемое, если условие ложно.
 * \return указатель на созданный экземпляр узла тернарной операции.
 */
struct ExpressionNode *createTernaryExpressionNode(struct ExpressionNode *condition,
                                                   struct ExpressionNode *trueExpr,
                                                   struct ExpressionNode *falseExpr)
{
    struct ExpressionNode *node = malloc(sizeof(struct ExpressionNode));
    if (node == NULL)
    {
        // Обработка ошибки выделения памяти
        exit(EXIT_FAILURE);
    }

    // Инициализируем поля для тернарной операции
    node->type = _TERNARY;
    node->condition = condition;
    node->trueExpr = trueExpr;
    node->falseExpr = falseExpr;

    return node;
}

/*! Создать узел для оператора приведения типа (as).
 * \param[in] conversionExpression выражение, которое подлежит приведению типа.
 * \param[in] asType тип, к которому выполняется приведение.
 * \return указатель на созданный экземпляр узла оператора приведения типа.
 */
struct ExpressionNode *createAsTypeConversionExpressionNode(struct ExpressionNode *conversionExpression, struct TypeNode *asType)
{
    struct ExpressionNode *node = malloc(sizeof(struct ExpressionNode));
    if (node == NULL)
    {
        // Обработка ошибки выделения памяти
        exit(EXIT_FAILURE);
    }

    // Инициализируем поля для оператора приведения типа
    node->type = _AS_TYPE_CONVERSION;
    node->conversionExpression = conversionExpression;
    node->asType = asType;

    return node;
}