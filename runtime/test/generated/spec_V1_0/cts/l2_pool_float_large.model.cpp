// Generated from l2_pool_float_large.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::l2_pool_float_large {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad0 = model->addOperand(&type1);
  auto stride_width = model->addOperand(&type1);
  auto stride_height = model->addOperand(&type1);
  auto filter_width = model->addOperand(&type1);
  auto filter_height = model->addOperand(&type1);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_width_init[] = {1};
  model->setOperandValue(stride_width, stride_width_init, sizeof(int32_t) * 1);
  static int32_t stride_height_init[] = {1};
  model->setOperandValue(stride_height, stride_height_init, sizeof(int32_t) * 1);
  static int32_t filter_width_init[] = {2};
  model->setOperandValue(filter_width, filter_width_init, sizeof(int32_t) * 1);
  static int32_t filter_height_init[] = {2};
  model->setOperandValue(filter_height, filter_height_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, pad0, pad0, pad0, pad0, stride_width, stride_height, filter_width, filter_height, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_float_large
namespace generated_tests::l2_pool_float_large {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad0 = model->addOperand(&type1);
  auto stride_width = model->addOperand(&type1);
  auto stride_height = model->addOperand(&type1);
  auto filter_width = model->addOperand(&type1);
  auto filter_height = model->addOperand(&type1);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_width_init[] = {1};
  model->setOperandValue(stride_width, stride_width_init, sizeof(int32_t) * 1);
  static int32_t stride_height_init[] = {1};
  model->setOperandValue(stride_height, stride_height_init, sizeof(int32_t) * 1);
  static int32_t filter_width_init[] = {2};
  model->setOperandValue(filter_width, filter_width_init, sizeof(int32_t) * 1);
  static int32_t filter_height_init[] = {2};
  model->setOperandValue(filter_height, filter_height_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, pad0, pad0, pad0, pad0, stride_width, stride_height, filter_width, filter_height, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_float_large
namespace generated_tests::l2_pool_float_large {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad0 = model->addOperand(&type1);
  auto stride_width = model->addOperand(&type1);
  auto stride_height = model->addOperand(&type1);
  auto filter_width = model->addOperand(&type1);
  auto filter_height = model->addOperand(&type1);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_width_init[] = {1};
  model->setOperandValue(stride_width, stride_width_init, sizeof(int32_t) * 1);
  static int32_t stride_height_init[] = {1};
  model->setOperandValue(stride_height, stride_height_init, sizeof(int32_t) * 1);
  static int32_t filter_width_init[] = {2};
  model->setOperandValue(filter_width, filter_width_init, sizeof(int32_t) * 1);
  static int32_t filter_height_init[] = {2};
  model->setOperandValue(filter_height, filter_height_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, pad0, pad0, pad0, pad0, stride_width, stride_height, filter_width, filter_height, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_float_large
namespace generated_tests::l2_pool_float_large {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad0 = model->addOperand(&type1);
  auto stride_width = model->addOperand(&type1);
  auto stride_height = model->addOperand(&type1);
  auto filter_width = model->addOperand(&type1);
  auto filter_height = model->addOperand(&type1);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_width_init[] = {1};
  model->setOperandValue(stride_width, stride_width_init, sizeof(int32_t) * 1);
  static int32_t stride_height_init[] = {1};
  model->setOperandValue(stride_height, stride_height_init, sizeof(int32_t) * 1);
  static int32_t filter_width_init[] = {2};
  model->setOperandValue(filter_width, filter_width_init, sizeof(int32_t) * 1);
  static int32_t filter_height_init[] = {2};
  model->setOperandValue(filter_height, filter_height_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, pad0, pad0, pad0, pad0, stride_width, stride_height, filter_width, filter_height, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_float_large