set(library_name dataloader_gui)

# --- source and include files ---
set(include_dirs ${CMAKE_CURRENT_SOURCE_DIR}/widgets
                 ${CMAKE_CURRENT_SOURCE_DIR}/utilities)

set(source_files)
set(include_files)

foreach(dir ${include_dirs})
    file(GLOB source ${dir}/*.cpp)
    file(GLOB include ${dir}/*.h)
    list(APPEND source_files ${source})
    list(APPEND include_files ${include})
endforeach()

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(${library_name} STATIC ${source_files} ${include_files} ${resource_files})

target_include_directories(${library_name} PUBLIC ${include_dirs})

target_link_libraries(${library_name} Qt5::Core Qt5::Gui Qt5::Widgets)
