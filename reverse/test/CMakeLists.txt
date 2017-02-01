include_directories(include)

file(GLOB ucpps unit/*.cpp)
file(GLOB uhpps unit/*.hpp)

add_executable(unit unit.cpp ${ucpps} ${uhpps})
target_link_libraries(unit reverse)