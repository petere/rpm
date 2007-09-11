#ifndef H_UGID
#define H_UGID

/** \ingroup rpmio
 * \file rpmio/ugid.h
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * These may be called w/ a NULL argument to flush the cache -- they return
 * -1 if the user can't be found.
 */
int     unameToUid(const char * thisUname, uid_t * uid);
int     gnameToGid(const char * thisGname, gid_t * gid);

/*
 * Call w/ -1 to flush the cache, returns NULL if the user can't be found.
 */
char * uidToUname(uid_t uid);
char * gidToGname(gid_t gid);

#ifdef __cplusplus
}
#endif

#endif  /* H_UGID */

