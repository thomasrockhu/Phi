include(TestFail)

# Selftest
compile_failure_test(NAME Selftest_CompileFail SOURCE "src/Selftest/Compile.fail.cpp")

# Phi/Utility
compile_failure_test(NAME FloatingPoint_ConstructFromInt SOURCE
                     "src/Utility/FloatingPoint.int.fail.cpp")
compile_failure_test(NAME Integer_ConstructFromBool SOURCE "src/Utility/Integer.bool.fail.cpp")
compile_failure_test(NAME Integer_ConstructFromChar SOURCE "src/Utility/Integer.char.fail.cpp")
compile_failure_test(NAME Integer_ConstructFromFloat SOURCE "src/Utility/Integer.float.fail.cpp")
