#ifndef COLORTERM_HPP
#define COLORTERM_HPP

#include <ostream>

namespace ColorTerm {
	enum Code {
		FG_RED      = 31,
		FG_GREEN    = 32,
		FG_BLUE     = 34,
		FG_DEFAULT  = 39,
		BG_RED      = 41,
		BG_GREEN    = 42,
		BG_BLUE     = 44,
		BG_DEFAULT  = 49
	};
	class Edit {
		Code code;
		public:
		Edit(Code pCode) : code(pCode) {}
		friend std::ostream& operator<<(std::ostream& os, const Edit& color) {
				return os << "\033[" << color.code << "m";
			}
	};

}
#endif /* COLORTERM_HPP */

