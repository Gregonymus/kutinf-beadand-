cmake_minimum_required (VERSION 2.8.12)
 
project (Stars)

add_executable(Stars main.cpp)

add_custom_command (
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}
  COMMAND Stars  
  DEPENDS Stars  
  )

add_custom_target(futtatas
  TARGET_NAME program_futtatasa
  DEPENDS ${CMAKE_CURRENT_BINARY_DIR})

find_package(Gnuplot)


add_custom_target(plottolas
   TARGET_NAME plot
   DEPENDS futtatas)