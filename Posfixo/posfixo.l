%{
#include "posfixo.tab.h"
%}

%%

[\n\t ]  

\+    { return MAIS; }
\-    { return MENOS; }
\*    { return ASTERISCO;  }
\/    { return DIV;  }
or	  { return OR;   }
and   { return AND;  }
a     { return IDENT_A;   }
b	  { return IDENT_B;	  }

%%

