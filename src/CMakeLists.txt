file(GLOB_RECURSE all_srcs CONFIGURE_DEPENDS *.cc)
add_executable(main ${all_srcs})