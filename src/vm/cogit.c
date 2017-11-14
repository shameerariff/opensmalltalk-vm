/* Automatically generated by
	Cogit VMMaker.oscog-eem.2278 uuid: 4fd41cee-a3bd-48f4-b02e-cf367a331eec
 */

#if !SysV && !_WIN64
# define SysV 1
#endif

#if SysV && (defined(x86_64) || defined(__amd64) || defined(__x86_64) || defined(__amd64__) || defined(__x86_64__) || defined(_M_AMD64) || defined(_M_X64))

#	include "cogitX64SysV.c"

#elif _WIN64 && (defined(x86_64) || defined(__amd64) || defined(__x86_64) || defined(__amd64__) || defined(__x86_64__) || defined(_M_AMD64) || defined(_M_X64))

#	include "cogitX64WIN64.c"

#else
#	error As yet no Cogit implementation appears to exist for your platform.
#	error Consider implementing it, starting by adding a subclass of CogAbstractInstruction.
#endif
