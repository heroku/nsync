#ifndef ERL_NIF_COMPAT_H_
#define ERL_NIF_COMPAT_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <erl_nif.h>

#define enif_open_resource_type_compat(E, N, D, F, T) \
    enif_open_resource_type(E, NULL, N, D, F, T)

#define enif_alloc_resource_compat(E, T, S) \
    enif_alloc_resource(T, S)

#define enif_release_resource_compat(E, H) \
    enif_release_resource(H)

#define enif_alloc_binary_compat(E, S, B) \
    enif_alloc_binary(S, B)

#define enif_release_binary_compat(E, B) \
    enif_release_binary(B)

#define enif_realloc_binary_compat(E, B, S) \
    enif_realloc_binary(B, S)

#define enif_alloc_compat(E, S) \
    enif_alloc(S)

#define enif_free_compat(E, P) \
    enif_free(P)


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* ERL_NIF_COMPAT_H_ */
