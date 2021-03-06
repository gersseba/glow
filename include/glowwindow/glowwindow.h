#pragma once

// NOTE: don't export stl stuff (e.g. containers):
// http://www.unknownroad.com/rtfm/VisualStudio/warningC4251.html
// don't do it: http://support.microsoft.com/kb/q168958/

#ifdef _MSC_VER
#	define __API_EXPORT_DECLARATION __declspec(dllexport)
#	define __API_IMPORT_DECLARATION __declspec(dllimport)
#elif __GNUC__
#	define __API_EXPORT_DECLARATION
#	define __API_IMPORT_DECLARATION
#else
#	define __API_EXPORT_DECLARATION
#	define __API_IMPORT_DECLARATION
#endif

#ifdef GLOWWINDOW_EXPORTS
#	define GLOWWINDOW_API __API_EXPORT_DECLARATION
#else
#	define GLOWWINDOW_API __API_IMPORT_DECLARATION
#endif

#ifdef N_DEBUG
#	define IF_DEBUG(statement)
#	define IF_NDEBUG(statement) statement
#else
#	define IF_DEBUG(statement) statement
#	define IF_NDEBUG(statement)
#endif // N_DEBUG
