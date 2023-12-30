#include <stdlib.h>
#include "parsing_tree.h"

int ID = 0;

/*------------------------------------ Expression -------------------------------------*/

/*! Создать узел оператора постфиксного декремента.
 * \param[in] value указатель на инкрементируемый Expression.
 * \return указатель на узел оператора постфиксного декремента.
 */
struct ExpressionNode *createPostDecrementExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _POST_DECREMENT;
    node->left = value;
    node->next = NULL;
    node->params = NULL;
    node->right = NULL;
    return node;
}

/*! Создать узел оператора префиксного декремента.
 * \param[in] value указатель на декрементируемый Expression.
 * \return указатель на узел оператора префиксного декремента.
 */
struct ExpressionNode *createPrefDecrementExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _PREF_DECREMENT;
    node->left = NULL;
    node->next = NULL;
    node->params = NULL;
    node->right = value;
    return node;
}

/*! Создать узел оператора постфиксного инкремента.
 * \param[in] value указатель на инкрементируемый Expression.
 * \return указатель на узел оператора постфиксного инкремента.
 */
struct ExpressionNode *createPostIncrementExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _POST_INCREMENT;
    node->left = value;
    node->next = NULL;
    node->params = NULL;
    node->right = NULL;
    return node;
}

/*! Создать узел оператора префиксного инкремента.
 * \param[in] value указатель на инкрементируемый Expression.
 * \return указатель на узел оператора префиксного инкремента.
 */
struct ExpressionNode *createPrefIncrementExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _PREF_INCREMENT;
    node->left = NULL;
    node->next = NULL;
    node->params = NULL;
    node->right = value;
    return node;
}

/*! Создать узел оператора унарного минуса.
 * \param[in] value указатель на операнд.
 * \return указатель на узел оператора унарного минуса.
 */
struct ExpressionNode *createUnaryMinusExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _UNARY_MINUS;
    node->left = NULL;
    node->next = NULL;
    node->params = NULL;
    node->right = value;
    return node;
}

/*! Создать узел оператора унарного плюса.
 * \param[in] value указатель на опреанд.
 * \return указатель на узел оператора унарного плюса.
 */
struct ExpressionNode *createUnaryPlusExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _UNARY_PLUS;
    node->left = NULL;
    node->next = NULL;
    node->params = NULL;
    node->right = value;
    return node;
}

/*! Создать узел Expression на основе целочисленной литеральной констаты.
 * \param[in] value значение целочисленной литеральной константы.
 * \return указатель на созданный экземпляр узла целочисленной литеральной константы.
 */
struct ExpressionNode *createIntLiteralExpressionNode(int value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _INT_LIT;
    node->intValue = value;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел Expression на основе литеральной констаты числа с плавающей запятой.
 * \param[in] value значение литеральной константы числа с плавающей запятой.
 * \return указатель на созданный экземпляр узла литеральной константы числа с плавающей запятой.
 */
struct ExpressionNode *createFloatLiteralExpressionNode(float value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    if (node == NULL)
    {
        // Обработка ошибки выделения памяти
        exit(EXIT_FAILURE);
    }

    node->type = _FLOAT_LIT;
    node->floatValue = value;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    node->id = ID++;

    return node;
}

/*! Создать узел Expression на основе литеральной строковой констаты.
 * \param[in] value значение литеральной строковой константы.
 * \return указатель на созданный экземпляр узла литеральной строковой константы.
 */
struct ExpressionNode *createStringLiteralExpressionNode(struct stringBuffer *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _STRING_LIT;
    node->stringValue = value;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    return node;
}

/*! Создать узел Expression на основе логической литеральной констаты true.
 * \return указатель на созданный экземпляр узла логической литеральной константы true.
 */
struct ExpressionNode *createTrueLiteralExpressionNode()
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _BOOLEAN_LIT;
    node->boolValue = 1;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел Expression на основе логической литеральной констаты false.
 * \return указатель на созданный экземпляр узла логической литеральной константы false.
 */
struct ExpressionNode *createFalseLiteralExpressionNode()
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _BOOLEAN_LIT;
    node->boolValue = 0;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел выражения идентификатора.
 * \param[in] ident строка идентификатора.
 * \return указатель на узел Expression ID.
 */
struct ExpressionNode *createIDExpressionNode(char *ident)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _IDENTIFIER;
    node->identifierString = ident;
    node->left = NULL;
    node->next = NULL;
    node->params = NULL;
    node->right = NULL;
    return node;
}

/*! Создать узел оператора круглых скобок.
 * \param[in] innerExpression внутреннее выражение в круглых скобках.
 * \return ссылка на узел оператора круглых скобок.
 */
struct ExpressionNode *createBracketExpressionNode(struct ExpressionNode *innerExpression)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _BRACKETS;
    node->left = innerExpression;
    node->next = NULL;
    node->params = NULL;
    node->right = NULL;
    return node;
}

/*! Создать узел оператора квадратных скобок.
 * \param[in] innerExpression внутреннее выражение в квадратных скобках.
 * \return ссылка на узел оператора квадратных скобок.
 */
struct ExpressionNode *createSquareBracketExpressionNode(struct ExpressionNode *innerExpression)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    if (node == NULL)
    {
        // Обработка ошибки выделения памяти
        exit(EXIT_FAILURE);
    }

    node->id = ID++;
    node->type = _SQUARE_BRACKETS;
    node->left = innerExpression;
    node->next = NULL;
    node->params = NULL;
    node->right = NULL;

    return node;
}

/*! Создать узел оператора сложения (+).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла сложения.
 */
struct ExpressionNode *createPlusExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _PLUS;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора вычитания (-).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла вычитания.
 */
struct ExpressionNode *createMinusExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _MINUS;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора умножения (*).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла умножения.
 */
struct ExpressionNode *createMulExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _MUL;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора деления (/).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла деления.
 */
struct ExpressionNode *createDivExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _DIV;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора получния остатка от деления (%).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла остатка от деления.
 */
struct ExpressionNode *createModExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _MOD;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора сравнения "больше" (>).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "больше".
 */
struct ExpressionNode *createGreatExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _GREAT;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора сравнения "меньше" (<).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "меньше".
 */
struct ExpressionNode *createLessExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _LESS;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора сравнения "больше или равно" (>=).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "больше или равно".
 */
struct ExpressionNode *createGreatEqualExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _GREAT_EQUAL;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора сравнения "меньше или равно" (<=).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "меньше или равно".
 */
struct ExpressionNode *createLessEqualExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _LESS_EQUAL;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора сравнения "равно" (==).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "равно".
 */
struct ExpressionNode *createEqualExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _EQUAL;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора сравнения "не равно" (!=).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "не равно".
 */
struct ExpressionNode *createNotEqualExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->type = _NOT_EQUAL;
    node->left = leftOperand;
    node->right = rightOperand;
    node->next = NULL;
    node->id = ID++;
    return node;
}

/*! Создать узел оператора присваивания.
 * \param[in] leftOperand указатель на левый операнд присваивания.
 * \param[in] rightOperand указатель на правый операнд присваивания.
 * \return указатель на созданный узел оператора присваивания.
 */
struct ExpressionNode *createAssignmentExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _ASSIGNMENT;
    node->left = leftOperand;
    node->next = NULL;
    node->params = NULL;
    node->right = rightOperand;
    return node;
}

/*! Создать узел оператора присваивания со сложением.
 * \param[in] leftOperand указатель на левый операнд присваивания.
 * \param[in] rightOperand указатель на правый операнд присваивания.
 * \return указатель на созданный узел оператора присваивания со сложением.
 */
struct ExpressionNode *createPlusAssignmentExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _PLUS_ASSIGNMENT;
    node->left = leftOperand;
    node->next = NULL;
    node->params = NULL;
    node->right = rightOperand;
    return node;
}

/*! Создать узел оператора присваивания с вычитанием.
 * \param[in] leftOperand указатель на левый операнд присваивания.
 * \param[in] rightOperand указатель на правый операнд присваивания.
 * \return указатель на созданный узел оператора присваивания с вычитанием.
 */
struct ExpressionNode *createMinusAssignmentExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _MINUS_ASSIGNMENT;
    node->left = leftOperand;
    node->next = NULL;
    node->params = NULL;
    node->right = rightOperand;
    return node;
}

/*! Создать узел оператора присваивания с умножением.
 * \param[in] leftOperand указатель на левый операнд присваивания.
 * \param[in] rightOperand указатель на правый операнд присваивания.
 * \return указатель на созданный узел оператора присваивания с умножением.
 */
struct ExpressionNode *createMulAssignmentExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _MUL_ASSIGNMENT;
    node->left = leftOperand;
    node->next = NULL;
    node->params = NULL;
    node->right = rightOperand;
    return node;
}

/*! Создать узел оператора присваивания с делением.
 * \param[in] leftOperand указатель на левый операнд присваивания.
 * \param[in] rightOperand указатель на правый операнд присваивания.
 * \return указатель на созданный узел оператора присваивания с делением.
 */
struct ExpressionNode *createDivAssignmentExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _DIV_ASSIGNMENT;
    node->left = leftOperand;
    node->next = NULL;
    node->params = NULL;
    node->right = rightOperand;
    return node;
}

/*! Создать узел оператора присваивания со взятием остатка.
 * \param[in] leftOperand указатель на левый операнд присваивания.
 * \param[in] rightOperand указатель на правый операнд присваивания.
 * \return указатель на созданный узел оператора присваивания со взятием остатка.
 */
struct ExpressionNode *createModAssignmentExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _MOD_ASSIGNMENT;
    node->left = leftOperand;
    node->next = NULL;
    node->params = NULL;
    node->right = rightOperand;
    return node;
}

/*! Создать узел оператора логического отрицания.
 * \param[in] value указатель на операнд.
 * \return указатель на узел оператора логического отрицания.
 */
struct ExpressionNode *createNotExpressionNode(struct ExpressionNode *value)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _NOT;
    node->left = NULL;
    node->next = NULL;
    node->params = NULL;
    node->right = value;
    return node;
}

/*! Создать узел оператора доступа к члену массива.
 * \param[in] arr выражение, определяющее массив.
 * \param[in] index выражение, определяющее индекс массива.
 * \return указатель на узел оператора созданий.
 */
struct ExpressionNode *createArrayElementAccessExpression(struct ExpressionNode *arr, struct ExpressionNode *index)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _ARRAY_ACCESS;
    node->left = arr;
    node->next = NULL;
    node->params = NULL;
    node->right = index;
    return node;
}

/*! Создать узел вызова функции.
 * \param[in] idStr строка-идентификатор (имя) функции.
 * \param[in] list список параметров-аргументов функции; NULL, если список пустой.
 * \return указатель на созданный узел Expression.
 */
struct ExpressionNode *createFunctionCallExpressionNode(char *idStr, struct ExpressionListNode *list)
{
    struct ExpressionNode *node = (struct ExpressionNode *)malloc(sizeof(struct ExpressionNode));
    node->id = ID++;
    node->type = _FUNC_CALL;
    node->identifierString = idStr;
    node->params = list;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;
    return node;
}

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

/*------------------------------------ ExpressionList -------------------------------------*/

/*! Создать узел списка Expression.
 * \param[in] firstChild указатель на первый элемент списка; для пустого списка - NULL.
 * \return указатель на созданный экземпляр узла списка Expression.
 */
struct ExpressionListNode *createExpressionListNode(struct ExpressionNode *firstChild)
{
    struct ExpressionListNode *node = (struct ExpressionListNode *)malloc(sizeof(struct ExpressionListNode));
    node->first = firstChild;
    node->last = firstChild;
    node->id = ID++;
    return node;
}

/*! Добавить ExpressionNode к списку Expression.
 * \param[in,out] list список, к которому добавляется новый узел.
 * \param[in] expression добавляемый узел Expression.
 * \return измененный список Expression (тот же самый, что и параметр list).
 */
struct ExpressionListNode *addExpressionToExpressionList(struct ExpressionListNode *list, struct ExpressionNode *expression)
{
    list->last->next = expression;
    list->last = expression;
    return list;
}