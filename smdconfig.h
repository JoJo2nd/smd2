
#if defined(_WIN32)
#  if defined(libsmd_EXPORTS)
#    define SMD_API __declspec(dllexport)
#  else
#    define SMD_API __declspec(dllimport)
#  endif
#else // non windows
#  define SMD_API
#endif
