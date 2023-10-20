enum exprType{
    int_type, id_type, plust_type, assiyn_type, array_type, func_typr 
}
class expr_node{
    public: 
    exprType type;
    int value;
    string strID;
    expr_node *left;
    expr_node *right;
    expr_list_node *expr_list;
    int Id_node;
    std::vector <expr_node*> *params;
    static expr_node *createExprFromBinPlus(exprType typeOpr, expr_node *leftOpr, expr_node *rightOpr);


}