// #include <stddef.h>
// #include <stdlib.h>
// #include <sys/types.h>

// #include <cmath>
#include <iostream>
// #include <limits>

#define __EXPORT __attribute__((__visibility__("default")))

#ifdef __cplusplus
#define __BEGIN_CDECLS1 extern "C" {
#define __END_CDECLS1 }
#else
#define __BEGIN_CDECLS1
#define __END_CDECLS1
#endif

// // Sanity test.
// __EXPORT intptr_t TestSimpleAddition(intptr_t (*add)(int, int)) {
//   const intptr_t result = add(10, 20);
//   std::cout << "result " << result << "\n";
//   CHECK_EQ(result, 30);
//   return 0;
// }

__BEGIN_CDECLS1
// Sanity test.
__EXPORT intptr_t TestSimpleAddition(intptr_t (*add)(int, int)) {
  const intptr_t result = add(10, 20);
  std::cout << "result " << result << "\n";
  // CHECK_EQ(result, 30);
  return 0;
}

__END_CDECLS1
