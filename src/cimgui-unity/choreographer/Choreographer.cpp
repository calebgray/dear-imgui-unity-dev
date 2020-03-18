#if _MSC_VER
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API
#endif

#include "Application.h"

extern "C" {
	void EXPORT_API choreographer_load() {
		//Application_Initialize();
	}

	void EXPORT_API choreographer_update() {
		//Application_Frame();
	}

	void EXPORT_API choreographer_unload() {
		//Application_Finalize();
	}
}
