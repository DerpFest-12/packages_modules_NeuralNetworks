// Generated from lstm3_state2_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::lstm3_state2_float16 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, lstm3_state2_float16) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::lstm3_state2_float16
TEST_AVAILABLE_SINCE(V1_2, lstm3_state2_float16, generated_tests::lstm3_state2_float16::CreateModel)

namespace generated_tests::lstm3_state2_float16 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, lstm3_state2_float16_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::lstm3_state2_float16

namespace generated_tests::lstm3_state2_float16 {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm3_state2_float16_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::lstm3_state2_float16
TEST_AVAILABLE_SINCE(V1_2, lstm3_state2_float16_all_inputs_as_internal, generated_tests::lstm3_state2_float16::CreateModel_all_inputs_as_internal)

namespace generated_tests::lstm3_state2_float16 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, lstm3_state2_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::lstm3_state2_float16
