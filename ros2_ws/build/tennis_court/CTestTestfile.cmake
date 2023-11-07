# CMake generated Testfile for 
# Source directory: /media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court
# Build directory: /media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/copyright.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_copyright/copyright.txt" "--command" "/opt/ros/humble/bin/ament_copyright" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/cppcheck.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/cpplint.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_cpplint/cpplint.txt" "--command" "/opt/ros/humble/bin/ament_cpplint" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/flake8.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_flake8/flake8.txt" "--command" "/opt/ros/humble/bin/ament_flake8" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_flake8.cmake;63;ament_add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/lint_cmake.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/pep257.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_pep257/pep257.txt" "--command" "/opt/ros/humble/bin/ament_pep257" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/uncrustify.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/xmllint.xunit.xml" "--package-name" "tennis_court" "--output-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/build/tennis_court/test_results/tennis_court/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;88;ament_package;/media/apolline/B2C2CC8EC2CC586D/apolline/Ecole/ENSTA/M2/IS/benoit-pai-rob/ros2_ws/src/tennis_court/CMakeLists.txt;0;")
subdirs("tennis_court__py")
