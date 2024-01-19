#pragma once
#include "nodes.h"

/// Ссылка на корневой узел программы.
struct KotlinFileNode *root;

/*------------------------------------ Expression -------------------------------------*/

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

/*! Создать узел оператора логического отрицания.
* \param[in] value указатель на операнд.
* \return указатель на узел оператора логического отрицания.
*/
struct ExpressionNode* createNotExpressionNode(struct ExpressionNode* value);

/*! Создать узел выражения идентификатора.
* \param[in] ident строка идентификатора.
* \return указатель на узел Expression ID.
*/
struct ExpressionNode* createIDExpressionNode(char* ident);

/*! Создать узел оператора присвоения.
 * \param[in] leftOperand указатель на левый операнд - экземаляр ExpressionNode.
 * \param[in] rightOperand указатель на правый операнд - экземаляр ExpressionNode.
 * \return указатель на узел оператора присвоения.
 */
struct ExpressionNode* createAssignmentExpressionNode(struct ExpressionNode* leftOperand, struct ExpressionNode* rightOperand);


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


/*------------------------------------ Statement -------------------------------------*/

/*! Создать узел StatementNode на основе узла ExpressionNode.
* \param[in] expr указатель на экземпляр ExpressionNode, на основе которого создается StatementNode.
* \return указатель на созданный экземпляр StatementNode.
*/
struct StatementNode* createStatementFromExpression(struct ExpressionNode* expr);

/*! Создать пустой узел Statement.
* \return указатель на пустой узел Statement.
*/
struct StatementNode* createEmptyStatement();

/*! Создать узел Return Statement.
* \param[in] expr выражение, результат которого возвращается; может быть NULL, если ничего не возвращается.
* \return созданный узел Return Stmt.
*/
struct StatementNode* createReturnStatement(struct ExpressionNode* expr);

/*! Создать узел StatementNode для цикла while.
* \param[in] cond Условие выполнения цикла - указатель на узел  Expression.
* \param[in] stmt Тело цикла, состоящее из одного узла Statement.
* \return Созданный узел Statement.
*/
struct StatementNode* createWhileStatement(struct ExpressionNode* cond, struct StatementNode* stmt);

/*! Создать узел StatementNode для цикла do..while.
* \param[in] cond Условие выполнения цикла - указатель на узел Expression.
* \param[in] stmt Тело цикла, состоящее из одного узла Statement.
* \return Созданный узел Statement.
*/
struct StatementNode* createDoWhileStatement(struct ExpressionNode* cond, struct StatementNode* stmt);

/*! Создать узел StatementNode для условного оператора if.
 * \param[in] cond Условие выполнения ветки if - указатель на узел Expression.
 * \param[in] trueStmt Тело ветки if, состоящее из одного узла Statement.
 * \param[in] falseStmt Тело ветки else, состоящее из одного узла Statement (может быть NULL).
 * \return Созданный узел Statement.
 */
struct StatementNode* createIfStatement(struct ExpressionNode* cond, struct StatementNode* trueStmt, struct StatementNode* falseStmt);

/*! Создать узел StatementNode на основе узла BlockStatement.
* \param[in] blockStmt указатель на экземпляр BlockStatement, на основе которого создается StatementNode.
* \return указатель на созданный экземпляр StatementNode.
*/
struct StatementNode* createStatementFromBlockStatement(struct BlockStatementNode* blockStmt);

/*! Создать узел StatementNode для цикла while.
* \param[in] cond Условие выполнения цикла - указатель на узел  Expression.
* \param[in] stmt Тело цикла, состоящее из одного узла Statement.
* \return Созданный узел Statement.
*/
struct StatementNode* createIfStatement(struct ExpressionNode* cond, struct StatementNode* stmt);


/*------------------------------------ StatementList -------------------------------------*/

/*! Создать узел списка Statement.
* \param[in] firstChild указатель на первый элемент списка; для пустого списка - NULL.
* \return указатель на созданный экземпляр узла списка Statement.
*/
struct StatementListNode* createStatementListNode(struct StatementNode* firstChild);

/*! Добавить StatementNode к списку Statement.
* \param[in,out] list список, к которому добавляется новый узел.
* \param[in] statement добавляемый узел Statement.
* \return измененный список Statement (тот же самый, что и параметр list).
*/
struct StatementListNode* addStatementToStatementList(struct StatementListNode* list, struct StatementNode* statement);
