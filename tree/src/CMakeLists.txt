add_executable(tree main.cpp)

add_library(
    treeL
    tree.hpp
    tree.cpp
)
add_library(
    node
    node.hpp
    node.cpp
)
target_link_libraries( tree treeL node)