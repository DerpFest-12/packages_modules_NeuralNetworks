// Generated file (from: lsh_projection.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type2(Type::TENSOR_FLOAT32, {3});
  OperandType type0(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type3(Type::TENSOR_INT32, {1});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type4(Type::TENSOR_INT32, {4, 2});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->setInputsAndOutputs(
    {hash, lookup, weight, type_param},
    {output});
  assert(model->isValid());
}
