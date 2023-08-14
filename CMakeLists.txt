cmake_minimum_required(VERSION 3.15)
project(vegan-paradise VERSION 1.0 DESCRIPTION "A discord bot")

add_subdirectory(libs/DPP)
add_subdirectory(libs/spdlog)

add_executable(${PROJECT_NAME}
   src/main.cpp
        src/commands/links/dominion.cpp
        src/commands/links/dominion.hpp
        src/commands/links/earthlings.cpp
        src/utils/postLink.cpp
        src/utils/postLink.hpp
        src/commands/links/eisen.cpp
        src/commands/links/protein.cpp
        src/commands/links/earthlings.hpp
        src/commands/links/eisen.hpp
        src/commands/links/protein.hpp
        src/commands/links/bingo.cpp
        src/utils/secrets.hpp 
)

target_link_libraries(${PROJECT_NAME}
    dpp
    spdlog
)

target_include_directories(${PROJECT_NAME} PRIVATE
    libs/DPP/include
    libs/spdlog/include
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)