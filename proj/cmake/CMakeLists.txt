cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
set(CMAKE_VERBOSE_MAKEFILE ON)

project(App)
get_filename_component(CINDER_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../../../cinder" ABSOLUTE)
get_filename_component(APP_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)

list( APPEND SRC_FILES ${APP_PATH}/src/App.cpp ${APP_PATH}/src/AppState.cpp ${APP_PATH}/src/AlphaState.cpp ${APP_PATH}/src/BetaState.cpp )

include("${CINDER_PATH}/proj/cmake/modules/cinderMakeApp.cmake")

ci_make_app(
    SOURCES ${SRC_FILES}
    CINDER_PATH ${CINDER_PATH}
    )
