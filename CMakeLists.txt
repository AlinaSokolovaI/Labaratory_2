cmake_minimum_required(VERSION 3.21)



# так пишутся комментарии



project(ASPM181)


add_executable(main main181.cpp Initializations181.cpp)

add_subdirectory(MatPart181_2)

add_subdirectory(MyTest)


add_subdirectory(googletest-main)



target_link_libraries(main math_part)

target_link_libraries(main math_part)




target_include_directories(main PUBLIC "D:/BETA/tehn_progr/boost_1_77_0")


target_link_directories(main PUBLIC "D:/BETA/tehn_progr/boost_1_77_0/stage/lib")

