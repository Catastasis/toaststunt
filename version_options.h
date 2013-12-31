/******************************************************************/
/*  Automatically generated file; changes made here may be lost   */
/*  If options.h changes, edit and rerun version_opt_gen.pl       */
/******************************************************************/
#define _DINT1(OPT) _DINT(#OPT,OPT)
#define _DSTR1(OPT) _DSTR(#OPT,OPT)
#if !defined(NETWORK_PROTOCOL)
_DNDEF("NETWORK_PROTOCOL")
#elif NETWORK_PROTOCOL == NP_SINGLE
_DSTR("NETWORK_PROTOCOL","NP_SINGLE")
#elif NETWORK_PROTOCOL == NP_TCP
_DSTR("NETWORK_PROTOCOL","NP_TCP")
#  ifdef DEFAULT_PORT
_DINT1(DEFAULT_PORT)
#  else
_DNDEF("DEFAULT_PORT")
#  endif
#elif NETWORK_PROTOCOL == NP_LOCAL
_DSTR("NETWORK_PROTOCOL","NP_LOCAL")
#  ifdef DEFAULT_CONNECT_FILE
_DSTR1(DEFAULT_CONNECT_FILE)
#  else
_DNDEF("DEFAULT_CONNECT_FILE")
#  endif
#else
_DINT1(NETWORK_PROTOCOL)
#endif
#if !defined(NETWORK_STYLE)
_DNDEF("NETWORK_STYLE")
#elif NETWORK_STYLE == NS_SYSV
_DSTR("NETWORK_STYLE","NS_SYSV")
#elif NETWORK_STYLE == NS_BSD
_DSTR("NETWORK_STYLE","NS_BSD")
#else
_DINT1(NETWORK_STYLE)
#endif
#if !defined(MPLEX_STYLE)
_DNDEF("MPLEX_STYLE")
#elif MPLEX_STYLE == MP_POLL
_DSTR("MPLEX_STYLE","MP_POLL")
#elif MPLEX_STYLE == MP_FAKE
_DSTR("MPLEX_STYLE","MP_FAKE")
#elif MPLEX_STYLE == MP_SELECT
_DSTR("MPLEX_STYLE","MP_SELECT")
#else
_DINT1(MPLEX_STYLE)
#endif
#if !defined(OUTBOUND_NETWORK)
_DNDEF("OUTBOUND_NETWORK")
#elif OUTBOUND_NETWORK == 1
_DSTR("OUTBOUND_NETWORK","ON")
#elif OUTBOUND_NETWORK == 0
_DSTR("OUTBOUND_NETWORK","OFF")
#else
_DINT1(OUTBOUND_NETWORK)
#endif
#ifdef DEFAULT_CONNECT_TIMEOUT
_DINT1(DEFAULT_CONNECT_TIMEOUT)
#else
_DNDEF("DEFAULT_CONNECT_TIMEOUT")
#endif
#ifdef MAX_QUEUED_OUTPUT
_DINT1(MAX_QUEUED_OUTPUT)
#else
_DNDEF("MAX_QUEUED_OUTPUT")
#endif
#ifdef MAX_QUEUED_INPUT
_DINT1(MAX_QUEUED_INPUT)
#else
_DNDEF("MAX_QUEUED_INPUT")
#endif
#ifdef PLAYER_HUH
_DDEF("PLAYER_HUH")
#else
_DNDEF("PLAYER_HUH")
#endif
#ifdef UNFORKED_CHECKPOINTS
_DDEF("UNFORKED_CHECKPOINTS")
#else
_DNDEF("UNFORKED_CHECKPOINTS")
#endif
#ifdef BYTECODE_REDUCE_REF
_DDEF("BYTECODE_REDUCE_REF")
#else
_DNDEF("BYTECODE_REDUCE_REF")
#endif
#ifdef STRING_INTERNING
_DDEF("STRING_INTERNING")
#else
_DNDEF("STRING_INTERNING")
#endif
#ifdef MEMO_STRLEN
_DDEF("MEMO_STRLEN")
#else
_DNDEF("MEMO_STRLEN")
#endif
#ifdef MEMO_VALUE_BYTES
_DDEF("MEMO_VALUE_BYTES")
#else
_DNDEF("MEMO_VALUE_BYTES")
#endif
#ifdef LOG_COMMANDS
_DDEF("LOG_COMMANDS")
#else
_DNDEF("LOG_COMMANDS")
#endif
#ifdef INPUT_APPLY_BACKSPACE
_DDEF("INPUT_APPLY_BACKSPACE")
#else
_DNDEF("INPUT_APPLY_BACKSPACE")
#endif
#ifdef IGNORE_PROP_PROTECTED
_DDEF("IGNORE_PROP_PROTECTED")
#else
_DNDEF("IGNORE_PROP_PROTECTED")
#endif
#ifdef OUT_OF_BAND_PREFIX
_DSTR1(OUT_OF_BAND_PREFIX)
#else
_DNDEF("OUT_OF_BAND_PREFIX")
#endif
#ifdef OUT_OF_BAND_QUOTE_PREFIX
_DSTR1(OUT_OF_BAND_QUOTE_PREFIX)
#else
_DNDEF("OUT_OF_BAND_QUOTE_PREFIX")
#endif
#ifdef DEFAULT_MAX_STACK_DEPTH
_DINT1(DEFAULT_MAX_STACK_DEPTH)
#else
_DNDEF("DEFAULT_MAX_STACK_DEPTH")
#endif
#ifdef DEFAULT_FG_TICKS
_DINT1(DEFAULT_FG_TICKS)
#else
_DNDEF("DEFAULT_FG_TICKS")
#endif
#ifdef DEFAULT_BG_TICKS
_DINT1(DEFAULT_BG_TICKS)
#else
_DNDEF("DEFAULT_BG_TICKS")
#endif
#ifdef DEFAULT_FG_SECONDS
_DINT1(DEFAULT_FG_SECONDS)
#else
_DNDEF("DEFAULT_FG_SECONDS")
#endif
#ifdef DEFAULT_BG_SECONDS
_DINT1(DEFAULT_BG_SECONDS)
#else
_DNDEF("DEFAULT_BG_SECONDS")
#endif
#ifdef PATTERN_CACHE_SIZE
_DINT1(PATTERN_CACHE_SIZE)
#else
_DNDEF("PATTERN_CACHE_SIZE")
#endif
#ifdef DEFAULT_MAX_STRING_CONCAT
_DINT1(DEFAULT_MAX_STRING_CONCAT)
#else
_DNDEF("DEFAULT_MAX_STRING_CONCAT")
#endif
#ifdef MIN_STRING_CONCAT_LIMIT
_DINT1(MIN_STRING_CONCAT_LIMIT)
#else
_DNDEF("MIN_STRING_CONCAT_LIMIT")
#endif
#ifdef DEFAULT_MAX_LIST_VALUE_BYTES
_DINT1(DEFAULT_MAX_LIST_VALUE_BYTES)
#else
_DNDEF("DEFAULT_MAX_LIST_VALUE_BYTES")
#endif
#ifdef MIN_LIST_VALUE_BYTES_LIMIT
_DINT1(MIN_LIST_VALUE_BYTES_LIMIT)
#else
_DNDEF("MIN_LIST_VALUE_BYTES_LIMIT")
#endif
#ifdef DEFAULT_MAX_MAP_VALUE_BYTES
_DINT1(DEFAULT_MAX_MAP_VALUE_BYTES)
#else
_DNDEF("DEFAULT_MAX_MAP_VALUE_BYTES")
#endif
#ifdef MIN_MAP_VALUE_BYTES_LIMIT
_DINT1(MIN_MAP_VALUE_BYTES_LIMIT)
#else
_DNDEF("MIN_MAP_VALUE_BYTES_LIMIT")
#endif
