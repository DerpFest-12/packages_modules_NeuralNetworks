// Generated from unidirectional_sequence_lstm_cifg_peephole.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_cifg_peephole {

TEST_F(GeneratedTest, unidirectional_sequence_lstm_cifg_peephole) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_cifg_peephole) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_cifg_peephole) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_cifg_peephole


namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole

namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_cifg_peephole {

TEST_F(GeneratedTest, unidirectional_sequence_lstm_cifg_peephole_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, unidirectional_sequence_lstm_cifg_peephole_all_inputs_as_internal) {
    Execute(device, ::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, unidirectional_sequence_lstm_cifg_peephole_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::unidirectional_sequence_lstm_cifg_peephole

