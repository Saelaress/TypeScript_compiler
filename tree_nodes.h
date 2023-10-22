#include <string>
#include <vector>

enum exprType
{
    int_type,
    id_type,
    plus_type,
    assign_type,
    array_type,
    func_type
};

class expr_node
{
public:
    exprType type;
    int value;
    int Id_node;
    std::string strID;
    expr_node *left;
    expr_node *right;
    std::vector<expr_node *> *params;

    static expr_node *create_expr_from_int(int val);
    static expr_node *create_expr_from_id(std::string &id);
    static expr_node *create_expr_from_bin_op(exprType typeOpr, expr_node *leftOpr, expr_node *rightOpr);
    static expr_node *create_expr_from_fun(std::string &id, std::vector<expr_node *> *params_list);
    static int max_id;
};
