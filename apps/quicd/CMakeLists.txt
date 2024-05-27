
seastar_add_app (quicd
  SOURCES
    main.cc)

target_include_directories (app_quicd
  PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

set(BORINGSSL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/boringssl)
message(BORINGSSL_DIR " ${BORINGSSL_DIR}")
add_subdirectory(boringssl)
add_subdirectory(lsquic)
