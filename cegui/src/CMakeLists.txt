set( CEGUI_TARGET_NAME ${CEGUI_BASE_LIBNAME} )

# we do not use cegui_gather_files() here since our needs are more complex.
file (GLOB CORE_SOURCE_FILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" *.cpp)
file (GLOB VIEW_SOURCE_FILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" views/*.cpp)
file (GLOB WIDGET_SOURCE_FILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" widgets/*.cpp)
file (GLOB FALAGARD_SOURCE_FILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" falagard/*.cpp)
file (GLOB SVG_SOURCE_FILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" svg/*.cpp)
set (CORE_SOURCE_FILES ${CORE_SOURCE_FILES} ${VIEW_SOURCE_FILES} ${WIDGET_SOURCE_FILES} ${FALAGARD_SOURCE_FILES} ${SVG_SOURCE_FILES})

file (GLOB CORE_HEADER_FILES ../include/CEGUI/*.h)
file (GLOB VIEW_HEADER_FILES ../include/CEGUI/views/*.h)
file (GLOB WIDGET_HEADER_FILES ../include/CEGUI/widgets/*.h)
file (GLOB FALAGARD_HEADER_FILES ../include/CEGUI/falagard/*.h)
file (GLOB SVG_HEADER_FILES ../include/CEGUI/svg/*.h)

list (APPEND CORE_HEADER_FILES
    ${CMAKE_CURRENT_BINARY_DIR}/../include/CEGUI/Config.h
    ${CMAKE_CURRENT_BINARY_DIR}/../include/CEGUI/ModuleConfig.h
    ${CMAKE_CURRENT_BINARY_DIR}/../include/CEGUI/Version.h
)

# We don't append all to CORE_HEADER_FILES since that would mess up installation
# on systems where files are installed.
set (ALL_HEADER_FILES ${CORE_HEADER_FILES} ${VIEW_HEADER_FILES} ${WIDGET_HEADER_FILES} ${FALAGARD_HEADER_FILES} ${SVG_HEADER_FILES})

# never compile this directly, it's included in another file
list (REMOVE_ITEM CORE_SOURCE_FILES minibidi.cpp)

if (NOT CEGUI_HAS_DEFAULT_LOGGER)
    list (REMOVE_ITEM CORE_SOURCE_FILES DefaultLogger.cpp)
endif()

if (NOT CEGUI_HAS_FREETYPE)
    list (REMOVE_ITEM CORE_SOURCE_FILES FreeTypeFont.cpp)
endif()

if (NOT CEGUI_HAS_PCRE_REGEX)
    list (REMOVE_ITEM CORE_SOURCE_FILES PCRERegexMatcher.cpp)
endif()

if (NOT CEGUI_USE_FRIBIDI)
    list (REMOVE_ITEM CORE_SOURCE_FILES FribidiVisualMapping.cpp)
endif()

if (NOT CEGUI_USE_MINIBIDI)
    list (REMOVE_ITEM CORE_SOURCE_FILES MinibidiVisualMapping.cpp)
endif ()

if (NOT CEGUI_HAS_MINIZIP_RESOURCE_PROVIDER)
    list (REMOVE_ITEM CORE_SOURCE_FILES MinizipResourceProvider.cpp)
endif()

if (WIN32)
    list (REMOVE_ITEM CORE_SOURCE_FILES IconvStringTranscoder.cpp)
else()
    list (REMOVE_ITEM CORE_SOURCE_FILES Win32StringTranscoder.cpp)
endif()

if (NOT WIN32)
    list (REMOVE_ITEM CORE_SOURCE_FILES Win32ClipboardProvider.cpp)
endif()

if (NOT ANDROID)
    list (REMOVE_ITEM CORE_SOURCE_FILES AndroidUtils.cpp)
    list (REMOVE_ITEM CORE_HEADER_FILES AndroidUtils.h)
endif()

# we do not use the common header install function since we need to install to
# multiple sub-dirs.
cegui_add_library_impl(${CEGUI_TARGET_NAME} FALSE CORE_SOURCE_FILES ALL_HEADER_FILES TRUE FALSE)
if (ANDROID)
    target_link_libraries (${CEGUI_TARGET_NAME} log)
endif ()

source_group("Source Files\\view" FILES ${VIEW_SOURCE_FILES})
source_group("Source Files\\widget" FILES ${WIDGET_SOURCE_FILES})
source_group("Source Files\\falagard" FILES ${FALAGARD_SOURCE_FILES})
source_group("Source Files\\svg" FILES ${SVG_SOURCE_FILES})

source_group("Header Files\\view" FILES ${VIEW_HEADER_FILES})
source_group("Header Files\\widget" FILES ${WIDGET_HEADER_FILES})
source_group("Header Files\\falagard" FILES ${FALAGARD_HEADER_FILES})
source_group("Header Files\\svg" FILES ${SVG_HEADER_FILES})

if (NOT WIN32 AND NOT ANDROID)
    cegui_add_dependency(${CEGUI_TARGET_NAME} ICONV)
endif()

if (CEGUI_HAS_FREETYPE)
    cegui_add_dependency(${CEGUI_TARGET_NAME} FREETYPE)
endif ()

if (CEGUI_HAS_PCRE_REGEX)
    cegui_add_dependency(${CEGUI_TARGET_NAME} PCRE)
endif ()

if (CEGUI_USE_FRIBIDI)
    cegui_add_dependency(${CEGUI_TARGET_NAME} FRIBIDI)
endif ()

if (CEGUI_HAS_MINIZIP_RESOURCE_PROVIDER)
    cegui_add_dependency(${CEGUI_TARGET_NAME} MINIZIP)
endif ()

if (WIN32 AND NOT MINGW)
    cegui_target_link_libraries(${CEGUI_TARGET_NAME} winmm debug DbgHelp)
elseif (UNIX AND NOT APPLE AND NOT ANDROID)
    # This is intentionally not using 'cegui_target_link_libraries'
    target_link_libraries(${CEGUI_TARGET_NAME} ${CMAKE_DL_LIBS})
elseif (MINGW)
    cegui_target_link_libraries(${CEGUI_TARGET_NAME} ${CMAKE_DL_LIBS})
endif()

if (APPLE AND CEGUI_BUILD_SHARED_LIBS_WITH_STATIC_DEPENDENCIES)
    set_property(TARGET ${CEGUI_TARGET_NAME} APPEND PROPERTY LINK_FLAGS "-framework Carbon")
endif()

install(FILES ${CORE_HEADER_FILES} DESTINATION ${CEGUI_INCLUDE_INSTALL_DIR}/CEGUI)
install(FILES ${VIEW_HEADER_FILES} DESTINATION ${CEGUI_INCLUDE_INSTALL_DIR}/CEGUI/views)
install(FILES ${WIDGET_HEADER_FILES} DESTINATION ${CEGUI_INCLUDE_INSTALL_DIR}/CEGUI/widgets)
install(FILES ${FALAGARD_HEADER_FILES} DESTINATION ${CEGUI_INCLUDE_INSTALL_DIR}/CEGUI/falagard)
install(FILES ${SVG_HEADER_FILES} DESTINATION ${CEGUI_INCLUDE_INSTALL_DIR}/CEGUI/svg)

