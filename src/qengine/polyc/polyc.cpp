#include "polyc.hpp"

namespace qengine {

	namespace polyc {
		/* have our globals been initialized? */
		bool polyc::initialized = false;

		/*Singleton instance(s) of seeding values*/
		uintptr_t polyc::ciph_x[16]{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };

		uintptr_t polyc::ciph_y[16]{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };

		uintptr_t polyc::ciph_z[16]{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };

		unsigned char polyc::indice_map_x[4]{ 0x0, 0x0, 0x0, 0x0 };

		unsigned char polyc::indice_map_y[8]{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };

		unsigned char polyc::indice_map_z[12]{ 0x0, 0x0, 0x0, 0x0 ,0x0, 0x0, 0x0, 0x0 ,0x0, 0x0, 0x0, 0x0 };
	}

}