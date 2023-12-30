#pragma once
#include "nodes.h"

/// Ссылка на корневой узел программы.
struct KotlinFileNode *root;

/*------------------------------------ Expression -------------------------------------*/

/*! Создать узел идентификатора.
 * \param[in] idStr указатель на строку, представляющую идентификатор.
 * \return указатель на созданный экземпляр узла идентификатора.
 */
struct ExpressionNode *createIDExpression(char *idStr);

/*! Создать узел Expression на основе целочисленной литеральной констаты.
 * \param[in] value значение целочисленной литеральной константы.
 * \return указатель на созданный экземпляр узла целочисленной литеральной константы.
 */
struct ExpressionNode *createIntLiteralExpressionNode(int value);

/*! Создать узел Expression на основе литеральной констаты числа с плавающей запятой.
 * \param[in] value значение литеральной константы числа с плавающей запятой.
 * \return указатель на созданный экземпляр узла литеральной константы числа с плавающей запятой.
 */
struct ExpressionNode *createFloatLiteralExpressionNode(float value);

/*! Создать узел Expression на основе логической литеральной констаты true.
 * \return указатель на созданный экземпляр узла логической литеральной константы true.
 */
struct ExpressionNode *createTrueLiteralExpressionNode();

/*! Создать узел Expression на основе логической литеральной констаты false.
 * \return указатель на созданный экземпляр узла логической литеральной константы false.
 */
struct ExpressionNode *createFalseLiteralExpressionNode();

/*! Создать узел Expression на основе литеральной строковой констаты.
 * \param[in] value значение литеральной строковой константы.
 * \return указатель на созданный экземпляр узла литеральной строковой константы.
 */
struct ExpressionNode *createStringLiteralExpressionNode(struct stringBuffer *value);

/*! Создать узел оператора унарного плюса.
 * \param[in] value указатель на опреанд.
 * \return указатель на узел оператора унарного плюса.
 */
struct ExpressionNode *createUnaryPlusExpressionNode(struct ExpressionNode *value);

/*! Создать узел оператора унарного минуса.
 * \param[in] value указатель на операнд.
 * \return указатель на узел оператора унарного минуса.
 */
struct ExpressionNode *createUnaryMinusExpressionNode(struct ExpressionNode *value);

/*! Создать узел оператора префиксного инкремента.
 * \param[in] value указатель на инкрементируемый Expression.
 * \return указатель на узел оператора префиксного инкремента.
 */
struct ExpressionNode *createPrefIncrementExpressionNode(struct ExpressionNode *value);

/*! Создать узел оператора префиксного декремента.
 * \param[in] value указатель на декрементируемый Expression.
 * \return указатель на узел оператора префиксного декремента.
 */
struct ExpressionNode *createPrefDecrementExpressionNode(struct ExpressionNode *value);

/*! Создать узел оператора постфиксного инкремента.
 * \param[in] value указатель на инкрементируемый Expression.
 * \return указатель на узел оператора постфиксного инкремента.
 */
struct ExpressionNode *createPostIncrementExpressionNode(struct ExpressionNode *value);

/*! Создать узел оператора постфиксного декремента.
 * \param[in] value указатель на инкрементируемый Expression.
 * \return указатель на узел оператора постфиксного декремента.
 */
struct ExpressionNode *createPostDecrementExpressionNode(struct ExpressionNode *value);

/*! Создать узел оператора круглых скобок.
 * \param[in] innerExpression внутреннее выражение в круглых скобках.
 * \return ссылка на узел оператора круглых скобок.
 */
struct ExpressionNode *createBracketExpressionNode(struct ExpressionNode *innerExpression);

/*! Создать узел оператора квадратных скобок.
 * \param[in] innerExpression внутреннее выражение в квадратных скобках.
 * \return ссылка на узел оператора квадратных скобок.
 */
struct ExpressionNode *createSquareBracketExpressionNode(struct ExpressionNode *innerExpression);

/*! Создать узел оператора сложения (+).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла сложения.
 */
struct ExpressionNode *createPlusExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора вычитания (-).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла вычитания.
 */
struct ExpressionNode *createMinusExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора умножения (*).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла умножения.
 */
struct ExpressionNode *createMulExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора деления (/).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла деления.
 */
struct ExpressionNode *createDivExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора получния остатка от деления (%).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла остатка от деления.
 */
struct ExpressionNode *createModExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора сравнения "больше" (>).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "больше".
 */
struct ExpressionNode *createGreatExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора сравнения "меньше" (<).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла оператора сравнения "меньше".
 */
struct ExpressionNode *createLessExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора дизъюнкции (||).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла дизъюнкции.
 */
struct ExpressionNode *createOrExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел оператора конъюнкции (&&).
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на созданный экземпляр узла конъюнкции.
 */
struct ExpressionNode *createAndExpressionNode(struct ExpressionNode *leftOperand, struct ExpressionNode *rightOperand);

/*! Создать узел тернарной операции (? :).
 * \param[in] condition условие тернарной операции.
 * \param[in] trueExpr выражение, возвращаемое, если условие истинно.
 * \param[in] falseExpr выражение, возвращаемое, если условие ложно.
 * \return указатель на созданный экземпляр узла тернарной операции.
 */
struct ExpressionNode *createTernaryExpressionNode(struct ExpressionNode *condition,
                                                   struct ExpressionNode *trueExpr,
                                                   struct ExpressionNode *falseExpr);


/*------------------------------------ ExpressionList -------------------------------------*/

/*! Создать узел списка Expression.
 * \param[in] firstChild указатель на первый элемент списка; для пустого списка - NULL.
 * \return указатель на созданный экземпляр узла списка Expression.
 */
struct ExpressionListNode *createExpressionListNode(struct ExpressionNode *firstChild);

/*! Добавить ExpressionNode к списку Expression.
 * \param[in,out] list список, к которому добавляется новый узел.
 * \param[in] expression добавляемый узел Expression.
 * \return измененный список Expression (тот же самый, что и параметр list).
 */
struct ExpressionListNode *addExpressionToExpressionList(struct ExpressionListNode *list, struct ExpressionNode *expression);


/*------------------------------------ KotlinFile -------------------------------------*/

/*! Создать корневой узел файла Kotlin на основе списка элементов файла.
* \param[in] elemList список элементов файла Kotlin, на основе которого создается файл Kotlin.
* \return указатель на корневой узел файла Kotlin.
*/
struct KotlinFileNode* createKotlinFileNode(struct KotlinFileElementListNode* elemList);


/*------------------------------------ KotlinFileElementList -------------------------------------*/

/*! Создать узел списка элементов файла Kotlin на основе элемента Kotlin.
* \param[in] elem элемент файла Kotlin, на основе которого создается список элементов Kotlin.
* \return указатель на список элементов файла Kotlin.
*/
struct KotlinFileElementListNode* createKotlinFileElementListNode(struct ExpressionListNode* elem);