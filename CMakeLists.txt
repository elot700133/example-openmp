CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(ProjectName)

#FIND_PACKAGE(LIBRARY)

INCLUDE_DIRECTORIES(
  ${LIBRARY_INCLUDE_DIR}
)

#ADD_SUBDIRECTORY(src)

SET(SOURCE 
  #ex01.cpp
main.cpp
omp_hello.cpp
omp_mm.cpp
omp_orphans.cpp
omp_workshare1.cpp
omp_workshare2.cpp
)
SET(CMAKE_CXX_FLAGS "-fopenmp")
ADD_EXECUTABLE(ProjectName ${SOURCE})

TARGET_LINK_LIBRARIES(ProjectName
  ${LIBRARY_LIBRARIES}
)
