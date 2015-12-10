/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         SIP_parse_parse
#define yylex           SIP_parse_lex
#define yyerror         SIP_parse_error
#define yylval          SIP_parse_lval
#define yychar          SIP_parse_char
#define yydebug         SIP_parse_debug
#define yynerrs         SIP_parse_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "SIP_parse.y"


/******************************************************************************
* Copyright (c) 2005, 2014  Ericsson AB
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/epl-v10.html
*
* Contributors:
*   Gabor Szalai - initial implementation and initial documentation
*   Gergely Futo
*   Laszlo Skumat
*   Pinter Norbert
*   Oliver Ferenc Czerman
*   Peter Balazs
*   Koppány Csaba Béla
*   Kulcsár Endre
*   Szalai Zsolt
******************************************************************************/
//
//  File:               SIP_parse.y
//  Rev:                R14A
//  Prodnr:             CNL 113 319
//  Reference:          RFC3261, RFC2806, RFC2976, RFC3262, RFC3311, RFC3323, 
//                      RFC3325, RFC3326, RFC3265, RFC3455, RFC4244, RFC4538,
//                      RFC6442, RFC6086, RFC6050
//                      IETF Draft draft-ietf-dip-session-timer-15.txt,
//                      IETF Draft draft-levy-sip-diversion-08.txt, RFC5009
//                      IETF draft-ott-sip-serv-indication-notification-00
//                      IETF draft-holmberg-sipcore-proxy-feature-04,
//                      

/* C declarations */
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "memory.h"

#include "SIPmsg_Types.hh"

#define YYDEBUG 1
using namespace SIPmsg__Types;
extern const char *myinputptr;
extern const char *myinputlim;
  extern void init_SIP_parse_lex();
  struct yy_buffer_state;
  extern yy_buffer_state *SIP_parse__scan_bytes(const char*, int);
  extern void SIP_parse__delete_buffer(yy_buffer_state*);
extern int SIP_parse_error(const char *);
extern int SIP_parse_lex();
extern int SIP_parse_parse();
extern void initcounters();
extern int SIP_parse_lex_destroy();
//Response *msgptr;

RequestLine *rqlineptr;
StatusLine *stlineptr;
MessageHeader *headerptr;
PDU__SIP *msgptr;
int wildcarded_enabled_parser;

// header part pointers
extern SipUrl *uriptr;
extern GenericParam__List *paramptr;
extern OptionTag__List *optptr;
extern RouteBody__List *routeptr;


// parameter counters
extern int paramcount;
extern int urlparamcount;
extern int headercount;
extern int optioncount;
extern int rcount;

// header counters
extern int acceptcount;
extern int aceptenccount;
extern int acceptlangcount;
extern int alertinfcount;
extern int allowcount;
extern int callinfocount;
extern int contactcount;
extern int contentenccount;
extern int contentlangcount;
extern int errorinfocount;
extern int featureCapscount;
extern int inreplytocount;
extern int passertedidcount;
extern int ppreferredidcount;
extern int privacycount;
extern int proxyreqcount;
extern int reasoncount;
extern int recroutecount;
extern int recvinfocount;
extern int routecount;
extern int reqcount;
extern int suppcount;
extern int unsuppcount;
extern int servercount;
extern int useragentcount;
extern int viacount;
extern int warncount;
extern int undefcount;
extern int aos_count;

char comment_buf[1500];
int errorind_loc;

char *trim(char *string);

bool ipv6enabled;
char *trimOnIPv6(char *string);
void resetptr();

extern char * stream_buffer; // EPTEBAL


/* Line 268 of yacc.c  */
#line 201 "SIP_parse_.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _SP = 258,
     LONE_CRLF = 259,
     EXTENSION_CODE = 260,
     REASON_PHRASE = 261,
     SIP_VERSION = 262,
     SIP_SPHT_VERSION = 263,
     _METHOD = 264,
     CONTENT_WITHOUTENDINGCRLF = 265,
     _CALLID = 266,
     WWW_AUTHENTICATELWSCOLON = 267,
     _CRLF = 268,
     PROXY_AUTHENTICATELWSCOLON = 269,
     TOLWSCOLON = 270,
     CONTACTLWSCOLON = 271,
     ACCEPTRESPRIOLWSCOLON = 272,
     RESPRIOLWSCOLON = 273,
     FROMLWSCOLON = 274,
     _TYPEID = 275,
     TOKENS = 276,
     QUOTED_STRING = 277,
     EPARENT = 278,
     SPARENT = 279,
     OTHERLWSCOLON = 280,
     CALL_IDLWSCOLON = 281,
     SOMELWS = 282,
     _LAES_CONTENT = 283,
     _TOKEN = 284,
     _STOKEN = 285,
     _DIGEST = 286,
     _COMMENT = 287,
     USERINFO_AT = 288,
     _STAR = 289,
     GEOLOCERRORLWSCOLON = 290,
     GEOLOCATIONLWSCOLON = 291,
     SUPPORTEDLWSCOLON = 292,
     VIALWSCOLON = 293,
     SUBJECTLWSCOLON = 294,
     CONTENT_ENCODINGLWSCOLON = 295,
     CONTENT_LENGTHLWSCOLON = 296,
     SOMEDIGITS = 297,
     CONTENT_TYPELWSCOLON = 298,
     ACCEPTLWSCOLON = 299,
     ACCEPT_ENCODINGLWSCOLON = 300,
     ACCEPT_LANGUAGELWSCOLON = 301,
     AUTHINFOLWSCOLON = 302,
     CALL_INFOLWSCOLON = 303,
     MINEXPIRESLWSCOLON = 304,
     CSEQLWSCOLON = 305,
     EVENTLWSCOLON = 306,
     ALLOWEVENTLWSCOLON = 307,
     SUBSTATEWSCOLON = 308,
     DATELWSCOLON = 309,
     MIME_VERSIONLWSCOLON = 310,
     ORGANIZATIONLWSCOLON = 311,
     RECORD_ROUTELWSCOLON = 312,
     PCALLEPPTYLWSCOLON = 313,
     PVISITEDNETLWSCOLON = 314,
     REQUIRELWSCOLON = 315,
     HISTORYLWSCOLON = 316,
     TIMESTAMPLWSCOLON = 317,
     USER_AGENTLWSCOLON = 318,
     PASSOCURILWSCOLON = 319,
     DIVERSIONWSCOLON = 320,
     ERROR_INFOLWSCOLON = 321,
     RETRY_AFTERLWSCOLON = 322,
     SERVERLWSCOLON = 323,
     UNSUPPORTEDLWSCOLON = 324,
     WARNINGLWSCOLON = 325,
     PASSERTEDLWSCOLON = 326,
     REASONLWSCOLON = 327,
     PPREFERREDLWSCOLON = 328,
     PRIVACYLWSCOLON = 329,
     RACKLWSCOLON = 330,
     RSEQLWSCOLON = 331,
     ALERT_INFOLWSCOLON = 332,
     AUTHORIZATIONLWSCOLON = 333,
     IN_REPLY_TOLWSCOLON = 334,
     REPLY_TOLWSCOLON = 335,
     MAX_FORWARDSLWSCOLON = 336,
     REFER_TOLWSCOLON = 337,
     PRIORITYLWSCOLON = 338,
     PROXY_AUTHORIZATIONLWSCOLON = 339,
     PROXY_REQUIRELWSCOLON = 340,
     ROUTELWSCOLON = 341,
     ALLOWLWSCOLON = 342,
     PEARLYMEDIALWSCOLON = 343,
     CONTENT_DISPOSITIONLWSCOLON = 344,
     CONTENT_LANGUAGELWSCOLON = 345,
     EXPIRESLWSCOLON = 346,
     SESSIONEXPWSCOLON = 347,
     SESSIONIDLWSCOLON = 348,
     MINSELWSCOLON = 349,
     SOMELWSCOMMA = 350,
     PACCESSNETLWSCOLON = 351,
     REQDISPLWSCOLON = 352,
     PCHARGEADDRLWSCOLON = 353,
     PCHARGEVECTORLWSCOLON = 354,
     ANSWERMODELWSCOLON = 355,
     PRIVANSWERMODELWSCOLON = 356,
     ALERTMODELWSCOLON = 357,
     REFERSUBLWSCOLON = 358,
     PALERTINGMODELWSCOLON = 359,
     PANSWERSTATELWSCOLON = 360,
     ACCEPTCONTACTLWSCOLON = 361,
     REJECTCONTACTLWSCOLON = 362,
     PMEDIAAUTHLWSCOLON = 363,
     PATHLWSCOLON = 364,
     SECCLIENTLWSCOLON = 365,
     SECSERVERLWSCOLON = 366,
     SECVERIFYLWSCOLON = 367,
     PTARCEPTYIDLWSCOLON = 368,
     POSPSLWSCOLON = 369,
     PBILLINGINFOLWSCOLON = 370,
     PLAESLWSCOLON = 371,
     PDCSREDIRLWSCOLON = 372,
     PUSERDBASELWSCOLON = 373,
     SERVICEROUTELWSCOLON = 374,
     REFERREDBYTOLWSCOLON = 375,
     REPLACESLWSCOLON = 376,
     IFMATCHLWSCOLON = 377,
     ETAGLWSCOLON = 378,
     JOINLWSCOLON = 379,
     PSERVEDUSERLWSCOLON = 380,
     PPROFILEKEYLWSCOLON = 381,
     PSERVICEINDICATIONLWSCOLON = 382,
     PSERVICENOTIFICATIONLWSCOLON = 383,
     GEOROUTINGLWSCOLON = 384,
     TARGETDIALOGLWSCOLON = 385,
     INFOPACKAGELWSCOLON = 386,
     FEATURECAPSLWSCOLON = 387,
     RECVINFOLWSCOLON = 388,
     PLASTACCESSNETLWSCOLON = 389,
     _TOKEN_NO_DOT = 390,
     _HEXTOKEN = 391,
     _DOT = 392,
     _SLASH = 393,
     SEMICOLON = 394,
     EQUALSIGN = 395,
     _ABO = 396,
     _ABC = 397,
     _COLON = 398,
     QUESTMARK = 399,
     AMPERSANT = 400,
     SOMELWS_SEMICOLON = 401,
     _AT = 402,
     _HOST = 403,
     SCHEME = 404,
     _HNAME = 405,
     _HVALUE = 406,
     _PORT = 407,
     SOMELWS_COMMA_SOMELWS = 408,
     SOMELWS_SLASH_SOMELWS = 409,
     PROTOCOL_NAME = 410,
     PROTOCOL_VERSION = 411,
     TRANSPORT = 412,
     _URLTOKEN = 413,
     PASSERTEDSERVICELWSCOLON = 414,
     PPREFERREDSERVICELWSCOLON = 415,
     XAUTLWSCOLON = 416,
     XCARRIERINFOLWSCOLON = 417,
     XCHGDELAYLWSCOLON = 418,
     PAREAINFOLWSCOLON = 419,
     XFCILWSCOLON = 420,
     XCHGINFOLWSCOLON = 421
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 126 "SIP_parse.y"

  unsigned int iv;
  char cv  ;
  char *sv ;
  SIPmsg__Types::Event__type *e_type;
  SIPmsg__Types::Event__template__list *e_template_list;
  SIPmsg__Types::Event__type__list *e_list;
  SIPmsg__Types::NameAddr *naddr;
  SIPmsg__Types::P__Assoc__uri__spec__list *u_spec_list;
  SIPmsg__Types::P__Assoc__uri__spec *u_spec;
  SIPmsg__Types::Network__spec *n_spec;
  SIPmsg__Types::Network__spec__list *n_spec_list;
  SIPmsg__Types::Access__net__spec *an_spec;
  SIPmsg__Types::Access__net__spec__list *an_spec_list;
  SIPmsg__Types::GenericParam__List *p_list;
  SIPmsg__Types::Contact__list *c_list;
  SIPmsg__Types::Request__disp__directive__list *d_list;
  SIPmsg__Types::Media__auth__token__list *a_t_list;
  SIPmsg__Types::RouteBody *route_val;
  SIPmsg__Types::RouteBody__List *route_list;
  SIPmsg__Types::Security__mechanism *sec_mech;
  SIPmsg__Types::Security__mechanism__list *sec_mech_list;
  SIPmsg__Types::HostPort *host_p;
  SIPmsg__Types::Diversion__params *divparam;
  SIPmsg__Types::Diversion__params__list *divparam_list;
  SIPmsg__Types::Hi__Entry *history_entry;
  SIPmsg__Types::Hi__Entry__list *history_entry_list;
  SIPmsg__Types::Em__param__List *em_bdy_list;
  SIPmsg__Types::Service__ID__List *service_1toN;
  SIPmsg__Types::Rvalue__List *r_val_list;
  SIPmsg__Types::Rvalue *rval;
  SIPmsg__Types::Location__value__list *g_val_list;
  SIPmsg__Types::Location__value *g_val;



/* Line 293 of yacc.c  */
#line 440 "SIP_parse_.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 452 "SIP_parse_.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1580

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  241
/* YYNRULES -- Number of rules.  */
#define YYNRULES  566
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1124

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   421

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    18,    21,    22,    24,
      26,    29,    31,    33,    35,    37,    40,    43,    46,    49,
      52,    55,    58,    61,    63,    66,    69,    74,    78,    83,
      86,    89,    94,    97,   100,   105,   109,   113,   117,   121,
     125,   129,   133,   139,   143,   146,   149,   152,   155,   158,
     161,   164,   167,   170,   173,   176,   179,   182,   185,   188,
     196,   203,   208,   215,   221,   225,   233,   240,   245,   252,
     258,   262,   270,   277,   282,   289,   295,   299,   303,   307,
     315,   322,   327,   334,   340,   344,   347,   349,   353,   358,
     364,   367,   371,   375,   379,   381,   386,   390,   393,   396,
     400,   404,   407,   410,   415,   418,   420,   424,   431,   437,
     443,   448,   451,   455,   462,   466,   467,   469,   471,   474,
     476,   478,   480,   482,   485,   488,   491,   494,   497,   500,
     503,   506,   509,   512,   515,   518,   521,   526,   528,   532,
     535,   537,   541,   546,   552,   556,   564,   573,   578,   580,
     583,   587,   589,   593,   597,   599,   602,   606,   610,   612,
     617,   622,   628,   632,   634,   638,   640,   643,   646,   649,
     652,   655,   658,   661,   664,   667,   670,   673,   676,   679,
     682,   685,   688,   691,   694,   697,   700,   703,   706,   709,
     712,   715,   718,   721,   724,   727,   730,   733,   736,   739,
     742,   745,   748,   751,   754,   757,   760,   763,   766,   769,
     772,   775,   778,   781,   784,   787,   790,   793,   796,   799,
     802,   805,   808,   811,   814,   817,   820,   823,   826,   829,
     832,   835,   838,   841,   844,   847,   850,   853,   856,   859,
     862,   865,   868,   871,   874,   877,   880,   883,   886,   889,
     892,   895,   897,   900,   902,   906,   909,   913,   917,   922,
     926,   931,   934,   936,   940,   943,   947,   951,   956,   960,
     966,   969,   971,   975,   980,   986,   989,   992,   995,  1000,
    1004,  1006,  1009,  1012,  1017,  1021,  1026,  1030,  1034,  1038,
    1043,  1046,  1052,  1059,  1063,  1068,  1072,  1078,  1080,  1084,
    1086,  1088,  1093,  1097,  1099,  1107,  1116,  1120,  1123,  1126,
    1129,  1132,  1134,  1138,  1141,  1145,  1148,  1150,  1154,  1161,
    1167,  1173,  1178,  1181,  1184,  1189,  1192,  1195,  1200,  1203,
    1206,  1208,  1212,  1215,  1219,  1223,  1228,  1232,  1237,  1241,
    1246,  1249,  1251,  1255,  1257,  1260,  1263,  1266,  1268,  1272,
    1275,  1278,  1280,  1284,  1287,  1291,  1295,  1300,  1304,  1309,
    1313,  1318,  1322,  1327,  1331,  1336,  1340,  1345,  1348,  1351,
    1353,  1357,  1360,  1364,  1367,  1371,  1374,  1376,  1380,  1382,
    1385,  1388,  1390,  1394,  1396,  1399,  1405,  1410,  1414,  1419,
    1422,  1425,  1430,  1434,  1439,  1441,  1445,  1448,  1453,  1456,
    1458,  1462,  1465,  1469,  1472,  1474,  1478,  1479,  1485,  1490,
    1493,  1496,  1498,  1502,  1503,  1509,  1514,  1517,  1520,  1523,
    1528,  1530,  1538,  1542,  1545,  1552,  1558,  1562,  1568,  1573,
    1576,  1579,  1582,  1586,  1589,  1592,  1596,  1601,  1605,  1611,
    1617,  1622,  1627,  1631,  1633,  1636,  1640,  1644,  1650,  1654,
    1656,  1660,  1664,  1670,  1676,  1684,  1692,  1702,  1704,  1707,
    1710,  1713,  1716,  1720,  1726,  1729,  1731,  1735,  1740,  1746,
    1750,  1751,  1753,  1755,  1758,  1760,  1764,  1769,  1775,  1777,
    1780,  1783,  1788,  1790,  1793,  1795,  1799,  1802,  1806,  1809,
    1813,  1817,  1820,  1824,  1828,  1836,  1843,  1848,  1855,  1861,
    1865,  1869,  1872,  1874,  1878,  1885,  1891,  1895,  1901,  1906,
    1909,  1917,  1924,  1929,  1936,  1942,  1946,  1949,  1953,  1958,
    1962,  1965,  1967,  1970,  1972,  1975,  1979,  1984,  1988,  1992,
    1995,  1998,  2000,  2004,  2007,  2009,  2011,  2013,  2016,  2018,
    2021,  2023,  2027,  2030,  2033,  2036,  2038,  2044,  2049,  2054,
    2058,  2059,  2061,  2064,  2065,  2068,  2070,  2073,  2076,  2079,
    2081,  2085,  2086,  2088,  2090,  2093,  2096
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     168,     0,    -1,   169,    -1,   214,    -1,   170,   171,     4,
      -1,     9,     3,   396,     3,     7,    13,    -1,     1,    13,
      -1,    -1,   172,    -1,   173,    -1,   172,   173,    -1,   238,
      -1,   190,    -1,   219,    -1,   174,    -1,     1,    13,    -1,
     175,    13,    -1,   177,    13,    -1,   178,    13,    -1,   180,
      13,    -1,   182,    13,    -1,   183,    13,    -1,   184,    13,
      -1,    87,    -1,    87,   176,    -1,   365,    29,    -1,   176,
      95,   365,    29,    -1,    89,   365,    29,    -1,    89,   365,
      29,   383,    -1,    40,   179,    -1,   365,    30,    -1,   179,
      95,   365,    30,    -1,    90,   181,    -1,   365,    30,    -1,
     181,    95,   365,    30,    -1,    41,   365,    42,    -1,    43,
     365,    20,    -1,    91,   365,    29,    -1,   161,   365,    29,
      -1,   162,   365,    29,    -1,   163,   365,    29,    -1,   166,
     365,    29,    -1,   166,   365,    29,   146,    29,    -1,   165,
     365,   136,    -1,   197,    13,    -1,   200,    13,    -1,   202,
      13,    -1,   204,    13,    -1,   205,    13,    -1,   206,    13,
      -1,   208,    13,    -1,   210,    13,    -1,   213,    13,    -1,
     196,    13,    -1,   193,    13,    -1,   192,    13,    -1,   191,
      13,    -1,   221,    13,    -1,   222,    13,    -1,   120,   365,
     394,   141,   395,   142,   383,    -1,   120,   365,   141,   395,
     142,   383,    -1,   120,   365,   392,   383,    -1,   120,   365,
     394,   141,   395,   142,    -1,   120,   365,   141,   395,   142,
      -1,   120,   365,   392,    -1,   126,   365,   394,   141,   395,
     142,   383,    -1,   126,   365,   141,   395,   142,   383,    -1,
     126,   365,   392,   383,    -1,   126,   365,   394,   141,   395,
     142,    -1,   126,   365,   141,   395,   142,    -1,   126,   365,
     392,    -1,   125,   365,   394,   141,   395,   142,   383,    -1,
     125,   365,   141,   395,   142,   383,    -1,   125,   365,   392,
     383,    -1,   125,   365,   394,   141,   395,   142,    -1,   125,
     365,   141,   395,   142,    -1,   125,   365,   392,    -1,   127,
     365,    29,    -1,   128,   365,    29,    -1,    82,   365,   394,
     141,   395,   142,   383,    -1,    82,   365,   141,   395,   142,
     383,    -1,    82,   365,   392,   383,    -1,    82,   365,   394,
     141,   395,   142,    -1,    82,   365,   141,   395,   142,    -1,
      82,   365,   392,    -1,    77,   198,    -1,   199,    -1,   199,
      95,   198,    -1,   365,   141,   158,   142,    -1,   365,   141,
     158,   142,   383,    -1,    78,   201,    -1,   365,    31,   224,
      -1,   365,    29,   224,    -1,    79,   365,   203,    -1,    11,
      -1,   203,    95,   365,    11,    -1,    81,   365,    42,    -1,
      83,    10,    -1,    84,   207,    -1,   365,    31,   224,    -1,
     365,    29,   224,    -1,    85,   209,    -1,   365,    29,    -1,
     209,    95,   365,    29,    -1,    86,   211,    -1,   212,    -1,
     211,    95,   212,    -1,   365,   394,   141,   395,   142,   383,
      -1,   365,   141,   395,   142,   383,    -1,   365,   394,   141,
     395,   142,    -1,   365,   141,   395,   142,    -1,    39,    10,
      -1,   215,   216,     4,    -1,     8,     3,     5,     3,     6,
      13,    -1,     1,     6,    13,    -1,    -1,   217,    -1,   218,
      -1,   217,   218,    -1,   238,    -1,   190,    -1,   219,    -1,
     174,    -1,     1,    13,    -1,   225,    13,    -1,   376,    13,
      -1,   228,    13,    -1,   230,    13,    -1,   233,    13,    -1,
     220,    13,    -1,   234,    13,    -1,   374,    13,    -1,    47,
     224,    -1,   159,   223,    -1,   160,   223,    -1,   365,    29,
      -1,   223,    95,   365,    29,    -1,   384,    -1,   384,    95,
     224,    -1,    66,   226,    -1,   227,    -1,   227,    95,   226,
      -1,   365,   141,   158,   142,    -1,   365,   141,   158,   142,
     383,    -1,    67,   365,    29,    -1,    67,   365,    29,   365,
      24,   229,    23,    -1,    67,   365,    29,   365,    24,   229,
      23,   383,    -1,    67,   365,    29,   383,    -1,    32,    -1,
     229,    32,    -1,    68,   365,   231,    -1,   232,    -1,   231,
      27,   232,    -1,    24,   229,    23,    -1,    29,    -1,    69,
     209,    -1,    70,   365,   235,    -1,    70,     3,   235,    -1,
     236,    -1,   235,    95,     3,   236,    -1,   235,    95,   365,
     236,    -1,   152,     3,   237,     3,    22,    -1,    29,   143,
     152,    -1,    29,    -1,   148,   143,   152,    -1,   148,    -1,
     366,    13,    -1,   369,    13,    -1,   371,    13,    -1,   364,
      13,    -1,   361,    13,    -1,   379,    13,    -1,   360,    13,
      -1,   359,    13,    -1,   350,    13,    -1,   323,    13,    -1,
     321,    13,    -1,   252,    13,    -1,   253,    13,    -1,   382,
      13,    -1,   292,    13,    -1,   351,    13,    -1,   358,    13,
      -1,   335,    13,    -1,   313,    13,    -1,   316,    13,    -1,
     312,    13,    -1,   329,    13,    -1,   309,    13,    -1,   332,
      13,    -1,   298,    13,    -1,   299,    13,    -1,   296,    13,
      -1,   295,    13,    -1,   338,    13,    -1,   326,    13,    -1,
     339,    13,    -1,   357,    13,    -1,   340,    13,    -1,   356,
      13,    -1,   355,    13,    -1,   291,    13,    -1,   289,    13,
      -1,   290,    13,    -1,   320,    13,    -1,   354,    13,    -1,
     378,    13,    -1,   352,    13,    -1,   343,    13,    -1,   286,
      13,    -1,   285,    13,    -1,   283,    13,    -1,   281,    13,
      -1,   278,    13,    -1,   273,    13,    -1,   274,    13,    -1,
     275,    13,    -1,   272,    13,    -1,   271,    13,    -1,   256,
      13,    -1,   270,    13,    -1,   265,    13,    -1,   264,    13,
      -1,   263,    13,    -1,   262,    13,    -1,   261,    13,    -1,
     259,    13,    -1,   260,    13,    -1,   258,    13,    -1,   194,
      13,    -1,   195,    13,    -1,   302,    13,    -1,   303,    13,
      -1,   304,    13,    -1,   305,    13,    -1,   306,    13,    -1,
     307,    13,    -1,   249,    13,    -1,   248,    13,    -1,   247,
      13,    -1,   243,    13,    -1,   244,    13,    -1,   242,    13,
      -1,   239,    13,    -1,   185,    13,    -1,   186,    13,    -1,
     187,    13,    -1,   308,    13,    -1,   188,    13,    -1,   189,
      13,    -1,   342,    13,    -1,   133,    -1,   133,   240,    -1,
     241,    -1,   241,    95,   240,    -1,   365,    29,    -1,   365,
      29,   383,    -1,   131,   365,    29,    -1,   131,   365,    29,
     383,    -1,   130,   365,    11,    -1,   130,   365,    11,   383,
      -1,   132,   245,    -1,   246,    -1,   246,    95,   245,    -1,
     365,    29,    -1,   365,    29,   383,    -1,    35,   365,    42,
      -1,    35,   365,    42,   383,    -1,   129,   365,    29,    -1,
     129,   365,    29,   365,   388,    -1,    36,   250,    -1,   251,
      -1,   250,    95,   251,    -1,   365,   141,   395,   142,    -1,
     365,   141,   395,   142,   383,    -1,    17,   254,    -1,    18,
     254,    -1,   365,   255,    -1,   254,    95,   365,   255,    -1,
     135,   137,   135,    -1,    88,    -1,    88,   257,    -1,   365,
      29,    -1,   257,    95,   365,    29,    -1,   124,   365,    11,
      -1,   124,   365,    11,   383,    -1,   123,   365,    29,    -1,
     122,   365,    29,    -1,   121,   365,    11,    -1,   121,   365,
      11,   383,    -1,   119,   279,    -1,   118,   365,   141,   395,
     142,    -1,   118,   365,   141,   395,   142,   383,    -1,   117,
     395,   142,    -1,   117,   395,   142,   383,    -1,   116,   365,
     269,    -1,   116,   365,   269,   146,   266,    -1,   267,    -1,
     267,   146,   266,    -1,   268,    -1,   384,    -1,   365,    28,
     365,   269,    -1,   148,   143,   152,    -1,   148,    -1,   115,
     365,   136,   154,   136,   147,   148,    -1,   115,   365,   136,
     154,   136,   147,   148,   383,    -1,   114,   365,    29,    -1,
     113,   319,    -1,   110,   276,    -1,   111,   276,    -1,   112,
     276,    -1,   277,    -1,   276,    95,   277,    -1,   365,    29,
      -1,   365,    29,   383,    -1,   109,   279,    -1,   280,    -1,
     279,    95,   280,    -1,   365,   394,   141,   395,   142,   383,
      -1,   365,   141,   395,   142,   383,    -1,   365,   394,   141,
     395,   142,    -1,   365,   141,   395,   142,    -1,   108,   282,
      -1,   365,    29,    -1,   282,    95,   365,    29,    -1,    97,
     284,    -1,   365,    29,    -1,   284,    95,   365,    29,    -1,
     107,   287,    -1,   106,   287,    -1,   288,    -1,   287,    95,
     288,    -1,   365,    34,    -1,   365,    34,   383,    -1,    92,
     365,    29,    -1,    92,   365,    29,   383,    -1,    93,   365,
      29,    -1,    93,   365,    29,   383,    -1,    94,   365,    29,
      -1,    94,   365,    29,   383,    -1,    61,   293,    -1,   294,
      -1,   293,    95,   294,    -1,   319,    -1,   319,   383,    -1,
      99,   297,    -1,    98,   297,    -1,   384,    -1,   297,   146,
     384,    -1,    96,   300,    -1,   134,   300,    -1,   301,    -1,
     300,    95,   301,    -1,   365,   394,    -1,   365,   394,   386,
      -1,   100,   365,    29,    -1,   100,   365,    29,   383,    -1,
     101,   365,    29,    -1,   101,   365,    29,   383,    -1,   102,
     365,    29,    -1,   102,   365,    29,   383,    -1,   103,   365,
      29,    -1,   103,   365,    29,   383,    -1,   104,   365,    29,
      -1,   104,   365,    29,   383,    -1,   105,   365,    29,    -1,
     105,   365,    29,   383,    -1,   164,   297,    -1,    59,   310,
      -1,   311,    -1,   310,    95,   311,    -1,   365,   394,    -1,
     365,   394,   383,    -1,    58,   319,    -1,    58,   319,   383,
      -1,    64,   314,    -1,   315,    -1,   314,    95,   315,    -1,
     319,    -1,   319,   383,    -1,    65,   317,    -1,   318,    -1,
     317,    95,   318,    -1,   319,    -1,   319,   383,    -1,   365,
     394,   141,   395,   142,    -1,   365,   141,   395,   142,    -1,
      53,   365,    29,    -1,    53,   365,    29,   383,    -1,    52,
     322,    -1,   365,   324,    -1,   322,    95,   365,   324,    -1,
      51,   365,   324,    -1,    51,   365,   324,   383,    -1,   135,
      -1,   135,   137,   325,    -1,   365,   135,    -1,   325,   137,
     365,   135,    -1,    72,   327,    -1,   328,    -1,   327,    95,
     328,    -1,   365,    29,    -1,   365,    29,   383,    -1,    71,
     330,    -1,   331,    -1,   330,    95,   331,    -1,    -1,   365,
     394,   141,   395,   142,    -1,   365,   141,   395,   142,    -1,
     365,   395,    -1,    73,   333,    -1,   334,    -1,   333,    95,
     334,    -1,    -1,   365,   394,   141,   395,   142,    -1,   365,
     141,   395,   142,    -1,   365,   392,    -1,    74,   336,    -1,
     365,   337,    -1,   336,   146,   365,   337,    -1,    29,    -1,
      75,   365,    42,    27,    42,    27,    29,    -1,    76,   365,
      42,    -1,    80,   341,    -1,   365,   394,   141,   395,   142,
     383,    -1,   365,   141,   395,   142,   383,    -1,   365,   392,
     383,    -1,   365,   394,   141,   395,   142,    -1,   365,   141,
     395,   142,    -1,   365,   392,    -1,    25,    10,    -1,    38,
     344,    -1,   365,   346,   345,    -1,   365,   346,    -1,   153,
     346,    -1,   345,   153,   346,    -1,   347,   365,   348,   349,
      -1,   347,   365,   348,    -1,   155,   154,   156,   154,   157,
      -1,   148,    27,   143,    27,   152,    -1,   148,    27,   143,
     152,    -1,   148,   143,    27,   152,    -1,   148,   143,   152,
      -1,   148,    -1,   146,   384,    -1,   349,   146,   384,    -1,
      49,   365,    29,    -1,    55,   365,    42,   137,    42,    -1,
      63,   365,   353,    -1,   232,    -1,   353,    27,   232,    -1,
      62,   365,    42,    -1,    62,   365,    42,   137,    42,    -1,
      62,   365,    42,    27,    42,    -1,    62,   365,    42,   137,
      42,    27,    42,    -1,    62,   365,    42,    27,    42,   137,
      42,    -1,    62,   365,    42,   137,    42,    27,    42,   137,
      42,    -1,    37,    -1,    37,   209,    -1,    60,   209,    -1,
      57,   211,    -1,    56,    10,    -1,    54,   365,    20,    -1,
      50,   365,    42,   365,     9,    -1,    48,   362,    -1,   363,
      -1,   363,    95,   362,    -1,   365,   141,   158,   142,    -1,
     365,   141,   158,   142,   383,    -1,    26,   365,    11,    -1,
      -1,    27,    -1,    44,    -1,    44,   367,    -1,   368,    -1,
     368,    95,   367,    -1,   365,    29,   138,    29,    -1,   365,
      29,   138,    29,   383,    -1,    45,    -1,    45,   370,    -1,
     365,    30,    -1,   370,    95,   365,    30,    -1,    46,    -1,
      46,   372,    -1,   373,    -1,   373,    95,   372,    -1,   365,
      29,    -1,   365,    29,   383,    -1,    12,   375,    -1,   365,
      31,   224,    -1,   365,    29,   224,    -1,    14,   377,    -1,
     365,    31,   224,    -1,   365,    29,   224,    -1,    15,   365,
     394,   141,   395,   142,   383,    -1,    15,   365,   141,   395,
     142,   383,    -1,    15,   365,   392,   383,    -1,    15,   365,
     394,   141,   395,   142,    -1,    15,   365,   141,   395,   142,
      -1,    15,   365,   392,    -1,    16,   365,    34,    -1,    16,
     380,    -1,   381,    -1,   380,    95,   381,    -1,   365,   394,
     141,   395,   142,   383,    -1,   365,   141,   395,   142,   383,
      -1,   365,   392,   383,    -1,   365,   394,   141,   395,   142,
      -1,   365,   141,   395,   142,    -1,   365,   392,    -1,    19,
     365,   394,   141,   395,   142,   383,    -1,    19,   365,   141,
     395,   142,   383,    -1,    19,   365,   392,   383,    -1,    19,
     365,   394,   141,   395,   142,    -1,    19,   365,   141,   395,
     142,    -1,    19,   365,   392,    -1,   146,   384,    -1,   383,
     146,   384,    -1,    27,    29,    27,   388,    -1,    29,    27,
     388,    -1,    27,   385,    -1,   385,    -1,    29,   388,    -1,
      29,    -1,   146,   387,    -1,   386,   146,   387,    -1,    27,
      29,    27,   388,    -1,    29,    27,   388,    -1,    27,    29,
     388,    -1,    29,   388,    -1,    27,   389,    -1,   389,    -1,
     140,    27,   389,    -1,   140,   389,    -1,    29,    -1,   148,
      -1,    22,    -1,    29,   391,    -1,    29,    -1,   140,   389,
      -1,   393,    -1,   149,   397,   398,    -1,    21,   365,    -1,
      29,   365,    -1,    22,   365,    -1,   396,    -1,   149,   397,
     398,   400,   403,    -1,   149,   397,   398,   400,    -1,   149,
     397,   398,   403,    -1,   149,   397,   398,    -1,    -1,    33,
      -1,   148,   399,    -1,    -1,   143,   152,    -1,   401,    -1,
     400,   401,    -1,   139,   402,    -1,   146,   402,    -1,   390,
      -1,   144,   407,   404,    -1,    -1,   405,    -1,   406,    -1,
     405,   406,    -1,   145,   407,    -1,   150,   140,   151,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   358,   358,   365,   374,   380,   391,   394,   395,   397,
     398,   400,   401,   402,   403,   404,   408,   409,   411,   413,
     415,   417,   419,   422,   423,   425,   430,   438,   443,   453,
     456,   461,   468,   471,   476,   483,   487,   493,   499,   504,
     509,   515,   519,   525,   533,   534,   536,   537,   539,   540,
     542,   544,   545,   546,   547,   548,   549,   550,   551,   553,
     568,   580,   590,   599,   608,   618,   633,   645,   655,   664,
     673,   682,   697,   709,   719,   728,   737,   746,   752,   758,
     773,   785,   795,   804,   813,   822,   825,   826,   829,   836,
     848,   851,   857,   868,   871,   876,   883,   887,   893,   896,
     903,   915,   924,   929,   936,   945,   946,   949,   963,   976,
     987,   999,  1007,  1011,  1025,  1028,  1029,  1031,  1032,  1034,
    1035,  1036,  1037,  1038,  1041,  1042,  1044,  1045,  1046,  1047,
    1049,  1050,  1054,  1062,  1077,  1092,  1097,  1105,  1106,  1109,
    1112,  1113,  1116,  1123,  1135,  1141,  1148,  1159,  1170,  1174,
    1180,  1182,  1187,  1194,  1204,  1211,  1220,  1221,  1224,  1225,
    1226,  1229,  1239,  1246,  1259,  1266,  1283,  1284,  1286,  1288,
    1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,
    1299,  1301,  1303,  1305,  1306,  1308,  1310,  1312,  1314,  1316,
    1318,  1320,  1322,  1324,  1326,  1327,  1328,  1329,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,
    1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,
    1363,  1364,  1366,  1368,  1370,  1372,  1374,  1376,  1377,  1378,
    1379,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,
    1389,  1394,  1397,  1400,  1401,  1404,  1413,  1426,  1431,  1441,
    1446,  1458,  1461,  1462,  1465,  1472,  1484,  1488,  1497,  1501,
    1508,  1523,  1529,  1537,  1546,  1562,  1577,  1592,  1597,  1605,
    1615,  1620,  1636,  1641,  1649,  1654,  1664,  1670,  1676,  1681,
    1691,  1706,  1714,  1726,  1734,  1746,  1751,  1761,  1762,  1766,
    1767,  1771,  1783,  1789,  1797,  1807,  1821,  1827,  1834,  1849,
    1864,  1879,  1884,  1892,  1898,  1908,  1923,  1928,  1936,  1950,
    1963,  1974,  1987,  2002,  2007,  2015,  2030,  2035,  2043,  2058,
    2073,  2078,  2086,  2090,  2098,  2103,  2113,  2118,  2128,  2133,
    2143,  2158,  2163,  2171,  2177,  2188,  2211,  2220,  2221,  2224,
    2239,  2253,  2258,  2266,  2272,  2284,  2289,  2299,  2304,  2314,
    2319,  2329,  2334,  2344,  2349,  2359,  2364,  2374,  2382,  2397,
    2402,  2409,  2415,  2427,  2432,  2442,  2457,  2462,  2470,  2476,
    2487,  2502,  2507,  2515,  2521,  2532,  2541,  2552,  2557,  2568,
    2583,  2588,  2597,  2602,  2612,  2618,  2627,  2632,  2640,  2643,
    2644,  2647,  2653,  2664,  2667,  2668,  2670,  2671,  2682,  2692,
    2702,  2705,  2706,  2708,  2709,  2720,  2730,  2740,  2743,  2744,
    2747,  2754,  2762,  2767,  2770,  2784,  2796,  2806,  2815,  2824,
    2833,  2841,  2844,  2845,  2848,  2849,  2853,  2860,  2866,  2875,
    2880,  2885,  2890,  2895,  2902,  2903,  2906,  2912,  2918,  2921,
    2926,  2933,  2938,  2943,  2949,  2955,  2961,  2970,  2973,  2982,
    2991,  3000,  3006,  3012,  3019,  3022,  3023,  3026,  3033,  3045,
    3051,  3052,  3055,  3058,  3061,  3062,  3065,  3085,  3111,  3115,
    3118,  3123,  3130,  3133,  3136,  3137,  3140,  3148,  3163,  3166,
    3176,  3192,  3195,  3205,  3222,  3235,  3246,  3256,  3265,  3273,
    3282,  3286,  3289,  3290,  3293,  3309,  3324,  3337,  3350,  3362,
    3374,  3389,  3401,  3411,  3420,  3429,  3438,  3439,  3442,  3448,
    3454,  3455,  3460,  3467,  3474,  3475,  3478,  3483,  3488,  3493,
    3498,  3503,  3512,  3513,  3516,  3517,  3518,  3521,  3527,  3535,
    3538,  3541,  3556,  3557,  3558,  3561,  3563,  3574,  3586,  3598,
    3614,  3615,  3631,  3637,  3638,  3641,  3642,  3645,  3646,  3649,
    3652,  3654,  3656,  3659,  3660,  3663,  3666
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_SP", "LONE_CRLF", "EXTENSION_CODE",
  "REASON_PHRASE", "SIP_VERSION", "SIP_SPHT_VERSION", "_METHOD",
  "CONTENT_WITHOUTENDINGCRLF", "_CALLID", "WWW_AUTHENTICATELWSCOLON",
  "_CRLF", "PROXY_AUTHENTICATELWSCOLON", "TOLWSCOLON", "CONTACTLWSCOLON",
  "ACCEPTRESPRIOLWSCOLON", "RESPRIOLWSCOLON", "FROMLWSCOLON", "_TYPEID",
  "TOKENS", "QUOTED_STRING", "EPARENT", "SPARENT", "OTHERLWSCOLON",
  "CALL_IDLWSCOLON", "SOMELWS", "_LAES_CONTENT", "_TOKEN", "_STOKEN",
  "_DIGEST", "_COMMENT", "USERINFO_AT", "_STAR", "GEOLOCERRORLWSCOLON",
  "GEOLOCATIONLWSCOLON", "SUPPORTEDLWSCOLON", "VIALWSCOLON",
  "SUBJECTLWSCOLON", "CONTENT_ENCODINGLWSCOLON", "CONTENT_LENGTHLWSCOLON",
  "SOMEDIGITS", "CONTENT_TYPELWSCOLON", "ACCEPTLWSCOLON",
  "ACCEPT_ENCODINGLWSCOLON", "ACCEPT_LANGUAGELWSCOLON", "AUTHINFOLWSCOLON",
  "CALL_INFOLWSCOLON", "MINEXPIRESLWSCOLON", "CSEQLWSCOLON",
  "EVENTLWSCOLON", "ALLOWEVENTLWSCOLON", "SUBSTATEWSCOLON", "DATELWSCOLON",
  "MIME_VERSIONLWSCOLON", "ORGANIZATIONLWSCOLON", "RECORD_ROUTELWSCOLON",
  "PCALLEPPTYLWSCOLON", "PVISITEDNETLWSCOLON", "REQUIRELWSCOLON",
  "HISTORYLWSCOLON", "TIMESTAMPLWSCOLON", "USER_AGENTLWSCOLON",
  "PASSOCURILWSCOLON", "DIVERSIONWSCOLON", "ERROR_INFOLWSCOLON",
  "RETRY_AFTERLWSCOLON", "SERVERLWSCOLON", "UNSUPPORTEDLWSCOLON",
  "WARNINGLWSCOLON", "PASSERTEDLWSCOLON", "REASONLWSCOLON",
  "PPREFERREDLWSCOLON", "PRIVACYLWSCOLON", "RACKLWSCOLON", "RSEQLWSCOLON",
  "ALERT_INFOLWSCOLON", "AUTHORIZATIONLWSCOLON", "IN_REPLY_TOLWSCOLON",
  "REPLY_TOLWSCOLON", "MAX_FORWARDSLWSCOLON", "REFER_TOLWSCOLON",
  "PRIORITYLWSCOLON", "PROXY_AUTHORIZATIONLWSCOLON",
  "PROXY_REQUIRELWSCOLON", "ROUTELWSCOLON", "ALLOWLWSCOLON",
  "PEARLYMEDIALWSCOLON", "CONTENT_DISPOSITIONLWSCOLON",
  "CONTENT_LANGUAGELWSCOLON", "EXPIRESLWSCOLON", "SESSIONEXPWSCOLON",
  "SESSIONIDLWSCOLON", "MINSELWSCOLON", "SOMELWSCOMMA",
  "PACCESSNETLWSCOLON", "REQDISPLWSCOLON", "PCHARGEADDRLWSCOLON",
  "PCHARGEVECTORLWSCOLON", "ANSWERMODELWSCOLON", "PRIVANSWERMODELWSCOLON",
  "ALERTMODELWSCOLON", "REFERSUBLWSCOLON", "PALERTINGMODELWSCOLON",
  "PANSWERSTATELWSCOLON", "ACCEPTCONTACTLWSCOLON", "REJECTCONTACTLWSCOLON",
  "PMEDIAAUTHLWSCOLON", "PATHLWSCOLON", "SECCLIENTLWSCOLON",
  "SECSERVERLWSCOLON", "SECVERIFYLWSCOLON", "PTARCEPTYIDLWSCOLON",
  "POSPSLWSCOLON", "PBILLINGINFOLWSCOLON", "PLAESLWSCOLON",
  "PDCSREDIRLWSCOLON", "PUSERDBASELWSCOLON", "SERVICEROUTELWSCOLON",
  "REFERREDBYTOLWSCOLON", "REPLACESLWSCOLON", "IFMATCHLWSCOLON",
  "ETAGLWSCOLON", "JOINLWSCOLON", "PSERVEDUSERLWSCOLON",
  "PPROFILEKEYLWSCOLON", "PSERVICEINDICATIONLWSCOLON",
  "PSERVICENOTIFICATIONLWSCOLON", "GEOROUTINGLWSCOLON",
  "TARGETDIALOGLWSCOLON", "INFOPACKAGELWSCOLON", "FEATURECAPSLWSCOLON",
  "RECVINFOLWSCOLON", "PLASTACCESSNETLWSCOLON", "_TOKEN_NO_DOT",
  "_HEXTOKEN", "_DOT", "_SLASH", "SEMICOLON", "EQUALSIGN", "_ABO", "_ABC",
  "_COLON", "QUESTMARK", "AMPERSANT", "SOMELWS_SEMICOLON", "_AT", "_HOST",
  "SCHEME", "_HNAME", "_HVALUE", "_PORT", "SOMELWS_COMMA_SOMELWS",
  "SOMELWS_SLASH_SOMELWS", "PROTOCOL_NAME", "PROTOCOL_VERSION",
  "TRANSPORT", "_URLTOKEN", "PASSERTEDSERVICELWSCOLON",
  "PPREFERREDSERVICELWSCOLON", "XAUTLWSCOLON", "XCARRIERINFOLWSCOLON",
  "XCHGDELAYLWSCOLON", "PAREAINFOLWSCOLON", "XFCILWSCOLON",
  "XCHGINFOLWSCOLON", "$accept", "SIP_Message", "Request", "Request_Line",
  "gen_req_ent_header_0toN", "gen_req_ent_header_1toN",
  "gen_req_ent_header", "entity_header", "Allow", "allowcontent_1toN",
  "Content_Disposition", "Content_Encoding", "conctencoding1_N",
  "Content_Language", "clangencoding1_N", "Content_Length", "Content_Type",
  "Expires", "X_AUT", "X_Carrier_Info", "X_CHGDelay", "X_CHGInfo", "X_FCI",
  "request_header", "Referedby", "PprofileKey", "PservedUser",
  "P_Service_Indication", "P_Service_Notification", "ReferTo",
  "Alert_Info", "alert_info_body1toN", "alert_info_body", "Authorization",
  "authbody", "In_Reply_To", "callid1toN", "Max_Forwards", "Priority",
  "Proxy_Authorization", "pauthbody", "Proxy_Require",
  "optioncontent_1toN", "Route", "routebody1toN", "routeadress", "Subject",
  "Response", "Status_Line", "gen_res_ent_header_0toN",
  "gen_res_ent_header_1toN", "gen_res_ent_header", "response_header",
  "Auth_info", "P_Asserted_Service", "P_Preferred_Service", "service1toN",
  "coma_authparam1_N", "Error_Info", "error_info_body1toN",
  "error_info_body", "Retry_After", "comment", "Server",
  "product_comment_s1toN", "product_comment", "Unsupported", "Warning",
  "warncontent_1toN", "warncontent", "host_port", "general_header",
  "recv_info_header", "info_package_range1toN", "info_package_type",
  "info_package_header", "target_dialogheader", "featureCapsHeader",
  "fc_values1toN", "fc_value", "geolocerr_header", "georouting_header",
  "geolocation_header", "geoloaction_list1toN", "geoloaction_value",
  "AcceptResPrioheader", "ResPrioheader", "rvalue_list1toN",
  "rvalue_value", "P_early_media", "embody1toN", "joinheader", "SIPetag",
  "SIPifmatch", "replacesheader", "service_route_header", "P_userdbase",
  "P_dcsredir", "P_laes", "laes_params", "laes_param", "laes_content",
  "host_and_port", "P_billing_info", "P_osps", "P_trace_pty", "Sec_client",
  "Sec_server", "Sec_verify", "Secmechanism_1toN", "Secmechanism",
  "Pathheader", "routebdy1toN", "routeadr", "P_media_auth",
  "auth_token_1toN", "Req_disp_cont", "directive_1toN", "Reject_cont",
  "Accept_cont", "conatact_1toN", "conatact_value", "session_exp_header",
  "session_id_header", "min_se_header", "HistoryInfo_header",
  "h_urispec_1toN", "h_urispec", "p_charge_vector", "p_charge_addr",
  "semicolon_param_1toN", "p_access_net_header",
  "p_last_access_net_header", "anetspec_1toN", "anetspec",
  "answer_mode_header", "priv_answer_mode_header", "alert_mode_header",
  "refer_sub_header", "p_alerting_mode_header", "p_answer_sate_header",
  "p_area_info", "p_visited_net_id_header", "vnetspec_1toN", "vnetspec",
  "P_called_party_id_header", "P_assoc_uri_header", "p_urispec_1toN",
  "p_urispec", "P_diversion_header", "p_divspec_1toN", "p_divspec",
  "p_nameaddr", "Subscription_stateheader", "AllowEventheader",
  "event_list1toN", "Eventheader", "event_event",
  "event_event_template1toN", "Reasonheader", "reason_1toN", "reason_",
  "P_Asserted_header", "asserted_id_1toN", "asserted_id",
  "P_Preferred_header", "preferred_id_1toN", "preferred_id",
  "Privacyheader", "privacy_value1ton", "privacy_value", "Rackheader",
  "Rseqheader", "ReplyTo", "replytobody", "Other", "Via",
  "sntp_sntb_scviap0N_cmt01_1cN", "LWS0N_c_LWS0N_spbscvpc_1toN",
  "sntp_sntb_scviap0N_cmt01", "sent_protocol", "sent_by",
  "semicolon_viaparams_1toN", "MinExpires", "MIME_Version", "User_Agent",
  "product_comment_1toN", "Timestamp", "Supported", "Require",
  "Record_Route", "Organization", "Date", "Cseq", "Call_Info",
  "call_info_body1toN", "call_info_body", "Call_ID", "LWS_0toN", "Accept",
  "acceptrange1toN", "acceptrange", "Accept_Encoding", "encoding1_N",
  "Accept_Language", "accept_lang_range1toN", "accept_lang_range",
  "WWW_Authenticate", "wwwauthbody", "Proxy_Authenticate", "proxyauthbody",
  "Toheader", "Contact", "contactbody1toN", "contactadress", "From",
  "semicolon_fromparam_1toN", "from_param", "from_param_withoutlws",
  "semicolon_paniparam_1toN", "pani_param", "equals_token_host_qtdstr",
  "token_or_host_or_quotedstring", "generic_param_withoutlws",
  "equals_token_host_qtdstr_withoutlws", "addr_spec_withnoparam",
  "SIP_URL_withnoparam", "display_name", "addr_spec", "SIP_URL",
  "userinfo_at_0to1", "hostport", "colon_port_0to1",
  "semicolon_urlparam_1toN", "semicolon_urlparam", "url_parameter",
  "headers", "amp_header_0toN", "amp_header_1toN", "amp_header", "header", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   167,   168,   168,   169,   170,   170,   171,   171,   172,
     172,   173,   173,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     179,   179,   180,   181,   181,   182,   183,   184,   185,   186,
     187,   188,   188,   189,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   191,
     191,   191,   191,   191,   191,   192,   192,   192,   192,   192,
     192,   193,   193,   193,   193,   193,   193,   194,   195,   196,
     196,   196,   196,   196,   196,   197,   198,   198,   199,   199,
     200,   201,   201,   202,   203,   203,   204,   205,   206,   207,
     207,   208,   209,   209,   210,   211,   211,   212,   212,   212,
     212,   213,   214,   215,   215,   216,   216,   217,   217,   218,
     218,   218,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   219,   220,   221,   222,   223,   223,   224,   224,   225,
     226,   226,   227,   227,   228,   228,   228,   228,   229,   229,
     230,   231,   231,   232,   232,   233,   234,   234,   235,   235,
     235,   236,   237,   237,   237,   237,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   239,   239,   240,   240,   241,   241,   242,   242,   243,
     243,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   250,   250,   251,   251,   252,   253,   254,   254,   255,
     256,   256,   257,   257,   258,   258,   259,   260,   261,   261,
     262,   263,   263,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   269,   269,   270,   270,   271,   272,   273,   274,
     275,   276,   276,   277,   277,   278,   279,   279,   280,   280,
     280,   280,   281,   282,   282,   283,   284,   284,   285,   286,
     287,   287,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   293,   293,   294,   294,   295,   296,   297,   297,   298,
     299,   300,   300,   301,   301,   302,   302,   303,   303,   304,
     304,   305,   305,   306,   306,   307,   307,   308,   309,   310,
     310,   311,   311,   312,   312,   313,   314,   314,   315,   315,
     316,   317,   317,   318,   318,   319,   319,   320,   320,   321,
     322,   322,   323,   323,   324,   324,   325,   325,   326,   327,
     327,   328,   328,   329,   330,   330,   331,   331,   331,   331,
     332,   333,   333,   334,   334,   334,   334,   335,   336,   336,
     337,   338,   339,   340,   341,   341,   341,   341,   341,   341,
     342,   343,   344,   344,   345,   345,   346,   346,   347,   348,
     348,   348,   348,   348,   349,   349,   350,   351,   352,   353,
     353,   354,   354,   354,   354,   354,   354,   355,   355,   356,
     357,   358,   359,   360,   361,   362,   362,   363,   363,   364,
     365,   365,   366,   366,   367,   367,   368,   368,   369,   369,
     370,   370,   371,   371,   372,   372,   373,   373,   374,   375,
     375,   376,   377,   377,   378,   378,   378,   378,   378,   378,
     379,   379,   380,   380,   381,   381,   381,   381,   381,   381,
     382,   382,   382,   382,   382,   382,   383,   383,   384,   384,
     384,   384,   385,   385,   386,   386,   387,   387,   387,   387,
     387,   387,   388,   388,   389,   389,   389,   390,   390,   391,
     392,   393,   394,   394,   394,   395,   396,   396,   396,   396,
     397,   397,   398,   399,   399,   400,   400,   401,   401,   402,
     403,   404,   404,   405,   405,   406,   407
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     6,     2,     0,     1,     1,
       2,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     4,     3,     4,     2,
       2,     4,     2,     2,     4,     3,     3,     3,     3,     3,
       3,     3,     5,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     7,
       6,     4,     6,     5,     3,     7,     6,     4,     6,     5,
       3,     7,     6,     4,     6,     5,     3,     3,     3,     7,
       6,     4,     6,     5,     3,     2,     1,     3,     4,     5,
       2,     3,     3,     3,     1,     4,     3,     2,     2,     3,
       3,     2,     2,     4,     2,     1,     3,     6,     5,     5,
       4,     2,     3,     6,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     3,     2,
       1,     3,     4,     5,     3,     7,     8,     4,     1,     2,
       3,     1,     3,     3,     1,     2,     3,     3,     1,     4,
       4,     5,     3,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     3,     2,     3,     3,     4,     3,
       4,     2,     1,     3,     2,     3,     3,     4,     3,     5,
       2,     1,     3,     4,     5,     2,     2,     2,     4,     3,
       1,     2,     2,     4,     3,     4,     3,     3,     3,     4,
       2,     5,     6,     3,     4,     3,     5,     1,     3,     1,
       1,     4,     3,     1,     7,     8,     3,     2,     2,     2,
       2,     1,     3,     2,     3,     2,     1,     3,     6,     5,
       5,     4,     2,     2,     4,     2,     2,     4,     2,     2,
       1,     3,     2,     3,     3,     4,     3,     4,     3,     4,
       2,     1,     3,     1,     2,     2,     2,     1,     3,     2,
       2,     1,     3,     2,     3,     3,     4,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,     2,     2,     1,
       3,     2,     3,     2,     3,     2,     1,     3,     1,     2,
       2,     1,     3,     1,     2,     5,     4,     3,     4,     2,
       2,     4,     3,     4,     1,     3,     2,     4,     2,     1,
       3,     2,     3,     2,     1,     3,     0,     5,     4,     2,
       2,     1,     3,     0,     5,     4,     2,     2,     2,     4,
       1,     7,     3,     2,     6,     5,     3,     5,     4,     2,
       2,     2,     3,     2,     2,     3,     4,     3,     5,     5,
       4,     4,     3,     1,     2,     3,     3,     5,     3,     1,
       3,     3,     5,     5,     7,     7,     9,     1,     2,     2,
       2,     2,     3,     5,     2,     1,     3,     4,     5,     3,
       0,     1,     1,     2,     1,     3,     4,     5,     1,     2,
       2,     4,     1,     2,     1,     3,     2,     3,     2,     3,
       3,     2,     3,     3,     7,     6,     4,     6,     5,     3,
       3,     2,     1,     3,     6,     5,     3,     5,     4,     2,
       7,     6,     4,     6,     5,     3,     2,     3,     4,     3,
       2,     1,     2,     1,     2,     3,     4,     3,     3,     2,
       2,     1,     3,     2,     1,     1,     1,     2,     1,     2,
       1,     3,     2,     2,     2,     1,     5,     4,     4,     3,
       0,     1,     2,     0,     2,     1,     2,     2,     2,     1,
       3,     0,     1,     1,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       6,     0,     0,     1,     0,   470,   470,   470,   470,   470,
     470,   470,     0,   470,   470,   470,   457,   470,     0,   470,
     470,   470,   470,   470,   470,     0,   470,   470,   470,   470,
     470,   470,   470,   470,     0,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,     0,   470,   470,   470,    23,   280,   470,   470,   470,
     470,   470,   470,   470,   470,     0,     0,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,     0,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     251,   470,   470,   470,   470,   470,   470,     0,   470,   470,
       0,     0,     9,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   120,     0,     0,   117,   121,   119,
     114,     0,   550,     0,    15,   471,     0,   488,     0,   491,
       0,     0,   501,   502,   275,     0,   276,     0,   430,     0,
       0,   270,   271,     0,   458,     0,   431,     0,   111,    29,
       0,     0,     0,     0,   473,   474,     0,   479,     0,   483,
     484,     0,   523,   132,   137,   521,   464,   465,     0,     0,
       0,     0,   389,     0,     0,     0,     0,   461,   460,   105,
       0,   373,     0,   368,   369,     0,   459,   340,   341,   343,
       0,     0,   375,   376,   378,   380,   381,   383,   139,   140,
       0,     0,     0,   155,     0,     0,   403,   404,     0,   398,
     399,     0,   410,   411,     0,   417,     0,     0,     0,    85,
      86,     0,    90,     0,     0,   423,     0,     0,     0,    97,
      98,     0,   101,   104,    24,     0,   281,     0,     0,    32,
       0,     0,     0,     0,     0,   349,   351,     0,   325,     0,
     346,   347,   345,     0,     0,     0,     0,     0,     0,   329,
     330,     0,   328,   322,     0,   315,   316,     0,   308,   311,
       0,   309,   310,   307,     0,     0,     0,     0,   545,     0,
     290,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,   262,     0,   252,   253,     0,   350,
     133,     0,   134,     0,     0,     0,   367,     0,     0,     4,
      10,    16,    17,    18,    19,    20,    21,    22,   244,   245,
     246,   248,   249,    56,    55,    54,   229,   230,    53,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   129,    57,
      58,   124,   126,   127,   128,   130,   243,   242,   240,   241,
     239,   238,   237,   177,   178,   219,   228,   226,   227,   225,
     224,   223,   222,   221,   220,   218,   217,   214,   215,   216,
     213,   212,   211,   210,   209,   202,   203,   201,   180,   193,
     192,   190,   191,   231,   232,   233,   234,   235,   236,   247,
     188,   186,   184,   185,   204,   176,   175,   195,   187,   189,
     183,   194,   196,   198,   250,   208,   174,   181,   207,   205,
     200,   199,   197,   182,   173,   172,   170,   169,   166,   167,
     168,   131,   125,   206,   171,   179,   123,   112,   118,     0,
     551,     0,     0,     0,     0,     0,     0,   470,   470,   470,
       0,   550,   499,   540,     0,   500,     0,   509,     0,   470,
     470,     0,   277,     0,   515,     0,   469,   266,   470,     0,
     470,   102,     0,   433,   470,   470,    30,    35,    36,     0,
     470,   480,   470,   486,   470,   523,   520,     0,     0,   522,
       0,   470,     0,   446,   470,   394,   392,   470,   390,   387,
     462,     0,   470,     0,     0,     0,   374,     0,     0,   470,
     371,   470,   344,   451,     0,   154,   449,   448,   470,   379,
     470,   384,   470,     0,   144,   150,   151,     0,   157,   158,
     156,   470,     0,     0,   409,   470,   401,   470,     0,   416,
       0,   470,   420,   418,     0,   422,   470,     0,     0,     0,
      94,    93,     0,   429,     0,    96,     0,    84,     0,     0,
       0,   470,    25,   470,   282,    27,   470,    33,    37,   334,
     336,   338,   470,   353,   470,   326,     0,   355,   357,   359,
     361,   363,   365,   470,   332,   470,   323,   470,     0,     0,
     470,   313,   306,     0,   303,   295,   293,     0,     0,    64,
       0,   288,   287,   286,   284,     0,    76,     0,     0,    70,
       0,    77,    78,   268,   259,   257,   470,   264,   470,   255,
     470,   135,    38,    39,    40,    43,    41,     0,   553,   549,
       0,   490,   489,   493,   492,   542,   544,   543,     0,     0,
     496,     0,     0,   506,     0,     0,   503,     0,     0,     0,
     512,     0,   267,   272,     0,     0,     0,     0,   432,     0,
       0,     0,   475,     0,   487,   485,     0,   519,   536,     0,
     534,   535,   533,   138,   466,     0,     0,   470,   393,     0,
     388,     0,   106,     0,     0,   516,     0,     0,     0,   370,
     372,   342,     0,     0,   148,     0,     0,   377,   382,   141,
       0,     0,   147,     0,     0,   470,   405,     0,     0,   400,
     402,   412,     0,     0,     0,     0,    87,     0,    92,    91,
     470,     0,   426,     0,     0,    81,     0,   100,    99,     0,
       0,    28,     0,   335,   337,   339,   352,     0,   354,     0,
     348,   356,   358,   360,   362,   364,   366,   331,   333,     0,
     317,     0,     0,   312,   314,     0,     0,   470,   294,     0,
       0,    61,     0,   289,   285,     0,    73,     0,     0,    67,
       0,     0,   260,   258,   263,   265,   254,   256,     0,     0,
     113,     0,   552,     0,     0,     0,   547,   555,   548,     5,
     498,   541,     0,   508,     0,   278,   279,   514,     0,   273,
     103,     0,   434,     0,   443,   437,    31,   476,   481,   518,
     532,   467,   463,   395,     0,   391,   447,   110,     0,   517,
     386,     0,   453,   452,   153,   149,   450,   142,     0,   152,
     163,   165,     0,     0,     0,   408,     0,   415,     0,   419,
       0,    88,     0,   428,     0,    83,     0,    26,   283,    34,
       0,   534,   524,   531,     0,   327,   324,   321,     0,     0,
     302,   471,   296,   297,   299,     0,   300,   291,    63,     0,
      75,     0,    69,     0,   269,   136,    42,   554,   538,   559,
     557,     0,   561,   558,   556,   546,   495,   497,   505,   507,
     511,   513,   274,     0,   435,     0,     0,     0,   436,   477,
     468,   470,   396,   108,   109,   385,     0,     0,   143,     0,
       0,     0,     0,   159,   160,   407,   414,     0,    89,    95,
     425,   427,    80,    82,   534,   530,     0,   529,   525,   319,
     320,     0,   470,   470,   292,    60,    62,    72,    74,    66,
      68,     0,   537,     0,     0,   560,   562,   563,   494,   504,
     510,   438,     0,     0,   442,   444,     0,     0,   107,   455,
     454,   145,   162,   164,   161,   421,   424,    79,     0,   528,
     527,   318,   304,   298,     0,    59,    71,    65,   539,   566,
     565,   564,     0,   440,   441,   445,   397,     0,   146,   526,
     305,   301,   439,   456
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,   130,   131,   132,   133,   134,   374,
     135,   136,   289,   137,   379,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   359,   360,   154,   362,   155,   681,   156,   157,   158,
     370,   159,   284,   160,   318,   319,   161,     7,     8,   255,
     256,   257,   162,   163,   164,   165,   440,   303,   166,   338,
     339,   167,   825,   168,   655,   646,   169,   170,   658,   659,
     962,   171,   172,   436,   437,   173,   174,   175,   433,   434,
     176,   177,   178,   281,   282,   179,   180,   274,   592,   181,
     376,   182,   183,   184,   185,   186,   187,   188,   189,   992,
     993,   994,   725,   190,   191,   192,   193,   194,   195,   408,
     409,   196,   405,   406,   197,   403,   198,   388,   199,   200,
     399,   400,   201,   202,   203,   204,   327,   328,   205,   206,
     390,   207,   208,   385,   386,   209,   210,   211,   212,   213,
     214,   215,   216,   323,   324,   217,   218,   332,   333,   219,
     335,   336,   329,   220,   221,   312,   222,   626,   943,   223,
     349,   350,   224,   346,   347,   225,   352,   353,   226,   355,
     673,   227,   228,   229,   365,   230,   231,   286,   788,   603,
     604,   935,  1028,   232,   233,   234,   647,   235,   236,   237,
     238,   239,   240,   241,   242,   306,   307,   243,   322,   244,
     294,   295,   245,   297,   246,   299,   300,   247,   267,   248,
     269,   249,   250,   272,   273,   251,   636,   304,   305,   868,
     982,   619,   983,  1009,  1072,   587,   583,   588,   417,   418,
     571,   759,   912,   916,   917,  1010,   918,  1075,  1076,  1077,
    1012
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -750
static const yytype_int16 yypact[] =
{
     290,   300,    86,   161,   144,  -750,   875,  -750,  1082,   185,
    -750,   167,    77,  -750,   219,   210,   210,   210,   210,   210,
     210,   210,   239,   210,   210,   210,   260,   210,   245,   210,
     210,   210,   174,   201,   214,   266,   210,   210,   210,   210,
     210,   210,   210,   210,   249,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   206,   148,
     210,   208,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   257,   210,   210,   210,   260,   260,   210,   210,   210,
     210,   210,   210,   210,   210,   266,   266,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,    77,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     260,   210,   210,   210,   210,   210,   210,   266,   210,   210,
     269,  1248,  -750,  -750,   279,   288,   296,   310,   322,   328,
     329,   330,   331,   332,   333,   334,  -750,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,  -750,   350,   351,   353,   354,   355,   356,   358,
     359,  -750,   360,   361,   362,   363,   365,   366,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   386,   387,   388,   389,   391,   392,   393,
     394,   395,   398,   400,   401,   402,   404,   405,   406,   407,
     408,   409,   411,   412,   413,   414,   415,   416,   417,   418,
     420,   421,   422,   423,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   438,   439,   440,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   454,
     455,   456,   459,  -750,  -750,   311,  1414,  -750,  -750,  -750,
    -750,   471,   453,   472,  -750,  -750,   276,  -750,   295,  -750,
     107,   101,   385,  -750,   403,   352,   403,   111,  -750,   465,
     458,   410,  -750,   367,   436,   460,  -750,   326,  -750,   441,
     466,   464,   457,   473,  -750,   461,   477,   462,   481,  -750,
     463,   482,   114,  -750,   470,  -750,  -750,   474,   383,   489,
     479,   390,   475,   390,   497,   468,   487,  -750,   476,  -750,
     131,   396,   173,   478,  -750,   224,   436,   483,  -750,   396,
     491,   205,   484,  -750,   396,   485,  -750,   396,  -750,   486,
     397,   505,   205,   436,   399,   399,   492,  -750,   116,   498,
    -750,   508,   499,  -750,   121,   467,   510,   501,   504,  -750,
     506,   419,  -750,   299,   490,  -750,   125,   507,   127,  -750,
    -750,   305,   436,   476,   509,   511,   512,   518,   519,   513,
     520,   524,   525,   530,   532,   515,  -750,   224,   516,   537,
     469,  -750,   469,   538,   539,   543,   547,   548,   553,   521,
    -750,   550,   521,   523,   557,   526,  -750,   178,   527,  -750,
     563,   527,   527,  -750,   567,   493,   480,   488,  -750,   495,
     526,   141,   589,   573,   574,   594,   145,   147,   585,   590,
     591,   612,   596,  -750,   531,   598,  -750,   545,   603,   515,
     546,   604,   546,   605,   609,   613,   469,   517,   614,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   535,
    -750,   496,   638,   266,   266,   266,   266,   210,   210,   210,
      77,   453,   396,  -750,   522,  -750,    77,   396,   528,   210,
     210,   514,  -750,    77,   396,   533,  -750,   396,   210,    77,
     210,  -750,   494,   529,   210,   210,  -750,  -750,  -750,   534,
     210,  -750,   210,   396,   210,   162,  -750,   540,   163,  -750,
     266,   210,   500,  -750,   210,   542,   396,   210,  -750,   396,
    -750,   549,   210,    77,   536,   266,   503,    77,   544,   210,
     396,   210,   503,   132,   615,  -750,  -750,   627,   210,   503,
     210,   503,   210,   555,    94,   630,  -750,   656,   569,  -750,
     569,   148,    77,   551,  -750,   210,   396,   208,    77,  -750,
     552,   210,  -750,  -750,   635,  -750,   210,   558,   266,   266,
    -750,   571,    77,   396,   554,  -750,    77,   396,   560,   266,
     266,   210,  -750,   210,  -750,   396,   210,  -750,  -750,   396,
     396,   396,   210,   561,   210,  -750,   266,   396,   396,   396,
     396,   396,   396,   210,   396,   210,  -750,   210,    77,   570,
     210,   396,  -750,   564,   541,   562,   396,    77,    77,   396,
     578,   396,  -750,  -750,   396,    77,   396,   581,    77,   396,
     584,  -750,  -750,   170,   396,   396,   210,   396,   210,   396,
     210,  -750,  -750,  -750,  -750,  -750,   580,   654,   572,   181,
     655,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   587,   496,
     503,    77,   592,   503,    77,   159,  -750,   352,   556,   595,
     503,    77,   503,  -750,   597,   642,   576,   326,   588,   579,
     645,   659,  -750,   653,   503,  -750,   540,  -750,  -750,   129,
    -750,  -750,  -750,  -750,  -750,   600,   681,   210,   503,   390,
     503,   652,  -750,   601,    77,  -750,   266,   602,    77,  -750,
     503,  -750,   662,   696,  -750,   207,   205,  -750,  -750,  -750,
     606,   672,   503,   205,   110,   209,  -750,   607,    77,  -750,
     503,  -750,   608,    77,   510,   703,  -750,   610,  -750,  -750,
     210,   611,   503,    77,   617,   503,    77,  -750,  -750,   717,
     718,   503,   721,   503,   503,   503,  -750,   164,   616,   726,
    -750,   503,   503,   503,   503,   503,   503,  -750,   503,   728,
    -750,   618,    77,  -750,   503,   625,   619,   302,   503,   621,
     622,   503,    77,   503,   503,   623,   503,    77,   624,   503,
      77,   540,   503,   503,  -750,   503,  -750,   503,   738,   739,
    -750,   620,  -750,   740,   626,   740,   181,  -750,  -750,  -750,
     396,  -750,   631,   396,   632,  -750,  -750,   396,   633,   396,
    -750,   628,  -750,   326,   128,   640,  -750,   396,  -750,  -750,
    -750,   396,  -750,   641,   644,  -750,  -750,   396,   646,  -750,
    -750,   647,   650,   750,  -750,  -750,  -750,   396,   615,  -750,
     648,   651,   781,   399,   399,  -750,   657,  -750,   661,  -750,
     763,   396,   782,   396,   663,   396,   664,  -750,  -750,  -750,
     149,   176,  -750,  -750,   164,  -750,  -750,   396,   665,   649,
    -750,   482,  -750,   666,  -750,   767,  -750,   396,   396,   667,
     396,   668,   396,   669,  -750,  -750,  -750,  -750,   658,  -750,
    -750,   673,   670,  -750,  -750,  -750,   503,   396,   503,   396,
     503,   396,   503,   671,  -750,   675,    44,   266,   676,   503,
     503,   210,  -750,   503,   396,  -750,   755,   759,   503,   215,
     674,   677,   786,  -750,  -750,  -750,  -750,   785,   503,  -750,
     503,   396,   503,   396,   177,  -750,   540,  -750,  -750,   503,
     396,   679,   302,   210,   503,   503,   396,   503,   396,   503,
     396,   129,  -750,   680,   626,  -750,   670,  -750,   503,   503,
     503,  -750,    58,   678,  -750,  -750,   266,   684,   503,  -750,
     686,   396,  -750,  -750,  -750,  -750,   503,   503,   540,  -750,
    -750,   503,   396,  -750,   480,   503,   503,   503,  -750,  -750,
    -750,  -750,   685,  -750,  -750,  -750,  -750,   774,   503,  -750,
     503,  -750,  -750,  -750
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -750,  -750,  -750,  -750,  -750,  -750,   690,     5,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,    23,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,   156,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   158,  -750,   751,   192,  -750,  -750,  -750,  -750,
    -750,   577,    29,  -750,  -750,  -750,   715,  -357,  -750,   187,
    -750,  -750,  -118,  -750,  -750,  -313,  -750,  -750,   502,  -626,
    -750,    48,  -750,    93,  -750,  -750,  -750,  -750,    96,  -750,
    -750,  -750,  -750,  -750,   246,  -750,  -750,   825,    71,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -212,
    -750,  -750,  -252,  -750,  -750,  -750,  -750,  -750,  -750,   241,
     134,  -750,   749,   139,  -750,  -750,  -750,  -750,  -750,  -750,
     764,   146,  -750,  -750,  -750,  -750,  -750,   216,  -750,  -750,
      97,  -750,  -750,   741,   165,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,   221,  -750,  -750,  -750,   213,  -750,
    -750,   218,    73,  -750,  -750,  -750,  -750,  -293,  -750,  -750,
    -750,   198,  -750,  -750,   203,  -750,  -750,   199,  -750,  -750,
      21,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -749,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,   248,  -750,  -750,   -15,  -750,
     261,  -750,  -750,  -750,  -750,   256,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,   284,  -750,  -217,    30,  -294,  -750,
    -109,  -583,  -548,  -750,  -750,  -146,  -750,  -143,  -183,   865,
     297,   112,  -750,  -750,   -36,   -33,   -32,  -750,  -750,  -193,
    -188
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -483
static const yytype_int16 yytable[] =
{
     266,   268,   270,   271,   275,   275,   277,   616,   279,   280,
     283,   285,   287,   253,   290,   291,   292,   293,   296,   298,
     628,   308,   309,   310,   311,   313,   314,   315,   316,   656,
     320,   254,   325,   285,   797,   330,   331,   258,   932,   340,
     341,   342,   285,   345,   348,   351,   354,   356,   357,   358,
     361,   363,   364,   366,   367,   368,   259,   371,   285,   320,
     375,   377,   378,   380,   381,   382,   383,   384,   387,   389,
     802,  1083,   393,   394,   395,   396,   397,   398,   401,   401,
     404,   407,   410,   410,   410,  1112,   414,   415,   416,    11,
     419,   407,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   435,   438,   387,   441,   441,   443,
     444,   445,   642,   447,   448,   391,   391,   649,  -470,   321,
     651,   265,   577,   578,   582,   334,   337,   584,   577,   578,
     579,   594,   577,   578,   595,   585,   579,   577,   578,   960,
     579,   617,   577,   578,    13,   579,   577,   578,   577,   578,
     579,   798,   577,   578,   579,  1025,   579,   391,   800,   822,
     579,  -406,   577,   578,    12,   664,   577,   578,   577,   578,
     579,   798,   261,   413,   579,   265,   579,   634,  1054,   638,
     577,   578,   640,   392,  1024,   798,   798,  -472,   579,   796,
     799,   980,   800,   981,   577,   578,  1084,   265,   260,   577,
     578,   265,   579,  1056,  1098,   663,   326,   579,   669,   344,
    1113,   670,   963,   939,  -478,   343,   761,   762,   763,   764,
     683,  -413,   687,   684,   446,   688,   262,  -482,   265,   644,
     954,   372,   264,   265,   645,   265,   265,   265,  1091,   955,
     635,   265,   586,  -406,   703,   577,   578,   955,   580,   278,
     581,   940,   593,   579,   618,   288,   581,   662,   961,   317,
     581,   253,   668,   803,   719,   262,   682,   369,   686,   823,
     581,  1026,   633,   449,   581,   729,   581,   801,   730,   254,
     736,   739,   728,   737,   740,   258,   735,   265,   738,  -470,
     581,     1,   451,   301,   581,   302,   581,   801,     2,     3,
     586,   452,   618,  -413,   259,   573,     9,   574,   581,   453,
    -470,   801,   801,    10,   637,   567,   618,   618,  1004,   718,
     913,   848,   849,   454,   575,   914,   576,   915,   678,   991,
     679,   302,   857,   858,   689,   455,   690,  1043,  1044,   411,
     412,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   770,   480,   481,   482,   483,
     773,   484,   485,   486,   487,   488,   489,   780,   490,   491,
     782,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   794,   768,  1057,   507,
     508,   509,   510,   772,   511,   512,   513,   514,   515,   808,
     779,   516,   810,   517,   518,   519,   784,   520,   521,   522,
     523,   524,   525,   820,   526,   527,   528,   529,   530,   531,
     532,   533,  1055,   534,   535,   536,   537,   832,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   840,
     813,   549,   550,   551,   817,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   852,   563,   564,   565,
     855,  1099,   566,  1100,   569,   572,   596,   608,   861,   837,
     589,   602,   863,   864,   865,   842,   570,   591,   630,   601,
     871,   872,   873,   874,   875,   876,   606,   878,   590,   851,
     597,   680,   609,   854,   884,   598,   607,   611,   599,   888,
     613,   615,   891,   956,   893,  1119,   945,   894,   623,   896,
     959,   624,   899,  1108,   622,   625,   629,   902,   903,   631,
     905,   600,   907,   643,   654,   881,   605,   666,   653,   672,
     692,   757,   635,   674,   889,   890,   675,   694,   695,   685,
     697,   657,   895,   698,   699,   898,   610,   612,   614,   700,
     677,   701,   765,   766,   767,   620,   705,   707,   708,   621,
     627,   632,   709,   639,   775,   777,   710,   711,   641,   648,
     650,   652,   712,   283,   714,   785,   716,   661,   922,   789,
     790,   924,   721,   665,   667,   293,   722,   793,   928,   298,
     731,   676,   732,   733,   691,   734,   308,   693,   696,   806,
     702,   704,   809,   671,   741,   706,   713,   320,   715,   742,
     743,   717,   720,   744,   325,   745,   746,   747,   724,   723,
     726,   948,   749,   751,   752,   951,   727,   340,   753,   831,
     748,   750,   754,   756,   758,   760,   348,   824,   786,   816,
     351,   778,   354,   755,   826,   966,   844,   833,   805,   834,
     968,   361,   845,   771,   835,   815,   850,   910,   919,   774,
     974,   930,   791,   976,   781,   936,   859,   814,   860,   807,
     618,   862,   787,   938,   886,   818,   811,   387,   937,   869,
     942,   926,   838,   843,   946,   853,   958,   616,   401,   988,
     879,   856,   407,  1016,   952,   410,  1018,   867,   887,   999,
    1020,   882,  1022,   830,  1001,   911,   847,  1003,   885,   892,
    1029,   334,   897,   337,  1030,   900,   909,   934,   901,   920,
    1033,   435,   931,   438,   923,   908,   870,   927,   953,   929,
    1038,   933,   941,   947,   950,   970,   977,   978,   957,   965,
     967,   979,   971,   973,  1048,   985,  1050,   986,  1052,   975,
     987,   989,   984,   997,   998,  1000,  1002,  1005,  1006,  1008,
    1059,   990,  1007,  1017,  1019,  1021,  1011,  1037,  1031,  1032,
    1064,  1065,  1023,  1067,  1042,  1069,  1027,  1036,  1034,  1035,
    1047,  1040,   944,  1049,  1041,  1063,  1061,  1089,  1071,  1045,
    1078,  1090,  1079,  1046,  1080,  1051,  1053,  1060,  1094,  1066,
    1068,  1070,  1062,  1073,  1095,  1074,  1123,  1088,  1082,  1116,
     964,   450,  1086,  1117,   812,   373,  1092,  1102,  1081,  1093,
    1114,  1109,   846,   568,  1096,   972,  1097,  1122,   442,   829,
    1039,   906,   904,  1101,   783,   276,   949,   660,   925,  1105,
    1103,  1106,  1121,  1107,   883,   420,   880,   821,   402,   877,
     819,   827,   439,   839,   836,   969,   841,   866,   828,   804,
     795,   792,   995,   776,  1118,  1058,    14,   263,   769,    -7,
    1014,   921,  1013,  1111,  1015,  1120,  1110,    15,     0,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,    28,    29,    30,   996,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,     0,     0,     0,     0,     0,   995,  1104,     0,
       0,     0,     0,     0,     0,     0,     0,  1085,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,  -115,     0,     0,     0,
       0,     0,   996,     0,    15,     0,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,  1115,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,     0,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,    14,
       0,     0,    -8,     0,     0,     0,     0,     0,     0,     0,
      15,     0,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   252,     0,     0,  -116,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-750))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    16,    17,    18,    19,    20,    21,   301,    23,    24,
      25,    26,    27,     8,    29,    30,    31,    32,    33,    34,
     313,    36,    37,    38,    39,    40,    41,    42,    43,   342,
      45,     8,    47,    48,   617,    50,    51,     8,   787,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     8,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     618,    27,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    27,   101,   102,   103,     3,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   329,   128,   129,    85,    86,   334,    24,    46,
     337,    27,    21,    22,   270,    52,    53,   270,    21,    22,
      29,   277,    21,    22,   277,    34,    29,    21,    22,    29,
      29,    27,    21,    22,     0,    29,    21,    22,    21,    22,
      29,    22,    21,    22,    29,    27,    29,   127,    29,    27,
      29,    13,    21,    22,     3,   348,    21,    22,    21,    22,
      29,    22,     5,   100,    29,    27,    29,   320,    29,   322,
      21,    22,   325,    86,   933,    22,    22,    13,    29,    27,
      27,    27,    29,    29,    21,    22,   152,    27,    13,    21,
      22,    27,    29,    27,    27,   348,    48,    29,   354,     3,
     152,   354,     3,   796,    13,    57,   573,   574,   575,   576,
     366,    13,   368,   366,   127,   368,   149,    13,    27,    24,
      23,    73,    13,    27,    29,    27,    27,    27,    23,    32,
     146,    27,   141,    95,   387,    21,    22,    32,   141,    10,
     149,   799,   141,    29,   140,    10,   149,   141,   148,    10,
     149,   256,   141,   620,   407,   149,   141,    10,   141,   137,
     149,   143,   141,     4,   149,   421,   149,   148,   421,   256,
     426,   427,   141,   426,   427,   256,   141,    27,   141,    29,
     149,     1,    13,    27,   149,    29,   149,   148,     8,     9,
     141,    13,   140,    95,   256,    29,     6,    31,   149,    13,
     140,   148,   148,    13,   141,     4,   140,   140,   901,   141,
     139,   678,   679,    13,    29,   144,    31,   146,    29,    27,
      31,    29,   689,   690,    29,    13,    31,   963,   964,    98,
      99,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,   582,    13,    13,    13,    13,
     587,    13,    13,    13,    13,    13,    13,   594,    13,    13,
     597,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,   613,   580,   981,    13,
      13,    13,    13,   586,    13,    13,    13,    13,    13,   626,
     593,    13,   629,    13,    13,    13,   599,    13,    13,    13,
      13,    13,    13,   640,    13,    13,    13,    13,    13,    13,
      13,    13,   980,    13,    13,    13,    13,   654,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,   666,
     633,    13,    13,    13,   637,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,   683,    13,    13,    13,
     687,  1054,    13,  1056,     3,     3,    11,    20,   695,   662,
      95,   155,   699,   700,   701,   668,    33,   135,    20,    29,
     707,   708,   709,   710,   711,   712,    30,   714,    95,   682,
      42,    11,    29,   686,   721,    95,    42,    30,   141,   726,
      29,    29,   729,   826,   731,  1098,   809,   734,    29,   736,
     833,    42,   739,  1071,   141,   135,    29,   744,   745,    42,
     747,    95,   749,    42,    29,   718,    95,    29,   141,    29,
      29,     6,   146,    42,   727,   728,    42,    29,    29,    42,
      30,   152,   735,    29,    29,   738,    95,    95,    95,    29,
     141,    29,   577,   578,   579,    95,    29,    29,    29,    95,
      95,    95,    29,    95,   589,   590,    29,    29,    95,    95,
      95,    95,    29,   598,    34,   600,    29,    95,   771,   604,
     605,   774,    29,    95,    95,   610,    29,   612,   781,   614,
      11,    95,    29,    29,    95,    11,   621,    95,    95,   624,
      95,    95,   627,   146,    29,   146,    95,   632,    95,    29,
      29,    95,    95,    11,   639,    29,    95,    29,   148,   136,
     142,   814,    29,    29,    29,   818,   141,   652,    29,   654,
      95,    95,    29,    29,   148,     7,   661,    32,   154,   146,
     665,   137,   667,   136,    27,   838,   671,    27,   158,     3,
     843,   676,    27,   141,    95,   635,    95,    13,    13,   141,
     853,    29,   138,   856,   141,    30,   691,   141,   693,   137,
     140,   696,   153,    30,   143,   141,   137,   702,    29,   704,
       9,   135,   141,   141,    42,   141,    24,   991,   713,   882,
     715,   141,   717,   920,    42,   720,   923,   146,   146,   892,
     927,   141,   929,   158,   897,   143,   158,   900,   154,   141,
     937,   648,   141,   650,   941,   141,   146,   148,   743,   142,
     947,   746,   156,   748,   142,   750,   706,   142,    42,   142,
     957,   153,   142,   142,   142,    42,    29,    29,   142,   142,
     142,    30,   142,   142,   971,    29,   973,    29,   975,   142,
     142,   136,   146,   142,   142,   142,   142,    29,    29,    29,
     987,   152,   152,   142,   142,   142,   150,    27,   137,   135,
     997,   998,   154,  1000,     3,  1002,   146,   137,   142,   142,
      27,   143,   807,    11,   143,    28,   147,    42,   140,   142,
    1017,    42,  1019,   142,  1021,   142,   142,   142,    22,   142,
     142,   142,   146,   140,    29,   145,    42,  1034,   143,   135,
     835,   131,   146,   137,   632,    74,   152,   148,   157,   152,
     152,   151,   676,   256,  1051,   850,  1053,   152,   123,   652,
     958,   748,   746,  1060,   598,    20,   816,   345,   777,  1066,
    1062,  1068,  1104,  1070,   720,   106,   717,   641,    94,   713,
     639,   648,   121,   665,   661,   844,   667,   702,   650,   621,
     614,   610,   887,   589,  1091,   984,     1,    12,   581,     4,
     916,   769,   915,  1076,   916,  1102,  1074,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,   887,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,  1031,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,  1062,  1063,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1027,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,  1062,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1086,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   160,   161,   162,   163,   164,   165,   166,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   160,   161,   162,   163,   164,   165,
     166
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     8,     9,   168,   169,   170,   214,   215,     6,
      13,     3,     3,     0,     1,    12,    14,    15,    16,    17,
      18,    19,    25,    26,    35,    36,    37,    38,    39,    40,
      41,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   159,   160,   161,   162,   163,   164,   165,   166,
     171,   172,   173,   174,   175,   177,   178,   180,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   200,   202,   204,   205,   206,   208,
     210,   213,   219,   220,   221,   222,   225,   228,   230,   233,
     234,   238,   239,   242,   243,   244,   247,   248,   249,   252,
     253,   256,   258,   259,   260,   261,   262,   263,   264,   265,
     270,   271,   272,   273,   274,   275,   278,   281,   283,   285,
     286,   289,   290,   291,   292,   295,   296,   298,   299,   302,
     303,   304,   305,   306,   307,   308,   309,   312,   313,   316,
     320,   321,   323,   326,   329,   332,   335,   338,   339,   340,
     342,   343,   350,   351,   352,   354,   355,   356,   357,   358,
     359,   360,   361,   364,   366,   369,   371,   374,   376,   378,
     379,   382,     1,   174,   190,   216,   217,   218,   219,   238,
      13,     5,   149,   396,    13,    27,   365,   375,   365,   377,
     365,   365,   380,   381,   254,   365,   254,   365,    10,   365,
     365,   250,   251,   365,   209,   365,   344,   365,    10,   179,
     365,   365,   365,   365,   367,   368,   365,   370,   365,   372,
     373,    27,    29,   224,   384,   385,   362,   363,   365,   365,
     365,   365,   322,   365,   365,   365,   365,    10,   211,   212,
     365,   319,   365,   310,   311,   365,   209,   293,   294,   319,
     365,   365,   314,   315,   319,   317,   318,   319,   226,   227,
     365,   365,   365,   209,     3,   365,   330,   331,   365,   327,
     328,   365,   333,   334,   365,   336,   365,   365,   365,   198,
     199,   365,   201,   365,   365,   341,   365,   365,   365,    10,
     207,   365,   209,   211,   176,   365,   257,   365,   365,   181,
     365,   365,   365,   365,   365,   300,   301,   365,   284,   365,
     297,   384,   297,   365,   365,   365,   365,   365,   365,   287,
     288,   365,   287,   282,   365,   279,   280,   365,   276,   277,
     365,   276,   276,   319,   365,   365,   365,   395,   396,   365,
     279,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   245,   246,   365,   240,   241,   365,   300,
     223,   365,   223,   365,   365,   365,   297,   365,   365,     4,
     173,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,     4,   218,     3,
      33,   397,     3,    29,    31,    29,    31,    21,    22,    29,
     141,   149,   392,   393,   394,    34,   141,   392,   394,    95,
      95,   135,   255,   141,   392,   394,    11,    42,    95,   141,
      95,    29,   155,   346,   347,    95,    30,    42,    20,    29,
      95,    30,    95,    29,    95,    29,   385,    27,   140,   388,
      95,    95,   141,    29,    42,   135,   324,    95,   324,    29,
      20,    42,    95,   141,   394,   146,   383,   141,   394,    95,
     394,    95,   383,    42,    24,    29,   232,   353,    95,   383,
      95,   383,    95,   141,    29,   231,   232,   152,   235,   236,
     235,    95,   141,   394,   395,    95,    29,    95,   141,   392,
     394,   146,    29,   337,    42,    42,    95,   141,    29,    31,
      11,   203,   141,   392,   394,    42,   141,   392,   394,    29,
      31,    95,    29,    95,    29,    29,    95,    30,    29,    29,
      29,    29,    95,   394,    95,    29,   146,    29,    29,    29,
      29,    29,    29,    95,    34,    95,    29,    95,   141,   394,
      95,    29,    29,   136,   148,   269,   142,   141,   141,   392,
     394,    11,    29,    29,    11,   141,   392,   394,   141,   392,
     394,    29,    29,    29,    11,    29,    95,    29,    95,    29,
      95,    29,    29,    29,    29,   136,    29,     6,   148,   398,
       7,   224,   224,   224,   224,   365,   365,   365,   395,   397,
     383,   141,   395,   383,   141,   365,   381,   365,   137,   395,
     383,   141,   383,   251,   395,   365,   154,   153,   345,   365,
     365,   138,   367,   365,   383,   372,    27,   388,    22,    27,
      29,   148,   389,   224,   362,   158,   365,   137,   383,   365,
     383,   137,   212,   395,   141,   384,   146,   395,   141,   311,
     383,   294,    27,   137,    32,   229,    27,   315,   318,   226,
     158,   365,   383,    27,     3,    95,   331,   395,   141,   328,
     383,   334,   395,   141,   365,    27,   198,   158,   224,   224,
      95,   395,   383,   141,   395,   383,   141,   224,   224,   365,
     365,   383,   365,   383,   383,   383,   301,   146,   386,   365,
     384,   383,   383,   383,   383,   383,   383,   288,   383,   365,
     280,   395,   141,   277,   383,   154,   143,   146,   383,   395,
     395,   383,   141,   383,   383,   395,   383,   141,   395,   383,
     141,   365,   383,   383,   245,   383,   240,   383,   365,   146,
      13,   143,   399,   139,   144,   146,   400,   401,   403,    13,
     142,   398,   395,   142,   395,   255,   135,   142,   395,   142,
      29,   156,   346,   153,   148,   348,    30,    29,    30,   388,
     389,   142,     9,   325,   365,   324,    42,   142,   395,   384,
     142,   395,    42,    42,    23,    32,   232,   142,    24,   232,
      29,   148,   237,     3,   365,   142,   395,   142,   395,   337,
      42,   142,   365,   142,   395,   142,   395,    29,    29,    30,
      27,    29,   387,   389,   146,    29,    29,   142,   395,   136,
     152,    27,   266,   267,   268,   365,   384,   142,   142,   395,
     142,   395,   142,   395,   388,    29,    29,   152,    29,   390,
     402,   150,   407,   402,   401,   403,   383,   142,   383,   142,
     383,   142,   383,   154,   346,    27,   143,   146,   349,   383,
     383,   137,   135,   383,   142,   142,   137,    27,   383,   229,
     143,   143,     3,   236,   236,   142,   142,    27,   383,    11,
     383,   142,   383,   142,    29,   389,    27,   388,   387,   383,
     142,   147,   146,    28,   383,   383,   142,   383,   142,   383,
     142,   140,   391,   140,   145,   404,   405,   406,   383,   383,
     383,   157,   143,    27,   152,   384,   146,   365,   383,    42,
      42,    23,   152,   152,    22,    29,   383,   383,    27,   388,
     388,   383,   148,   266,   365,   383,   383,   383,   389,   151,
     407,   406,    27,   152,   152,   384,   135,   137,   383,   388,
     383,   269,   152,    42
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 269: /* "host_and_port" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->host_p);};

/* Line 1391 of yacc.c  */
#line 2646 "SIP_parse_.tab.c"
	break;
      case 276: /* "Secmechanism_1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->sec_mech_list);};

/* Line 1391 of yacc.c  */
#line 2655 "SIP_parse_.tab.c"
	break;
      case 277: /* "Secmechanism" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->sec_mech);};

/* Line 1391 of yacc.c  */
#line 2664 "SIP_parse_.tab.c"
	break;
      case 279: /* "routebdy1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->route_list);};

/* Line 1391 of yacc.c  */
#line 2673 "SIP_parse_.tab.c"
	break;
      case 280: /* "routeadr" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->route_val);};

/* Line 1391 of yacc.c  */
#line 2682 "SIP_parse_.tab.c"
	break;
      case 287: /* "conatact_1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->c_list);};

/* Line 1391 of yacc.c  */
#line 2691 "SIP_parse_.tab.c"
	break;
      case 288: /* "conatact_value" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->p_list);};

/* Line 1391 of yacc.c  */
#line 2700 "SIP_parse_.tab.c"
	break;
      case 293: /* "h_urispec_1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->history_entry_list);};

/* Line 1391 of yacc.c  */
#line 2709 "SIP_parse_.tab.c"
	break;
      case 294: /* "h_urispec" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->history_entry);};

/* Line 1391 of yacc.c  */
#line 2718 "SIP_parse_.tab.c"
	break;
      case 300: /* "anetspec_1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->an_spec_list);};

/* Line 1391 of yacc.c  */
#line 2727 "SIP_parse_.tab.c"
	break;
      case 301: /* "anetspec" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->an_spec);};

/* Line 1391 of yacc.c  */
#line 2736 "SIP_parse_.tab.c"
	break;
      case 310: /* "vnetspec_1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->n_spec_list);};

/* Line 1391 of yacc.c  */
#line 2745 "SIP_parse_.tab.c"
	break;
      case 311: /* "vnetspec" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->n_spec);};

/* Line 1391 of yacc.c  */
#line 2754 "SIP_parse_.tab.c"
	break;
      case 314: /* "p_urispec_1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->u_spec_list);};

/* Line 1391 of yacc.c  */
#line 2763 "SIP_parse_.tab.c"
	break;
      case 315: /* "p_urispec" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->u_spec);};

/* Line 1391 of yacc.c  */
#line 2772 "SIP_parse_.tab.c"
	break;
      case 319: /* "p_nameaddr" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->naddr);};

/* Line 1391 of yacc.c  */
#line 2781 "SIP_parse_.tab.c"
	break;
      case 322: /* "event_list1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->e_list);};

/* Line 1391 of yacc.c  */
#line 2790 "SIP_parse_.tab.c"
	break;
      case 324: /* "event_event" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->e_type);};

/* Line 1391 of yacc.c  */
#line 2799 "SIP_parse_.tab.c"
	break;
      case 325: /* "event_event_template1toN" */

/* Line 1391 of yacc.c  */
#line 335 "SIP_parse.y"
	{delete (yyvaluep->e_template_list);};

/* Line 1391 of yacc.c  */
#line 2808 "SIP_parse_.tab.c"
	break;

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 358 "SIP_parse.y"
    { 
        delete uriptr;
        uriptr=NULL;
        delete paramptr;
        paramptr=NULL;
        YYACCEPT;
      }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 365 "SIP_parse.y"
    {
        delete uriptr;
        uriptr=NULL;
        delete paramptr;
        paramptr=NULL;
         YYACCEPT;
      }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 380 "SIP_parse.y"
    {
        // rqlineptr->method()=Method::str_to_enum($<char1024>1); EPTEBAL
        rqlineptr->method()=Method::str_to_enum((yyvsp[(1) - (6)].sv));
        rqlineptr->sipVersion()=(yyvsp[(5) - (6)].sv);
        rqlineptr->requestUri()= *uriptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        /*Free($1);*/
        /*Free($5);*/
      }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 391 "SIP_parse.y"
    {yyerrok; errorind_loc=255;}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 394 "SIP_parse.y"
    {}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 395 "SIP_parse.y"
    {}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 400 "SIP_parse.y"
    {}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 401 "SIP_parse.y"
    {}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 402 "SIP_parse.y"
    {}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 403 "SIP_parse.y"
    {}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 404 "SIP_parse.y"
    { resetptr();  errorind_loc=255; yyerrok;}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 408 "SIP_parse.y"
    { headerptr->allow()().fieldName()=FieldName::ALLOW__E;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 410 "SIP_parse.y"
    { headerptr->contentDisposition()().fieldName()=FieldName::CONTENT__DISPOSITION__E;}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 412 "SIP_parse.y"
    { headerptr->contentEncoding()().fieldName()=FieldName::CONTENT__ENCODING__E;}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 414 "SIP_parse.y"
    { headerptr->contentLanguage()().fieldName()=FieldName::CONTENT__LANGUAGE__E;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 416 "SIP_parse.y"
    { headerptr->contentLength()().fieldName()=FieldName::CONTENT__LENGTH__E;}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 418 "SIP_parse.y"
    { headerptr->contentType()().fieldName()=FieldName::CONTENT__TYPE__E;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 419 "SIP_parse.y"
    { headerptr->expires()().fieldName()=FieldName::EXPIRES__E;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 422 "SIP_parse.y"
    { headerptr->allow()().methods()=OMIT_VALUE;}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 423 "SIP_parse.y"
    {}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 425 "SIP_parse.y"
    {
        headerptr->allow()().methods()()[allowcount] = (yyvsp[(2) - (2)].sv);
        allowcount++;
        /*Free($2);*/
      }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 430 "SIP_parse.y"
    {
        headerptr->allow()().methods()()[allowcount] = (yyvsp[(4) - (4)].sv);
        allowcount++;
        /*Free($4);*/
      }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 438 "SIP_parse.y"
    {
        headerptr->contentDisposition()().dispositionType()= (yyvsp[(3) - (3)].sv);
        headerptr->contentDisposition()().dispositionParams()=OMIT_VALUE;
        /*Free($3);*/
      }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 443 "SIP_parse.y"
    {
        headerptr->contentDisposition()().dispositionType()= (yyvsp[(3) - (4)].sv);
        headerptr->contentDisposition()().dispositionParams()()=*paramptr;
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
//        Free($3);
      }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 453 "SIP_parse.y"
    {}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 456 "SIP_parse.y"
    {
       headerptr->contentEncoding()().contentCoding()[contentenccount]=trim((yyvsp[(2) - (2)].sv));
       contentenccount++;
//       Free($2);
     }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 461 "SIP_parse.y"
    {
       headerptr->contentEncoding()().contentCoding()[contentenccount]=trim((yyvsp[(4) - (4)].sv));
       contentenccount++;
//       Free($4);
     }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 468 "SIP_parse.y"
    {}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 471 "SIP_parse.y"
    {
        headerptr->contentLanguage()().languageTag()[contentlangcount]=trim((yyvsp[(2) - (2)].sv));
        contentlangcount++;
//        Free($2);
      }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 476 "SIP_parse.y"
    {
        headerptr->contentLanguage()().languageTag()[contentlangcount]=trim((yyvsp[(4) - (4)].sv));
        contentlangcount++;
//        Free($4);
      }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 484 "SIP_parse.y"
    { headerptr->contentLength()().len() = str2int((yyvsp[(3) - (3)].sv)); /*Free($3)*/}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 487 "SIP_parse.y"
    {
        headerptr->contentType()().mediaType() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 493 "SIP_parse.y"
    {
        headerptr->expires()().deltaSec() = (yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 499 "SIP_parse.y"
    {
        headerptr->x__AUT()().x__AUT__Value() = (yyvsp[(3) - (3)].sv);
      }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 504 "SIP_parse.y"
    {
        headerptr->x__Carrier__Info()().x__Carrier__Info__Value() = (yyvsp[(3) - (3)].sv);
      }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 509 "SIP_parse.y"
    {
        headerptr->x__CHGDelay()().x__CHGDelay__Value() = (yyvsp[(3) - (3)].sv);
      }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 515 "SIP_parse.y"
    {    
        headerptr->x__CHGInfo()().x__ci__kind__data()= (yyvsp[(3) - (3)].sv); 
        headerptr->x__CHGInfo()().cDR__Record()=OMIT_VALUE; 
      }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 519 "SIP_parse.y"
    {
        headerptr->x__CHGInfo()().x__ci__kind__data()= (yyvsp[(3) - (5)].sv); 
        headerptr->x__CHGInfo()().cDR__Record()()=(yyvsp[(5) - (5)].sv);        
      }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 525 "SIP_parse.y"
    {
      headerptr->x__FCI()().x__FCI__Value() = str2hex((yyvsp[(3) - (3)].sv));
    }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 533 "SIP_parse.y"
    {headerptr->alertInfo()().fieldName()=FieldName::ALERT__INFO__E;}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 535 "SIP_parse.y"
    {headerptr->authorization()().fieldName()=FieldName::AUTHORIZATION__E;}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 536 "SIP_parse.y"
    {headerptr->inReplyTo()().fieldName()=FieldName::IN__REPLY__TO__E;}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 538 "SIP_parse.y"
    {headerptr->maxForwards()().fieldName()=FieldName::MAX__FORWARDS__E;}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 539 "SIP_parse.y"
    {headerptr->priority()().fieldName()=FieldName::PRIORITY__E;}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 541 "SIP_parse.y"
    {headerptr->proxyAuthorization()().fieldName()=FieldName::PROXY__AUTHORIZATION__E;}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 543 "SIP_parse.y"
    {headerptr->proxyRequire()().fieldName()=FieldName::PROXY__REQUIRE__E;}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 544 "SIP_parse.y"
    {headerptr->route()().fieldName()=FieldName::ROUTE__E;}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 545 "SIP_parse.y"
    {headerptr->subject()().fieldName()=FieldName::SUBJECT__E;}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 546 "SIP_parse.y"
    {headerptr->refer__to()().fieldName()=FieldName::REFER__TO__E;}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 547 "SIP_parse.y"
    {headerptr->p__served__user()().fieldName()=FieldName::P__SERVED__USER__E;}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 548 "SIP_parse.y"
    {headerptr->p__profile__key()().fieldName()=FieldName::P__PROFILE__KEY__E;}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 549 "SIP_parse.y"
    {headerptr->referred__by()().fieldName()=FieldName::REFERRED__BY__E;}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 550 "SIP_parse.y"
    {headerptr->p__asserted__service()().fieldName()=FieldName::P__ASSERTED__SERVICE__E;}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 551 "SIP_parse.y"
    {headerptr->p__preferred__service()().fieldName()=FieldName::P__PREFERRED__SERVICE__E;}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 554 "SIP_parse.y"
    {
        headerptr->referred__by()().referer__uri().nameAddr().displayName() = (yyvsp[(3) - (7)].sv);
        headerptr->referred__by()().referer__uri().nameAddr().addrSpec()= *uriptr;
        headerptr->referred__by()().refererParams()=*paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;

//        Free($3);
      }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 568 "SIP_parse.y"
    {
        headerptr->referred__by()().referer__uri().nameAddr().displayName() 
                    = OMIT_VALUE;
        headerptr->referred__by()().referer__uri().nameAddr().addrSpec()= *uriptr;
        headerptr->referred__by()().refererParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 580 "SIP_parse.y"
    {
        headerptr->referred__by()().referer__uri().addrSpecUnion()= *uriptr;
        headerptr->referred__by()().refererParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 590 "SIP_parse.y"
    {
        headerptr->referred__by()().referer__uri().nameAddr().displayName() = (yyvsp[(3) - (6)].sv);
        headerptr->referred__by()().referer__uri().nameAddr().addrSpec()= *uriptr;
        headerptr->referred__by()().refererParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($3);
      }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 599 "SIP_parse.y"
    {
        headerptr->referred__by()().referer__uri().nameAddr().displayName()
                    = OMIT_VALUE;
        headerptr->referred__by()().referer__uri().nameAddr().addrSpec()= *uriptr;
        headerptr->referred__by()().refererParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 608 "SIP_parse.y"
    {
        headerptr->referred__by()().referer__uri().addrSpecUnion()= *uriptr;
        headerptr->referred__by()().refererParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 619 "SIP_parse.y"
    {
        headerptr->p__profile__key()().profile__key().nameAddr().displayName() = (yyvsp[(3) - (7)].sv);
        headerptr->p__profile__key()().profile__key().nameAddr().addrSpec()= *uriptr;
        headerptr->p__profile__key()().profile__key__params()=*paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;

//        Free($3);
      }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 633 "SIP_parse.y"
    {
        headerptr->p__profile__key()().profile__key().nameAddr().displayName() 
                    = OMIT_VALUE;
        headerptr->p__profile__key()().profile__key().nameAddr().addrSpec()= *uriptr;
        headerptr->p__profile__key()().profile__key__params()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 645 "SIP_parse.y"
    {
        headerptr->p__profile__key()().profile__key().addrSpecUnion()= *uriptr;
        headerptr->p__profile__key()().profile__key__params()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 655 "SIP_parse.y"
    {
        headerptr->p__profile__key()().profile__key().nameAddr().displayName() = (yyvsp[(3) - (6)].sv);
        headerptr->p__profile__key()().profile__key().nameAddr().addrSpec()= *uriptr;
        headerptr->p__profile__key()().profile__key__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($3);
      }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 664 "SIP_parse.y"
    {
        headerptr->p__profile__key()().profile__key().nameAddr().displayName()
                    = OMIT_VALUE;
        headerptr->p__profile__key()().profile__key().nameAddr().addrSpec()= *uriptr;
        headerptr->p__profile__key()().profile__key__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 673 "SIP_parse.y"
    {
        headerptr->p__profile__key()().profile__key().addrSpecUnion()= *uriptr;
        headerptr->p__profile__key()().profile__key__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 683 "SIP_parse.y"
    {
        headerptr->p__served__user()().served__user().nameAddr().displayName() = (yyvsp[(3) - (7)].sv);
        headerptr->p__served__user()().served__user().nameAddr().addrSpec()= *uriptr;
        headerptr->p__served__user()().served__user__params()=*paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;

//        Free($3);
      }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 697 "SIP_parse.y"
    {
        headerptr->p__served__user()().served__user().nameAddr().displayName() 
                    = OMIT_VALUE;
        headerptr->p__served__user()().served__user().nameAddr().addrSpec()= *uriptr;
        headerptr->p__served__user()().served__user__params()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 709 "SIP_parse.y"
    {
        headerptr->p__served__user()().served__user().addrSpecUnion()= *uriptr;
        headerptr->p__served__user()().served__user__params()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 719 "SIP_parse.y"
    {
        headerptr->p__served__user()().served__user().nameAddr().displayName() = (yyvsp[(3) - (6)].sv);
        headerptr->p__served__user()().served__user().nameAddr().addrSpec()= *uriptr;
        headerptr->p__served__user()().served__user__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($3);
      }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 728 "SIP_parse.y"
    {
        headerptr->p__served__user()().served__user().nameAddr().displayName()
                    = OMIT_VALUE;
        headerptr->p__served__user()().served__user().nameAddr().addrSpec()= *uriptr;
        headerptr->p__served__user()().served__user__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 737 "SIP_parse.y"
    {
        headerptr->p__served__user()().served__user().addrSpecUnion()= *uriptr;
        headerptr->p__served__user()().served__user__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 746 "SIP_parse.y"
    {
        headerptr->p__Service__Indication()().service__indication() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 752 "SIP_parse.y"
    {
        headerptr->p__Service__Notification()().service__notification() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 759 "SIP_parse.y"
    {
        headerptr->refer__to()().addr().nameAddr().displayName() = (yyvsp[(3) - (7)].sv);
        headerptr->refer__to()().addr().nameAddr().addrSpec()= *uriptr;
        headerptr->refer__to()().referToParams()=*paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;

//        Free($3);
      }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 773 "SIP_parse.y"
    {
        headerptr->refer__to()().addr().nameAddr().displayName() 
                    = OMIT_VALUE;
        headerptr->refer__to()().addr().nameAddr().addrSpec()= *uriptr;
        headerptr->refer__to()().referToParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 785 "SIP_parse.y"
    {
        headerptr->refer__to()().addr().addrSpecUnion()= *uriptr;
        headerptr->refer__to()().referToParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 795 "SIP_parse.y"
    {
        headerptr->refer__to()().addr().nameAddr().displayName() = (yyvsp[(3) - (6)].sv);
        headerptr->refer__to()().addr().nameAddr().addrSpec()= *uriptr;
        headerptr->refer__to()().referToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($3);
      }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 804 "SIP_parse.y"
    {
        headerptr->refer__to()().addr().nameAddr().displayName()
                    = OMIT_VALUE;
        headerptr->refer__to()().addr().nameAddr().addrSpec()= *uriptr;
        headerptr->refer__to()().referToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 813 "SIP_parse.y"
    {
        headerptr->refer__to()().addr().addrSpecUnion()= *uriptr;
        headerptr->refer__to()().referToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 822 "SIP_parse.y"
    {}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 829 "SIP_parse.y"
    {
        headerptr->alertInfo()().alertInfoBody()()[alertinfcount].url()=(yyvsp[(3) - (4)].sv);
        headerptr->alertInfo()().alertInfoBody()()[alertinfcount].
                            genericParams()=OMIT_VALUE;
        alertinfcount++;
//        Free($3);
      }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 836 "SIP_parse.y"
    {
        headerptr->alertInfo()().alertInfoBody()()[alertinfcount].url()=(yyvsp[(3) - (5)].sv);
        headerptr->alertInfo()().alertInfoBody()()[alertinfcount].
                            genericParams()()=*paramptr;
        paramcount=0;
        alertinfcount++;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 848 "SIP_parse.y"
    {}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 851 "SIP_parse.y"
    {
        headerptr->authorization()().body().digestResponse()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 857 "SIP_parse.y"
    {
         headerptr->authorization()().body().otherResponse().authScheme()=(yyvsp[(2) - (3)].sv);
         headerptr->authorization()().body().otherResponse().authParams()=
                            *paramptr;
         paramcount=0;
         delete paramptr;
         paramptr=new GenericParam__List;
//         Free($2);
      }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 868 "SIP_parse.y"
    {}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 871 "SIP_parse.y"
    {
        headerptr->inReplyTo()().callids()[inreplytocount] = (yyvsp[(1) - (1)].sv);
        inreplytocount++;
//        Free($1);
      }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 876 "SIP_parse.y"
    {
        headerptr->inReplyTo()().callids()[inreplytocount] = (yyvsp[(4) - (4)].sv);
        inreplytocount++;
//        Free($4);
      }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 884 "SIP_parse.y"
    { headerptr->maxForwards()().forwards()=str2int((yyvsp[(3) - (3)].sv));/*Free($3)*/}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 887 "SIP_parse.y"
    {
        headerptr->priority()().priorityValue() = trim((yyvsp[(2) - (2)].sv));
//        Free($2);
      }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 893 "SIP_parse.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 896 "SIP_parse.y"
    {
        headerptr->proxyAuthorization()().credentials().digestResponse()=
                              *paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 903 "SIP_parse.y"
    {
        headerptr->proxyAuthorization()().credentials().otherResponse().
                              authScheme()=(yyvsp[(2) - (3)].sv);
        headerptr->proxyAuthorization()().credentials().otherResponse().
                              authParams()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 915 "SIP_parse.y"
    {
        if(!proxyreqcount){
          headerptr->proxyRequire()().optionsTags()= *optptr;
          delete optptr;
        }
        proxyreqcount=optioncount;
      }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 924 "SIP_parse.y"
    {
        (*optptr)[optioncount]=(yyvsp[(2) - (2)].sv);
        optioncount++;
//        Free($2);
      }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 929 "SIP_parse.y"
    {
        (*optptr)[optioncount]=(yyvsp[(4) - (4)].sv);
        optioncount++;
//        Free($4);
      }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 936 "SIP_parse.y"
    {
        if(!routecount){
          headerptr->route()().routeBody()= *routeptr;
          delete routeptr;
        }
        routecount=rcount;
      }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 945 "SIP_parse.y"
    {}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 946 "SIP_parse.y"
    {}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 949 "SIP_parse.y"
    {
        (*routeptr)[rcount].nameAddr().displayName()=(yyvsp[(2) - (6)].sv);
        (*routeptr)[rcount].nameAddr().addrSpec()= *uriptr;
        (*routeptr)[rcount].rrParam()()= *paramptr;
        rcount++;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($2);
      }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 963 "SIP_parse.y"
    {
        (*routeptr)[rcount].nameAddr().displayName()=OMIT_VALUE;
        (*routeptr)[rcount].nameAddr().addrSpec()= *uriptr;
        (*routeptr)[rcount].rrParam()()= *paramptr;
        rcount++;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 976 "SIP_parse.y"
    {
        (*routeptr)[rcount].nameAddr().displayName()=(yyvsp[(2) - (5)].sv);
        (*routeptr)[rcount].nameAddr().addrSpec()= *uriptr;
        (*routeptr)[rcount].rrParam()= OMIT_VALUE;
        rcount++;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($2);
      }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 987 "SIP_parse.y"
    {
        (*routeptr)[rcount].nameAddr().displayName()=OMIT_VALUE;
        (*routeptr)[rcount].nameAddr().addrSpec()= *uriptr;
        (*routeptr)[rcount].rrParam()= OMIT_VALUE;
        rcount++;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 999 "SIP_parse.y"
    {
        headerptr->subject()().summary()=trim((yyvsp[(2) - (2)].sv));
//        Free($2);
      }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 1011 "SIP_parse.y"
    {

/*	EPTEBAL */
//	int offset = $<sip_sv>1.offset;
//	int len = $<sip_sv>1.length;
//      stlineptr->sipVersion() = CHARSTRING(len, stream_buffer+offset);
//      stlineptr->sipVersion() = stream_buffer+offset;

        stlineptr->sipVersion() = (yyvsp[(1) - (6)].sv); /* EPTEBAL */
        stlineptr->statusCode() = (yyvsp[(3) - (6)].iv);
        stlineptr->reasonPhrase() = (yyvsp[(5) - (6)].sv);
        /*Free($1);*/
//	Free($5);
      }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 1025 "SIP_parse.y"
    { yyerrok; errorind_loc=255;}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1028 "SIP_parse.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 1029 "SIP_parse.y"
    {}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1034 "SIP_parse.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 1035 "SIP_parse.y"
    {}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 1036 "SIP_parse.y"
    {}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1037 "SIP_parse.y"
    {}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1038 "SIP_parse.y"
    { resetptr(); yyerrok; errorind_loc=255;}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1041 "SIP_parse.y"
    {headerptr->errorInfo()().fieldName()=FieldName::ERROR__INFO__E;}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1043 "SIP_parse.y"
    {headerptr->proxyAuthenticate()().fieldName()=FieldName::PROXY__AUTHENTICATE__E;}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1044 "SIP_parse.y"
    {headerptr->retryAfter()().fieldName()=FieldName::RETRY__AFTER__E;}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1045 "SIP_parse.y"
    {headerptr->server()().fieldName()=FieldName::SERVER__E;}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1046 "SIP_parse.y"
    {headerptr->unsupported()().fieldName()=FieldName::UNSUPPORTED__E;}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1048 "SIP_parse.y"
    {headerptr->authenticationInfo()().fieldName()=FieldName::AUTHENTICATION__INFO__E;}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1049 "SIP_parse.y"
    {headerptr->warning()().fieldName()=FieldName::WARNING__E;}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1051 "SIP_parse.y"
    {headerptr->wwwAuthenticate()().fieldName()=FieldName::WWW__AUTHENTICATE__E;}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1054 "SIP_parse.y"
    {
        headerptr->authenticationInfo()().ainfo()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1062 "SIP_parse.y"
    { 
      if(headerptr->p__asserted__service().ispresent()){
        int a=headerptr->p__asserted__service()().p__as().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].service_1toN)->size_of();b++){
          headerptr->p__asserted__service()().p__as()[a]=(*(yyvsp[(2) - (2)].service_1toN))[b];
          a++;
          }
      }
      else {
        headerptr->p__asserted__service()().p__as()=*(yyvsp[(2) - (2)].service_1toN);
      }
      delete (yyvsp[(2) - (2)].service_1toN);    
      }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1077 "SIP_parse.y"
    { 
      if(headerptr->p__preferred__service().ispresent()){
        int a=headerptr->p__preferred__service()().p__ps().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].service_1toN)->size_of();b++){
          headerptr->p__preferred__service()().p__ps()[a]=(*(yyvsp[(2) - (2)].service_1toN))[b];
          a++;
          }
      }
      else {
        headerptr->p__preferred__service()().p__ps()=*(yyvsp[(2) - (2)].service_1toN);
      }
      delete (yyvsp[(2) - (2)].service_1toN);    
      }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1092 "SIP_parse.y"
    {
        (yyval.service_1toN) = new Service__ID__List;
        (*(yyval.service_1toN))[0] = (yyvsp[(2) - (2)].sv);
      //  delete $2;
      }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1097 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].service_1toN)->size_of();
        (yyval.service_1toN)=(yyvsp[(1) - (4)].service_1toN);
        (*(yyval.service_1toN))[a] = (yyvsp[(4) - (4)].sv);
     //   delete $4;
      }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1105 "SIP_parse.y"
    {}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1106 "SIP_parse.y"
    {}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1109 "SIP_parse.y"
    {}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1116 "SIP_parse.y"
    {
        headerptr->errorInfo()().errorInfo()()[errorinfocount].uri()=(yyvsp[(3) - (4)].sv);
        headerptr->errorInfo()().errorInfo()()[errorinfocount].genericParams()
                   =OMIT_VALUE;
        errorinfocount++;
//        Free($3);
      }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 1123 "SIP_parse.y"
    {
        headerptr->errorInfo()().errorInfo()()[errorinfocount].uri()=(yyvsp[(3) - (5)].sv);
        headerptr->errorInfo()().errorInfo()()[errorinfocount].
                  genericParams()()=*paramptr;
        paramcount=0;
        errorinfocount++;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1135 "SIP_parse.y"
    {
        headerptr->retryAfter()().deltaSec() = (yyvsp[(3) - (3)].sv);
        headerptr->retryAfter()().comment() = OMIT_VALUE;
        headerptr->retryAfter()().retryParams() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1141 "SIP_parse.y"
    {
        headerptr->retryAfter()().deltaSec() = (yyvsp[(3) - (7)].sv);
        headerptr->retryAfter()().comment()() = comment_buf+1;
        headerptr->retryAfter()().retryParams() = OMIT_VALUE;
//        Free($3);
        comment_buf[1]='\0';
      }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1149 "SIP_parse.y"
    {
        headerptr->retryAfter()().deltaSec() = (yyvsp[(3) - (8)].sv);
        headerptr->retryAfter()().comment()() = comment_buf+1;
        headerptr->retryAfter()().retryParams()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
        comment_buf[1]='\0';
      }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1159 "SIP_parse.y"
    {
        headerptr->retryAfter()().deltaSec() = (yyvsp[(3) - (4)].sv);
        headerptr->retryAfter()().comment() = OMIT_VALUE;
        headerptr->retryAfter()().retryParams()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1170 "SIP_parse.y"
    {
      strcat(comment_buf+1,(yyvsp[(1) - (1)].sv));
//      Free($1);
    }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1174 "SIP_parse.y"
    {
      strcat(comment_buf+1,(yyvsp[(2) - (2)].sv));
//      Free($2);
    }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 1180 "SIP_parse.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 1182 "SIP_parse.y"
    {
        headerptr->server()().serverBody()[servercount]= (yyvsp[(1) - (1)].sv);
        servercount++;
        Free((yyvsp[(1) - (1)].sv));
      }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1187 "SIP_parse.y"
    {
        headerptr->server()().serverBody()[servercount]= (yyvsp[(3) - (3)].sv);
        servercount++;
        Free((yyvsp[(3) - (3)].sv));
      }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1194 "SIP_parse.y"
    {
        size_t comment_buflen = strlen(comment_buf+1);
        char *atm=(char *)Malloc(comment_buflen+3);
        atm[0]='(';
        strcpy(atm+1,comment_buf+1);
        atm[comment_buflen+1] = ')';
        atm[comment_buflen+2] = '\0';
        (yyval.sv)=atm;
        comment_buf[1]='\0';
      }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 1204 "SIP_parse.y"
    {
        char *atm=(char *)Malloc(strlen((yyvsp[(1) - (1)].sv))+1);
        strcpy(atm,(yyvsp[(1) - (1)].sv));
        (yyval.sv)=atm;
    }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 1211 "SIP_parse.y"
    {
        if(!unsuppcount){
            headerptr->unsupported()().optionsTags()= *optptr;
            delete optptr;
        }
        unsuppcount=optioncount;
      }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 1220 "SIP_parse.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 1221 "SIP_parse.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 1224 "SIP_parse.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 1225 "SIP_parse.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 1226 "SIP_parse.y"
    {}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 1229 "SIP_parse.y"
    {
        headerptr->warning()().warningValue()[warncount].warnCode()=(yyvsp[(1) - (5)].iv);
        (yyvsp[(5) - (5)].sv)[strlen((yyvsp[(5) - (5)].sv))-1]='\0';
        headerptr->warning()().warningValue()[warncount].WarnText()=(yyvsp[(5) - (5)].sv)+1;

        warncount++;
//        Free($5);
      }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 1239 "SIP_parse.y"
    {
        headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().host()=trimOnIPv6((yyvsp[(1) - (3)].sv));
        headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().portField() = (yyvsp[(3) - (3)].iv);
//        Free($1);
      }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 1246 "SIP_parse.y"
    {
        if(strchr((yyvsp[(1) - (1)].sv),'.') || strchr((yyvsp[(1) - (1)].sv),':')){
          headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().host()=trimOnIPv6((yyvsp[(1) - (1)].sv));
          headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().portField() = OMIT_VALUE;
        }
        else{
          headerptr->warning()().warningValue()[warncount].warnAgent().
                pseudonym()=(yyvsp[(1) - (1)].sv);
        }
//        Free($1);
      }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 1259 "SIP_parse.y"
    {
        headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().host()=trimOnIPv6((yyvsp[(1) - (3)].sv));
        headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().portField() = (yyvsp[(3) - (3)].iv);
//        Free($1);
      }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 1266 "SIP_parse.y"
    {
        if(strchr((yyvsp[(1) - (1)].sv),'.') || strchr((yyvsp[(1) - (1)].sv),':')){
          headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().host()=trimOnIPv6((yyvsp[(1) - (1)].sv));
          headerptr->warning()().warningValue()[warncount].warnAgent().
                hostPort().portField() = OMIT_VALUE;
        }
        else{
          headerptr->warning()().warningValue()[warncount].warnAgent().
                pseudonym()=(yyvsp[(1) - (1)].sv);
        }
//        Free($1);
      }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 1283 "SIP_parse.y"
    {headerptr->accept()().fieldName()=FieldName::ACCEPT__E;}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 1285 "SIP_parse.y"
    {headerptr->acceptEncoding()().fieldName()=FieldName::ACCEPT__ENCODING__E;}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 1287 "SIP_parse.y"
    {headerptr->acceptLanguage()().fieldName()=FieldName::ACCEPT__LANGUAGE__E;}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 1288 "SIP_parse.y"
    {headerptr->callId()().fieldName()=FieldName::CALL__ID__E;}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 1289 "SIP_parse.y"
    {headerptr->callInfo()().fieldName()=FieldName::CALL__INFO__E;}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 1290 "SIP_parse.y"
    {headerptr->contact()().fieldName()=FieldName::CONTACT__E;}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 1291 "SIP_parse.y"
    {headerptr->cSeq()().fieldName()=FieldName:: CSEQ__E;}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 1292 "SIP_parse.y"
    {headerptr->date()().fieldName()=FieldName::DATE__E;}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 1293 "SIP_parse.y"
    {headerptr->minExpires()().fieldName()=FieldName::MIN__EXPIRES__E;}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 1294 "SIP_parse.y"
    {headerptr->event()().fieldName()=FieldName::EVENT__E;}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 1295 "SIP_parse.y"
    {headerptr->allow__events()().fieldName()=FieldName::ALLOW__EVENTS__E;}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 1296 "SIP_parse.y"
    {headerptr->acceptResourcePriority()().fieldName()=FieldName::ACCEPT__RESOURCE__PRIORITY__E;}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 1297 "SIP_parse.y"
    {headerptr->resourcePriority()().fieldName()=FieldName::RESOURCE__PRIORITY__E;}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 1298 "SIP_parse.y"
    {headerptr->fromField()().fieldName()=FieldName::FROM__E;errorind_loc&=254;}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 1300 "SIP_parse.y"
    {headerptr->historyInfo()().fieldName()=FieldName::HISTORY__INFO__E;}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 1302 "SIP_parse.y"
    {headerptr->mimeVersion()().fieldName()=FieldName::MIME__VERSION__E;}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 1304 "SIP_parse.y"
    {headerptr->organization()().fieldName()=FieldName::ORGANIZATION__E;}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 1305 "SIP_parse.y"
    {headerptr->privacy()().fieldName()=FieldName::PRIVACY__E;}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 1307 "SIP_parse.y"
    {headerptr->p__associated__uri()().fieldName()=FieldName::P__ASSOCIATED__URI;}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 1309 "SIP_parse.y"
    {headerptr->diversion()().fieldName()=FieldName::DIVERSION__E;}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 1311 "SIP_parse.y"
    {headerptr->p__called__party__id()().fieldName()=FieldName::P__CALLED__PARTY__ID;}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 1313 "SIP_parse.y"
    {headerptr->passertedID()().fieldName()=FieldName::P__ASSERTED__ID__E;}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 1315 "SIP_parse.y"
    {headerptr->p__visited__network__id()().fieldName()=FieldName::P__VISITED__NETWORK__ID;}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 1317 "SIP_parse.y"
    {headerptr->ppreferredID()().fieldName()=FieldName::P__PREFERRED__ID__E;}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 1319 "SIP_parse.y"
    {headerptr->p__access__network__info()().fieldName()=FieldName::P__ACCESS__NETWORK__INFO;}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 1321 "SIP_parse.y"
    {headerptr->p__last__access__network__info()().fieldName()=FieldName::P__LAST__ACCESS__NETWORK__INFO;}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 1323 "SIP_parse.y"
    {headerptr->p__charging__function__address()().fieldName()=FieldName::P__CHARGING__FUNCTION__ADDRESS;}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 1325 "SIP_parse.y"
    {headerptr->p__charging__vector()().fieldName()=FieldName::P__CHARGING__VECTOR;}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 1326 "SIP_parse.y"
    {headerptr->rack()().fieldName()=FieldName::RACK__E;}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 1327 "SIP_parse.y"
    {headerptr->reason()().fieldName()=FieldName::REASON__E;}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 1328 "SIP_parse.y"
    {headerptr->rseq()().fieldName()=FieldName::RSEQ__E;}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 1330 "SIP_parse.y"
    {headerptr->recordRoute()().fieldName()=FieldName::RECORD__ROUTE__E;}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 1331 "SIP_parse.y"
    {headerptr->replyTo()().fieldName()=FieldName::REPLY__TO__E;}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 1332 "SIP_parse.y"
    {headerptr->require()().fieldName()=FieldName::REQUIRE__E;}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 1333 "SIP_parse.y"
    {headerptr->supported()().fieldName()=FieldName::SUPPORTED__E;}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 1334 "SIP_parse.y"
    {headerptr->min__SE()().fieldName()=FieldName::MIN__SE__E;}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 1335 "SIP_parse.y"
    {headerptr->session__expires()().fieldName()=FieldName::SESSION__EXPIRES__E;}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 1336 "SIP_parse.y"
    {headerptr->session__id()().fieldName()=FieldName::SESSION__ID__E;}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 1337 "SIP_parse.y"
    {headerptr->subscription__state()().fieldName()=FieldName::SUBSCRIPTION__STATE__E;}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 1338 "SIP_parse.y"
    {headerptr->timestamp()().fieldName()=FieldName::TIMESTAMP__E;}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 1339 "SIP_parse.y"
    {headerptr->toField()().fieldName()=FieldName::TO__E;errorind_loc&=253;}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 1340 "SIP_parse.y"
    {headerptr->userAgent()().fieldName()=FieldName::USER__AGENT__E;}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 1341 "SIP_parse.y"
    {headerptr->via()().fieldName()=FieldName::VIA__E;errorind_loc&=251;}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 1342 "SIP_parse.y"
    {headerptr->accept__contact()().fieldName()=FieldName::ACCEPT__CONTACT__E;}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 1343 "SIP_parse.y"
    {headerptr->reject__contact()().fieldName()=FieldName::REJECT__CONTACT__E;}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 1344 "SIP_parse.y"
    {headerptr->request__disp()().fieldName()=FieldName::REQUEST__DISP__E;}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 1345 "SIP_parse.y"
    {headerptr->p__media__auth()().fieldName()=FieldName::P__MEDIA__AUTH__E;}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 1346 "SIP_parse.y"
    {headerptr->path()().fieldName()=FieldName::PATH__E;}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 1347 "SIP_parse.y"
    {headerptr->security__client()().fieldName()=FieldName::SECURITY__CLIENT__E;}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 1348 "SIP_parse.y"
    {headerptr->security__server()().fieldName()=FieldName::SECURITY__SERVER__E;}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 1349 "SIP_parse.y"
    {headerptr->security__verify()().fieldName()=FieldName::SECURITY__VERIFY__E;}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 1350 "SIP_parse.y"
    {headerptr->p__DCS__trace__pty__id()().fieldName()=FieldName::P__DCS__TRACE__PTY__ID__E;}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 1351 "SIP_parse.y"
    {headerptr->p__DCS__OSPS()().fieldName()=FieldName::P__DCS__OSPS__E;}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 1352 "SIP_parse.y"
    {headerptr->p__Early__Media()().fieldName()=FieldName::P__EARLY__MEDIA__E;}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 1353 "SIP_parse.y"
    {headerptr->p__DCS__billing__info()().fieldName()=FieldName::P__DCS__BILLING__INFO__E;}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 1354 "SIP_parse.y"
    {headerptr->p__DCS__LAES()().fieldName()=FieldName::P__DCS__LAES__E;}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 1355 "SIP_parse.y"
    {headerptr->p__DCS__redirect()().fieldName()=FieldName::P__DCS__REDIRECT__E;}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1356 "SIP_parse.y"
    {headerptr->p__user__database()().fieldName()=FieldName::P__USER__DATABASE__E;}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1357 "SIP_parse.y"
    {headerptr->service__route()().fieldName()=FieldName::SERVICE__ROUTE__E;}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1358 "SIP_parse.y"
    {headerptr->replaces()().fieldName()=FieldName::REPLACES__E;}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1359 "SIP_parse.y"
    {headerptr->sip__ETag()().fieldName()=FieldName::SIP__ETAG__E;}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1360 "SIP_parse.y"
    {headerptr->sip__If__Match()().fieldName()=FieldName::SIP__IF__MATCH__E;}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1361 "SIP_parse.y"
    {headerptr->join()().fieldName()=FieldName::JOIN__E;}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1362 "SIP_parse.y"
    {headerptr->p__Service__Indication()().fieldName()=FieldName::P__SERVICE__INDICATION__E;}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1363 "SIP_parse.y"
    {headerptr->p__Service__Notification()().fieldName()=FieldName::P__SERVICE__NOTIFICATION__E;}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1365 "SIP_parse.y"
    {headerptr->answer__mode()().fieldName()=FieldName::ANSWER__MODE__E;}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1367 "SIP_parse.y"
    {headerptr->priv__answer__mode()().fieldName()=FieldName::PRIV__ANSWER__MODE__E;}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1369 "SIP_parse.y"
    {headerptr->alert__mode()().fieldName()=FieldName::ALERT__MODE__E;}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1371 "SIP_parse.y"
    {headerptr->refer__sub()().fieldName()=FieldName::REFER__SUB__E;}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1373 "SIP_parse.y"
    {headerptr->p__alerting__mode()().fieldName()=FieldName::P__ALERTING__MODE__E;}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1375 "SIP_parse.y"
    {headerptr->p__answer__state()().fieldName()=FieldName::P__ANSWER__STATE__E;}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1376 "SIP_parse.y"
    {headerptr->geolocation()().fieldName()=FieldName::GEOLOCATION__E;}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1377 "SIP_parse.y"
    {headerptr->geolocation__routing()().fieldName()=FieldName::GEOLOCATION__ROUTING__E;}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1378 "SIP_parse.y"
    {headerptr->geolocation__error()().fieldName()=FieldName::GEOLOCATION__ERROR__E;}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1379 "SIP_parse.y"
    {headerptr->target__dialog()().fieldName()=FieldName::TARGET__DIALOG__E;}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1380 "SIP_parse.y"
    {headerptr->feature__caps()().fieldName()=FieldName::FEATURE__CAPS__E;}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1381 "SIP_parse.y"
    {headerptr->info__Package()().fieldName()=FieldName::INFO__PACKAGE__E;}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1382 "SIP_parse.y"
    {headerptr->recv__Info()().fieldName()=FieldName::RECV__INFO__E;}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1383 "SIP_parse.y"
    {headerptr->x__AUT()().fieldName()=FieldName::X__AUT__E;}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1384 "SIP_parse.y"
    {headerptr->x__Carrier__Info()().fieldName()=FieldName::X__CARRIER__INFO__E;}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1385 "SIP_parse.y"
    {headerptr->x__CHGDelay()().fieldName()=FieldName::X__CHGDELAY__E;}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1386 "SIP_parse.y"
    {headerptr->p__Area__Info()().fieldName()=FieldName::P__AREA__INFO__E;}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1387 "SIP_parse.y"
    {headerptr->x__CHGInfo()().fieldName()=FieldName::X__CHGINFO__E;}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1388 "SIP_parse.y"
    {headerptr->x__FCI()().fieldName()=FieldName::X__FCI__E;}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1394 "SIP_parse.y"
    {
        headerptr->recv__Info()().info__Package__List()=OMIT_VALUE;
      }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1397 "SIP_parse.y"
    {}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1404 "SIP_parse.y"
    {
        headerptr->recv__Info()().info__Package__List()()[recvinfocount].
                                  info__package__name()=(yyvsp[(2) - (2)].sv);	
	headerptr->recv__Info()().info__Package__List()()[recvinfocount].
                                  info__package__params()=OMIT_VALUE;
				  
	recvinfocount++;
//        Free($2);				  
   }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1413 "SIP_parse.y"
    {
        headerptr->recv__Info()().info__Package__List()()[recvinfocount].
                                  info__package__name()=(yyvsp[(2) - (3)].sv);	
        headerptr->recv__Info()().info__Package__List()()[recvinfocount].
                                  info__package__params()=*paramptr;
        paramcount=0;
        recvinfocount++;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1426 "SIP_parse.y"
    {
        headerptr->info__Package()().info__Package__Type().info__package__name() = (yyvsp[(3) - (3)].sv);
        headerptr->info__Package()().info__Package__Type().info__package__params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1431 "SIP_parse.y"
    {
        headerptr->info__Package()().info__Package__Type().info__package__name() = (yyvsp[(3) - (4)].sv);
        headerptr->info__Package()().info__Package__Type().info__package__params() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1441 "SIP_parse.y"
    {
      headerptr->target__dialog()().callid() =(yyvsp[(3) - (3)].sv);
      headerptr->target__dialog()().td__params()= OMIT_VALUE;
//      Free($3);
    }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1446 "SIP_parse.y"
    {
      headerptr->target__dialog()().callid() =(yyvsp[(3) - (4)].sv);
      headerptr->target__dialog()().td__params()= *paramptr;
      paramcount=0;
      delete paramptr;
      paramptr=new GenericParam__List;

//      Free($3);
    }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1458 "SIP_parse.y"
    {}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1465 "SIP_parse.y"
    {
        headerptr->feature__caps()().fc__values()[featureCapscount].fc__string()=(yyvsp[(2) - (2)].sv);
        headerptr->feature__caps()().fc__values()[featureCapscount].feature__param()=
                                                                     OMIT_VALUE;
        featureCapscount++;
//        Free($3);
      }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1472 "SIP_parse.y"
    {
        headerptr->feature__caps()().fc__values()[featureCapscount].fc__string()=(yyvsp[(2) - (3)].sv);
        headerptr->feature__caps()().fc__values()[featureCapscount].feature__param()=
                                                                      *paramptr;
        paramcount=0;
        featureCapscount++;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1484 "SIP_parse.y"
    {
      headerptr->geolocation__error()().location__error__code()=str2int((yyvsp[(3) - (3)].sv));
      headerptr->geolocation__error()().location__error__params()=OMIT_VALUE;
    }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1488 "SIP_parse.y"
    {
      headerptr->geolocation__error()().location__error__code()=str2int((yyvsp[(3) - (4)].sv));
      headerptr->geolocation__error()().location__error__params()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
    }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1497 "SIP_parse.y"
    {
     headerptr->geolocation__routing()().georouting__param()=(yyvsp[(3) - (3)].sv);
     headerptr->geolocation__routing()().georouting__value()=OMIT_VALUE;
   }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1501 "SIP_parse.y"
    {
     headerptr->geolocation__routing()().georouting__param()=(yyvsp[(3) - (5)].sv);
     headerptr->geolocation__routing()().georouting__value()=(yyvsp[(5) - (5)].sv);
   }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1508 "SIP_parse.y"
    {
      if(headerptr->geolocation().ispresent()){
        int a=headerptr->geolocation()().location__values().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].g_val_list)->size_of();b++){
          headerptr->geolocation()().location__values()[a]=(*(yyvsp[(2) - (2)].g_val_list))[b];
          a++;
          }
      }
      else {
        headerptr->geolocation()().location__values()=*(yyvsp[(2) - (2)].g_val_list);
      }
      delete (yyvsp[(2) - (2)].g_val_list);
    }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1523 "SIP_parse.y"
    {
        (yyval.g_val_list)= new Location__value__list;
        (*(yyval.g_val_list))[0]=*(yyvsp[(1) - (1)].g_val);
        delete (yyvsp[(1) - (1)].g_val);
      }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1529 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].g_val_list)->size_of();
        (yyval.g_val_list)=(yyvsp[(1) - (3)].g_val_list);
        (*(yyval.g_val_list))[a] = *(yyvsp[(3) - (3)].g_val);
        delete (yyvsp[(3) - (3)].g_val);
      }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1537 "SIP_parse.y"
    {
     (yyval.g_val) = new Location__value;
     (yyval.g_val)->location__uri() = *uriptr;
     (yyval.g_val)->location__params() = OMIT_VALUE;
     
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
   }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1546 "SIP_parse.y"
    {
     (yyval.g_val) = new Location__value;
     (yyval.g_val)->location__uri() = *uriptr;
     (yyval.g_val)->location__params() = *paramptr;
     
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
   }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1562 "SIP_parse.y"
    {
      if(headerptr->acceptResourcePriority().ispresent()){
        int a=headerptr->acceptResourcePriority()().rvalues()().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].r_val_list)->size_of();b++){
          headerptr->acceptResourcePriority()().rvalues()()[a]=(*(yyvsp[(2) - (2)].r_val_list))[b];
          a++;
          }
      }
      else {
        headerptr->acceptResourcePriority()().rvalues()()=*(yyvsp[(2) - (2)].r_val_list);
      }
      delete (yyvsp[(2) - (2)].r_val_list);
   }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1577 "SIP_parse.y"
    {
      if(headerptr->resourcePriority().ispresent()){
        int a=headerptr->resourcePriority()().rvalues()().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].r_val_list)->size_of();b++){
          headerptr->resourcePriority()().rvalues()()[a]=(*(yyvsp[(2) - (2)].r_val_list))[b];
          a++;
          }
      }
      else {
        headerptr->resourcePriority()().rvalues()()=*(yyvsp[(2) - (2)].r_val_list);
      }
      delete (yyvsp[(2) - (2)].r_val_list);
   }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1592 "SIP_parse.y"
    {
        (yyval.r_val_list) = new Rvalue__List;
        (*(yyval.r_val_list))[0] = *(yyvsp[(2) - (2)].rval);
        delete (yyvsp[(2) - (2)].rval);
      }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1597 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].r_val_list)->size_of();
        (yyval.r_val_list)=(yyvsp[(1) - (4)].r_val_list);
        (*(yyval.r_val_list))[a] = *(yyvsp[(4) - (4)].rval);
        delete (yyvsp[(4) - (4)].rval);
      }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1605 "SIP_parse.y"
    {
      (yyval.rval) = new Rvalue;
      (yyval.rval)->namespace_()= (yyvsp[(1) - (3)].sv);
      (yyval.rval)->r__priority()=(yyvsp[(3) - (3)].sv);
//      delete $3;
//      Free($1);
      }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1615 "SIP_parse.y"
    {
      if(!headerptr->p__Early__Media().ispresent()){
        headerptr->p__Early__Media()().em__param__list()= OMIT_VALUE;
      }
    }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1620 "SIP_parse.y"
    {
      if(headerptr->p__Early__Media().ispresent()){
        int a=headerptr->p__Early__Media()().em__param__list().ispresent()?
                 headerptr->p__Early__Media()().em__param__list()().size_of():0;
        for(int b=0;b<(yyvsp[(2) - (2)].em_bdy_list)->size_of();b++){
          headerptr->p__Early__Media()().em__param__list()()[a]=(*(yyvsp[(2) - (2)].em_bdy_list))[b];
          a++;
          }
      }
      else {
        headerptr->p__Early__Media()().em__param__list()()=*(yyvsp[(2) - (2)].em_bdy_list);
      }
      delete (yyvsp[(2) - (2)].em_bdy_list);
   }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1636 "SIP_parse.y"
    {
        (yyval.em_bdy_list)= new Em__param__List;
        (*(yyval.em_bdy_list))[0]=(yyvsp[(2) - (2)].sv);
//        Free($2);
      }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1641 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].em_bdy_list)->size_of();
        (yyval.em_bdy_list)=(yyvsp[(1) - (4)].em_bdy_list);
        (*(yyval.em_bdy_list))[a] = (yyvsp[(4) - (4)].sv);
//        Free($4);
      }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1649 "SIP_parse.y"
    {
        headerptr->join()().callid()=(yyvsp[(3) - (3)].sv);
        headerptr->join()().joinParams()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1654 "SIP_parse.y"
    {
        headerptr->join()().callid()=(yyvsp[(3) - (4)].sv);
        headerptr->join()().joinParams()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($3);
      }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1664 "SIP_parse.y"
    {
        headerptr->sip__ETag()().entity__tag()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1670 "SIP_parse.y"
    {
        headerptr->sip__If__Match()().entity__tag()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1676 "SIP_parse.y"
    {
        headerptr->replaces()().callid()=(yyvsp[(3) - (3)].sv);
        headerptr->replaces()().replacesParams()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1681 "SIP_parse.y"
    {
        headerptr->replaces()().callid()=(yyvsp[(3) - (4)].sv);
        headerptr->replaces()().replacesParams()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($3);
      }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1691 "SIP_parse.y"
    {
      if(headerptr->service__route().ispresent()){
        int a=headerptr->service__route()().routeBody().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].route_list)->size_of();b++){
          headerptr->service__route()().routeBody()[a]=(*(yyvsp[(2) - (2)].route_list))[b];
          a++;
          }
      }
      else {
        headerptr->service__route()().routeBody()=*(yyvsp[(2) - (2)].route_list);
      }
      delete (yyvsp[(2) - (2)].route_list);
   }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1706 "SIP_parse.y"
    {
        headerptr->p__user__database()().database()=*uriptr;
        headerptr->p__user__database()().params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;

      }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1714 "SIP_parse.y"
    {
        headerptr->p__user__database()().database()=*uriptr;
          headerptr->p__user__database()().params()=*paramptr;
          delete paramptr;
          paramptr= new GenericParam__List;
          paramcount=0;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1726 "SIP_parse.y"
    {
        headerptr->p__DCS__redirect()().caller__ID()=*uriptr;
        headerptr->p__DCS__redirect()().redir__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;

      }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1734 "SIP_parse.y"
    {
        headerptr->p__DCS__redirect()().caller__ID()=*uriptr;
          headerptr->p__DCS__redirect()().redir__params()=*paramptr;
          delete paramptr;
          paramptr= new GenericParam__List;
          paramcount=0;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1746 "SIP_parse.y"
    {
        headerptr->p__DCS__LAES()().laes__sig()=*(yyvsp[(3) - (3)].host_p);
        headerptr->p__DCS__LAES()().laes__params()=OMIT_VALUE;
        delete (yyvsp[(3) - (3)].host_p);
      }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1751 "SIP_parse.y"
    {
        headerptr->p__DCS__LAES()().laes__sig()=*(yyvsp[(3) - (5)].host_p);
          headerptr->p__DCS__LAES()().laes__params()=*paramptr;
          delete paramptr;
          paramptr= new GenericParam__List;
          paramcount=0;
        delete (yyvsp[(3) - (5)].host_p);
      }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1771 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()="content";
        if((yyvsp[(4) - (4)].host_p)->portField().ispresent()){
          (*paramptr)[paramcount].paramValue()=(yyvsp[(4) - (4)].host_p)->host()() + ":" + int2str((yyvsp[(4) - (4)].host_p)->portField()());
        } else {
          (*paramptr)[paramcount].paramValue()=(yyvsp[(4) - (4)].host_p)->host()();
        }
        paramcount++;
        delete (yyvsp[(4) - (4)].host_p);
    }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1783 "SIP_parse.y"
    {
        (yyval.host_p)= new HostPort;
        (yyval.host_p)->host()=(yyvsp[(1) - (3)].sv);
        (yyval.host_p)->portField() = (yyvsp[(3) - (3)].iv);
//        Free($1);
      }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1789 "SIP_parse.y"
    {
        (yyval.host_p)= new HostPort;
        (yyval.host_p)->host()=(yyvsp[(1) - (1)].sv);
        (yyval.host_p)->portField() = OMIT_VALUE;
//        Free($1);
      }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1797 "SIP_parse.y"
    {
        headerptr->p__DCS__billing__info()().billing__correlation__ID()=str2hex((yyvsp[(3) - (7)].sv));
        headerptr->p__DCS__billing__info()().FEID__ID()=str2hex((yyvsp[(4) - (7)].cv));
        headerptr->p__DCS__billing__info()().FEID__host()=trimOnIPv6((yyvsp[(7) - (7)].sv));
        headerptr->p__DCS__billing__info()().billing__info__params()=OMIT_VALUE;
        
//        Free($3);
//        Free($5);
//        Free($7);
      }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1807 "SIP_parse.y"
    {
        headerptr->p__DCS__billing__info()().billing__correlation__ID()=str2hex((yyvsp[(3) - (8)].sv));
        headerptr->p__DCS__billing__info()().FEID__ID()=str2hex((yyvsp[(5) - (8)].sv));
        headerptr->p__DCS__billing__info()().FEID__host()=trimOnIPv6((yyvsp[(7) - (8)].sv));
        headerptr->p__DCS__billing__info()().billing__info__params()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;        
//        Free($3);
//        Free($5);
//        Free($7);
      }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1821 "SIP_parse.y"
    {
        headerptr->p__DCS__OSPS()().OSPS__tag()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1827 "SIP_parse.y"
    {
        headerptr->p__DCS__trace__pty__id()().name__addr()=*(yyvsp[(2) - (2)].naddr);
        delete (yyvsp[(2) - (2)].naddr);
      }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1834 "SIP_parse.y"
    {
      if(headerptr->security__client().ispresent()){
        int a=headerptr->security__client()().sec__mechanism__list().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].sec_mech_list)->size_of();b++){
          headerptr->security__client()().sec__mechanism__list()[a]=(*(yyvsp[(2) - (2)].sec_mech_list))[b];
          a++;
          }
      }
      else {
        headerptr->security__client()().sec__mechanism__list()=*(yyvsp[(2) - (2)].sec_mech_list);
      }
      delete (yyvsp[(2) - (2)].sec_mech_list);
    }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1849 "SIP_parse.y"
    {
      if(headerptr->security__server().ispresent()){
        int a=headerptr->security__server()().sec__mechanism__list().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].sec_mech_list)->size_of();b++){
          headerptr->security__server()().sec__mechanism__list()[a]=(*(yyvsp[(2) - (2)].sec_mech_list))[b];
          a++;
          }
      }
      else {
        headerptr->security__server()().sec__mechanism__list()=*(yyvsp[(2) - (2)].sec_mech_list);
      }
      delete (yyvsp[(2) - (2)].sec_mech_list);
    }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1864 "SIP_parse.y"
    {
      if(headerptr->security__verify().ispresent()){
        int a=headerptr->security__verify()().sec__mechanism__list().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].sec_mech_list)->size_of();b++){
          headerptr->security__verify()().sec__mechanism__list()[a]=(*(yyvsp[(2) - (2)].sec_mech_list))[b];
          a++;
          }
      }
      else {
        headerptr->security__verify()().sec__mechanism__list()=*(yyvsp[(2) - (2)].sec_mech_list);
      }
      delete (yyvsp[(2) - (2)].sec_mech_list);
    }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1879 "SIP_parse.y"
    {
        (yyval.sec_mech_list)= new Security__mechanism__list;
        (*(yyval.sec_mech_list))[0]=*(yyvsp[(1) - (1)].sec_mech);
        delete (yyvsp[(1) - (1)].sec_mech);
      }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1884 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].sec_mech_list)->size_of();
        (yyval.sec_mech_list)=(yyvsp[(1) - (3)].sec_mech_list);
        (*(yyval.sec_mech_list))[a] = *(yyvsp[(3) - (3)].sec_mech);
        delete (yyvsp[(3) - (3)].sec_mech);
      }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1892 "SIP_parse.y"
    {
        (yyval.sec_mech) = new Security__mechanism;
        (yyval.sec_mech)->mechanism__name()= (yyvsp[(2) - (2)].sv);
        (yyval.sec_mech)->mechanism__params()=OMIT_VALUE;
//        Free($2);
      }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1898 "SIP_parse.y"
    {
        (yyval.sec_mech) = new Security__mechanism;
        (yyval.sec_mech)->mechanism__name()= (yyvsp[(2) - (3)].sv);
        (yyval.sec_mech)->mechanism__params()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($2);
      }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1908 "SIP_parse.y"
    {
      if(headerptr->path().ispresent()){
        int a=headerptr->path()().routeBody().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].route_list)->size_of();b++){
          headerptr->path()().routeBody()[a]=(*(yyvsp[(2) - (2)].route_list))[b];
          a++;
          }
      }
      else {
        headerptr->path()().routeBody()=*(yyvsp[(2) - (2)].route_list);
      }
      delete (yyvsp[(2) - (2)].route_list);
   }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1923 "SIP_parse.y"
    {
        (yyval.route_list)= new RouteBody__List;
        (*(yyval.route_list))[0]=*(yyvsp[(1) - (1)].route_val);
        delete (yyvsp[(1) - (1)].route_val);
      }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1928 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].route_list)->size_of();
        (yyval.route_list)=(yyvsp[(1) - (3)].route_list);
        (*(yyval.route_list))[a] = *(yyvsp[(3) - (3)].route_val);
        delete (yyvsp[(3) - (3)].route_val);
      }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1936 "SIP_parse.y"
    {
        (yyval.route_val) = new RouteBody;
        (yyval.route_val)->nameAddr().displayName()=(yyvsp[(2) - (6)].sv);
        (yyval.route_val)->nameAddr().addrSpec()= *uriptr;
        (yyval.route_val)->rrParam()()= *paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($2);
      }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1950 "SIP_parse.y"
    {
        (yyval.route_val) = new RouteBody;
        (yyval.route_val)->nameAddr().displayName()=OMIT_VALUE;
        (yyval.route_val)->nameAddr().addrSpec()= *uriptr;
        (yyval.route_val)->rrParam()()= *paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1963 "SIP_parse.y"
    {
        (yyval.route_val) = new RouteBody;
        (yyval.route_val)->nameAddr().displayName()=(yyvsp[(2) - (5)].sv);
        (yyval.route_val)->nameAddr().addrSpec()= *uriptr;
        (yyval.route_val)->rrParam()= OMIT_VALUE;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($2);
      }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1974 "SIP_parse.y"
    {
        (yyval.route_val) = new RouteBody;
        (yyval.route_val)->nameAddr().displayName()=OMIT_VALUE;
        (yyval.route_val)->nameAddr().addrSpec()= *uriptr;
        (yyval.route_val)->rrParam()= OMIT_VALUE;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1987 "SIP_parse.y"
    {
      if(headerptr->p__media__auth().ispresent()){
        int a=headerptr->p__media__auth()().token__list().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].a_t_list)->size_of();b++){
          headerptr->p__media__auth()().token__list()[a]=(*(yyvsp[(2) - (2)].a_t_list))[b];
          a++;
          }
      }
      else {
        headerptr->p__media__auth()().token__list()=*(yyvsp[(2) - (2)].a_t_list);
      }
      delete (yyvsp[(2) - (2)].a_t_list);
   }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 2002 "SIP_parse.y"
    {
        (yyval.a_t_list)= new Media__auth__token__list;
        (*(yyval.a_t_list))[0]=str2hex((yyvsp[(2) - (2)].sv));
        //Free $2;
      }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 2007 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].a_t_list)->size_of();
        (yyval.a_t_list)=(yyvsp[(1) - (4)].a_t_list);
        (*(yyval.a_t_list))[a] = str2hex((yyvsp[(4) - (4)].sv));
        //Free $4;
      }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 2015 "SIP_parse.y"
    {
      if(headerptr->request__disp().ispresent()){
        int a=headerptr->request__disp()().directive__list().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].d_list)->size_of();b++){
          headerptr->request__disp()().directive__list()[a]=(*(yyvsp[(2) - (2)].d_list))[b];
          a++;
          }
      }
      else {
        headerptr->request__disp()().directive__list()=*(yyvsp[(2) - (2)].d_list);
      }
      delete (yyvsp[(2) - (2)].d_list);
   }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 2030 "SIP_parse.y"
    {
        (yyval.d_list)= new Request__disp__directive__list;
        (*(yyval.d_list))[0]=(yyvsp[(2) - (2)].sv);
//        Free($2);
      }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 2035 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].d_list)->size_of();
        (yyval.d_list)=(yyvsp[(1) - (4)].d_list);
        (*(yyval.d_list))[a] = (yyvsp[(4) - (4)].sv);
//        Free($4);
      }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 2043 "SIP_parse.y"
    {
      if(headerptr->reject__contact().ispresent()){
        int a=headerptr->reject__contact()().rc__values().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].c_list)->size_of();b++){
          headerptr->reject__contact()().rc__values()[a]=(*(yyvsp[(2) - (2)].c_list))[b];
          a++;
          }
      }
      else {
        headerptr->reject__contact()().rc__values()=*(yyvsp[(2) - (2)].c_list);
      }
      delete (yyvsp[(2) - (2)].c_list);
   }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 2058 "SIP_parse.y"
    {
      if(headerptr->accept__contact().ispresent()){
        int a=headerptr->accept__contact()().ac__values().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].c_list)->size_of();b++){
          headerptr->accept__contact()().ac__values()[a]=(*(yyvsp[(2) - (2)].c_list))[b];
          a++;
          }
      }
      else {
        headerptr->accept__contact()().ac__values()=*(yyvsp[(2) - (2)].c_list);
      }
      delete (yyvsp[(2) - (2)].c_list);
   }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 2073 "SIP_parse.y"
    {
        (yyval.c_list)= new Contact__list;
        (*(yyval.c_list))[0]=*(yyvsp[(1) - (1)].p_list);
        delete (yyvsp[(1) - (1)].p_list);
      }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 2078 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].c_list)->size_of();
        (yyval.c_list)=(yyvsp[(1) - (3)].c_list);
        (*(yyval.c_list))[a] = *(yyvsp[(3) - (3)].p_list);
        delete (yyvsp[(3) - (3)].p_list);
      }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 2086 "SIP_parse.y"
    {
        (yyval.p_list)= new GenericParam__List(NULL_VALUE);
//        Free($2);
      }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 2090 "SIP_parse.y"
    {
//        Free($2);
        (yyval.p_list)=paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 2098 "SIP_parse.y"
    {
        headerptr->session__expires()().deltaSec() = (yyvsp[(3) - (3)].sv);
        headerptr->session__expires()().se__params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 2103 "SIP_parse.y"
    {
        headerptr->session__expires()().deltaSec() = (yyvsp[(3) - (4)].sv);
        headerptr->session__expires()().se__params()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 2113 "SIP_parse.y"
    {
        headerptr->session__id()().sessionID() = (yyvsp[(3) - (3)].sv);
        headerptr->session__id()().se__params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 2118 "SIP_parse.y"
    {
        headerptr->session__id()().sessionID() = (yyvsp[(3) - (4)].sv);
        headerptr->session__id()().se__params()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 2128 "SIP_parse.y"
    {
        headerptr->min__SE()().deltaSec() = (yyvsp[(3) - (3)].sv);
        headerptr->min__SE()().params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 2133 "SIP_parse.y"
    {
        headerptr->min__SE()().deltaSec() = (yyvsp[(3) - (4)].sv);
        headerptr->min__SE()().params()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 2143 "SIP_parse.y"
    {
      if(headerptr->historyInfo().ispresent()){
        int a=headerptr->historyInfo()().hi__entries().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].history_entry_list)->size_of();b++){
          headerptr->historyInfo()().hi__entries()[a]=(*(yyvsp[(2) - (2)].history_entry_list))[b];
          a++;
          }
      }
      else {
        headerptr->historyInfo()().hi__entries()=*(yyvsp[(2) - (2)].history_entry_list);
      }
      delete (yyvsp[(2) - (2)].history_entry_list);
   }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 2158 "SIP_parse.y"
    {
        (yyval.history_entry_list) = new Hi__Entry__list;
        (*(yyval.history_entry_list))[0] = *(yyvsp[(1) - (1)].history_entry);
        delete (yyvsp[(1) - (1)].history_entry);
      }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 2163 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].history_entry_list)->size_of();
        (yyval.history_entry_list)=(yyvsp[(1) - (3)].history_entry_list);
        (*(yyval.history_entry_list))[a] = *(yyvsp[(3) - (3)].history_entry);
        delete (yyvsp[(3) - (3)].history_entry);
      }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 2171 "SIP_parse.y"
    {
        (yyval.history_entry)= new Hi__Entry;
        (yyval.history_entry)->nameAddr()=*(yyvsp[(1) - (1)].naddr);
        (yyval.history_entry)->hi__params()=OMIT_VALUE;
        delete (yyvsp[(1) - (1)].naddr);
      }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 2177 "SIP_parse.y"
    {
        (yyval.history_entry)= new Hi__Entry;
        (yyval.history_entry)->nameAddr()=*(yyvsp[(1) - (2)].naddr);
        (yyval.history_entry)->hi__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(1) - (2)].naddr);
      }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 2188 "SIP_parse.y"
    {
        int b=0;
        int a;
        for(a=0;a<paramptr->size_of();a++){
          if(strcasecmp((const char*)(*paramptr)[a].id(),"icid-value")){
            headerptr->p__charging__vector()().charge__params()()[b].id()=(*paramptr)[a].id();
            headerptr->p__charging__vector()().charge__params()()[b].paramValue()=(*paramptr)[a].paramValue();
            b++;
          }
          else {
            headerptr->p__charging__vector()().icid__value()=(*paramptr)[a].paramValue();
          }
        }
        if(b==0) headerptr->p__charging__vector()().charge__params()=OMIT_VALUE;
        if(a==b) headerptr->p__charging__vector()().icid__value()="";
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;

      }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 2211 "SIP_parse.y"
    {
        headerptr->p__charging__function__address()().charge__addr__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;

      }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 2220 "SIP_parse.y"
    {}
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 2221 "SIP_parse.y"
    {}
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 2224 "SIP_parse.y"
    {
      if(headerptr->p__access__network__info().ispresent()){
        int a=headerptr->p__access__network__info()().access__net__specs().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].an_spec_list)->size_of();b++){
          headerptr->p__access__network__info()().access__net__specs()[a]=(*(yyvsp[(2) - (2)].an_spec_list))[b];
          a++;
          }
      }
      else {
        headerptr->p__access__network__info()().access__net__specs()=*(yyvsp[(2) - (2)].an_spec_list);
      }
      delete (yyvsp[(2) - (2)].an_spec_list);
   }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 2239 "SIP_parse.y"
    {
      if(headerptr->p__last__access__network__info().ispresent()){
        int a=headerptr->p__last__access__network__info()().access__net__specs().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].an_spec_list)->size_of();b++){
          headerptr->p__last__access__network__info()().access__net__specs()[a]=(*(yyvsp[(2) - (2)].an_spec_list))[b];
          a++;
          }
      }
      else {
        headerptr->p__last__access__network__info()().access__net__specs()=*(yyvsp[(2) - (2)].an_spec_list);
      }
      delete (yyvsp[(2) - (2)].an_spec_list);
   }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 2253 "SIP_parse.y"
    {
        (yyval.an_spec_list)= new Access__net__spec__list;
        (*(yyval.an_spec_list))[0]=*(yyvsp[(1) - (1)].an_spec);
        delete (yyvsp[(1) - (1)].an_spec);
      }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 2258 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].an_spec_list)->size_of();
        (yyval.an_spec_list)=(yyvsp[(1) - (3)].an_spec_list);
        (*(yyval.an_spec_list))[a] = *(yyvsp[(3) - (3)].an_spec);
        delete (yyvsp[(3) - (3)].an_spec);
      }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 2266 "SIP_parse.y"
    {
        (yyval.an_spec)= new Access__net__spec;
        (yyval.an_spec)->access__type()=(yyvsp[(2) - (2)].sv);
        (yyval.an_spec)->access__info()=OMIT_VALUE;
//        Free($2);
      }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 2272 "SIP_parse.y"
    {
        (yyval.an_spec)= new Access__net__spec;
        (yyval.an_spec)->access__type()=(yyvsp[(2) - (3)].sv);
        (yyval.an_spec)->access__info()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 2284 "SIP_parse.y"
    {
        headerptr->answer__mode()().answer__mode()=(yyvsp[(3) - (3)].sv);
        headerptr->answer__mode()().answer__mode__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 2289 "SIP_parse.y"
    {
        headerptr->answer__mode()().answer__mode()=(yyvsp[(3) - (4)].sv);
        headerptr->answer__mode()().answer__mode__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 2299 "SIP_parse.y"
    {
        headerptr->priv__answer__mode()().answer__mode()=(yyvsp[(3) - (3)].sv);
        headerptr->priv__answer__mode()().answer__mode__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 2304 "SIP_parse.y"
    {
        headerptr->priv__answer__mode()().answer__mode()=(yyvsp[(3) - (4)].sv);
        headerptr->priv__answer__mode()().answer__mode__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 2314 "SIP_parse.y"
    {
        headerptr->alert__mode()().alert__mode()=(yyvsp[(3) - (3)].sv);
        headerptr->alert__mode()().alert__mode__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 2319 "SIP_parse.y"
    {
        headerptr->alert__mode()().alert__mode()=(yyvsp[(3) - (4)].sv);
        headerptr->alert__mode()().alert__mode__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 2329 "SIP_parse.y"
    {
        headerptr->refer__sub()().refer__sub__value()=(yyvsp[(3) - (3)].sv);
        headerptr->refer__sub()().refer__sub__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 2334 "SIP_parse.y"
    {
        headerptr->refer__sub()().refer__sub__value()=(yyvsp[(3) - (4)].sv);
        headerptr->refer__sub()().refer__sub__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 2344 "SIP_parse.y"
    {
        headerptr->p__alerting__mode()().alerting__type()=(yyvsp[(3) - (3)].sv);
        headerptr->p__alerting__mode()().alerting__info()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 2349 "SIP_parse.y"
    {
        headerptr->p__alerting__mode()().alerting__type()=(yyvsp[(3) - (4)].sv);
        headerptr->p__alerting__mode()().alerting__info()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 2359 "SIP_parse.y"
    {
        headerptr->p__answer__state()().answer__type()=(yyvsp[(3) - (3)].sv);
        headerptr->p__answer__state()().answer__info()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 2364 "SIP_parse.y"
    {
        headerptr->p__answer__state()().answer__type()=(yyvsp[(3) - (4)].sv);
        headerptr->p__answer__state()().answer__info()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 2374 "SIP_parse.y"
    {
        headerptr->p__Area__Info()().p__Area__Info__Value()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 2382 "SIP_parse.y"
    {
      if(headerptr->p__visited__network__id().ispresent()){
        int a=headerptr->p__visited__network__id()().vnetworks().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].n_spec_list)->size_of();b++){
          headerptr->p__visited__network__id()().vnetworks()[a]=(*(yyvsp[(2) - (2)].n_spec_list))[b];
          a++;
          }
      }
      else {
        headerptr->p__visited__network__id()().vnetworks()=*(yyvsp[(2) - (2)].n_spec_list);
      }
      delete (yyvsp[(2) - (2)].n_spec_list);
   }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 2397 "SIP_parse.y"
    {
        (yyval.n_spec_list)= new Network__spec__list;
        (*(yyval.n_spec_list))[0]=*(yyvsp[(1) - (1)].n_spec);
        delete (yyvsp[(1) - (1)].n_spec);
      }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 2402 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].n_spec_list)->size_of();
        (yyval.n_spec_list)=(yyvsp[(1) - (3)].n_spec_list);
        (*(yyval.n_spec_list))[a] = *(yyvsp[(3) - (3)].n_spec);
        delete (yyvsp[(3) - (3)].n_spec);
      }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 2409 "SIP_parse.y"
    {
        (yyval.n_spec)= new Network__spec;
        (yyval.n_spec)->network__id()=(yyvsp[(2) - (2)].sv);
        (yyval.n_spec)->network__par()=OMIT_VALUE;
//        Free($2);
      }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 2415 "SIP_parse.y"
    {
        (yyval.n_spec)= new Network__spec;
        (yyval.n_spec)->network__id()=(yyvsp[(2) - (3)].sv);
        (yyval.n_spec)->network__par()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 2427 "SIP_parse.y"
    {
        headerptr->p__called__party__id()().called__pty__id()=*(yyvsp[(2) - (2)].naddr);
        headerptr->p__called__party__id()().cpid__param()=OMIT_VALUE;
        delete (yyvsp[(2) - (2)].naddr);
      }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 2432 "SIP_parse.y"
    {
        headerptr->p__called__party__id()().called__pty__id()=*(yyvsp[(2) - (3)].naddr);
        headerptr->p__called__party__id()().cpid__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(2) - (3)].naddr);
      }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 2442 "SIP_parse.y"
    {
      if(headerptr->p__associated__uri().ispresent()){
        int a=headerptr->p__associated__uri()().p__assoc__uris().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].u_spec_list)->size_of();b++){
          headerptr->p__associated__uri()().p__assoc__uris()[a]=(*(yyvsp[(2) - (2)].u_spec_list))[b];
          a++;
          }
      }
      else {
        headerptr->p__associated__uri()().p__assoc__uris()=*(yyvsp[(2) - (2)].u_spec_list);
      }
      delete (yyvsp[(2) - (2)].u_spec_list);
   }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 2457 "SIP_parse.y"
    {
        (yyval.u_spec_list) = new P__Assoc__uri__spec__list;
        (*(yyval.u_spec_list))[0] = *(yyvsp[(1) - (1)].u_spec);
        delete (yyvsp[(1) - (1)].u_spec);
      }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 2462 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].u_spec_list)->size_of();
        (yyval.u_spec_list)=(yyvsp[(1) - (3)].u_spec_list);
        (*(yyval.u_spec_list))[a] = *(yyvsp[(3) - (3)].u_spec);
        delete (yyvsp[(3) - (3)].u_spec);
      }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 2470 "SIP_parse.y"
    {
        (yyval.u_spec)= new P__Assoc__uri__spec;
        (yyval.u_spec)->p__asso__uri()=*(yyvsp[(1) - (1)].naddr);
        (yyval.u_spec)->ai__params()=OMIT_VALUE;
        delete (yyvsp[(1) - (1)].naddr);
      }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 2476 "SIP_parse.y"
    {
        (yyval.u_spec)= new P__Assoc__uri__spec;
        (yyval.u_spec)->p__asso__uri()=*(yyvsp[(1) - (2)].naddr);
        (yyval.u_spec)->ai__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(1) - (2)].naddr);
      }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 2487 "SIP_parse.y"
    {
      if(headerptr->diversion().ispresent()){
        int a=headerptr->diversion()().divParams().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].divparam_list)->size_of();b++){
          headerptr->diversion()().divParams()[a]=(*(yyvsp[(2) - (2)].divparam_list))[b];
          a++;
          }
      }
      else {
        headerptr->diversion()().divParams()=*(yyvsp[(2) - (2)].divparam_list);
      }
      delete (yyvsp[(2) - (2)].divparam_list);
   }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 2502 "SIP_parse.y"
    {
        (yyval.divparam_list) = new Diversion__params__list;
        (*(yyval.divparam_list))[0] = *(yyvsp[(1) - (1)].divparam);
        delete (yyvsp[(1) - (1)].divparam);
      }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 2507 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].divparam_list)->size_of();
        (yyval.divparam_list)=(yyvsp[(1) - (3)].divparam_list);
        (*(yyval.divparam_list))[a] = *(yyvsp[(3) - (3)].divparam);
        delete (yyvsp[(3) - (3)].divparam);
      }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 2515 "SIP_parse.y"
    {
        (yyval.divparam)= new Diversion__params;
        (yyval.divparam)->nameAddr()=*(yyvsp[(1) - (1)].naddr);
        (yyval.divparam)->div__params()=OMIT_VALUE;
        delete (yyvsp[(1) - (1)].naddr);
      }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 2521 "SIP_parse.y"
    {
        (yyval.divparam)= new Diversion__params;
        (yyval.divparam)->nameAddr()=*(yyvsp[(1) - (2)].naddr);
        (yyval.divparam)->div__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(1) - (2)].naddr);
      }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 2532 "SIP_parse.y"
    {
        (yyval.naddr)= new NameAddr;
        (yyval.naddr)->displayName() = (yyvsp[(2) - (5)].sv);
        (yyval.naddr)->addrSpec()= *uriptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($2);
      }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 2541 "SIP_parse.y"
    {
        (yyval.naddr)= new NameAddr;
        (yyval.naddr)->displayName() = OMIT_VALUE;
        (yyval.naddr)->addrSpec()= *uriptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 2552 "SIP_parse.y"
    {
      headerptr->subscription__state()().substate__value() =(yyvsp[(3) - (3)].sv);
      headerptr->subscription__state()().subexp__params()= OMIT_VALUE;
//      Free($3);
    }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 2557 "SIP_parse.y"
    {
      headerptr->subscription__state()().substate__value() =(yyvsp[(3) - (4)].sv);
      headerptr->subscription__state()().subexp__params()= *paramptr;
      paramcount=0;
      delete paramptr;
      paramptr=new GenericParam__List;

//      Free($3);
    }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 2568 "SIP_parse.y"
    {
      if(headerptr->allow__events().ispresent()){
        int a=headerptr->allow__events()().events().size_of();
        for(int b=0;b<(yyvsp[(2) - (2)].e_list)->size_of();b++){
          headerptr->allow__events()().events()[a]=(*(yyvsp[(2) - (2)].e_list))[b];
          a++;
          }
      }
      else {
        headerptr->allow__events()().events()=*(yyvsp[(2) - (2)].e_list);
      }
      delete (yyvsp[(2) - (2)].e_list);
   }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 2583 "SIP_parse.y"
    {
        (yyval.e_list) = new Event__type__list;
        (*(yyval.e_list))[0] = *(yyvsp[(2) - (2)].e_type);
        delete (yyvsp[(2) - (2)].e_type);
      }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 2588 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].e_list)->size_of();
        (yyval.e_list)=(yyvsp[(1) - (4)].e_list);
        (*(yyval.e_list))[a] = *(yyvsp[(4) - (4)].e_type);
        delete (yyvsp[(4) - (4)].e_type);
      }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 2597 "SIP_parse.y"
    {
        headerptr->event()().event__type()=*(yyvsp[(3) - (3)].e_type);
        headerptr->event()().event__params()=OMIT_VALUE;
        delete (yyvsp[(3) - (3)].e_type);
      }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 2602 "SIP_parse.y"
    {
        headerptr->event()().event__type()=*(yyvsp[(3) - (4)].e_type);
        headerptr->event()().event__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(3) - (4)].e_type);
      }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 2612 "SIP_parse.y"
    {
      (yyval.e_type) = new Event__type;
      (yyval.e_type)->event__package()= (yyvsp[(1) - (1)].sv);
      (yyval.e_type)->event__templates()=OMIT_VALUE;
//      Free($1);
      }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 2618 "SIP_parse.y"
    {
      (yyval.e_type) = new Event__type;
      (yyval.e_type)->event__package()= (yyvsp[(1) - (3)].sv);
      (yyval.e_type)->event__templates()=*(yyvsp[(3) - (3)].e_template_list);
      delete (yyvsp[(3) - (3)].e_template_list);
//      Free($1);
      }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 2627 "SIP_parse.y"
    {
        (yyval.e_template_list) = new Event__template__list;
        (*(yyval.e_template_list))[0] = (yyvsp[(2) - (2)].sv);
//        Free($2);
      }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 2632 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].e_template_list)->size_of();
        (yyval.e_template_list)=(yyvsp[(1) - (4)].e_template_list);
        (*(yyval.e_template_list))[a] = (yyvsp[(4) - (4)].sv);
//        Free($4);
      }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 2647 "SIP_parse.y"
    {
        headerptr->reason()().reasons()[reasoncount].protocol()= (yyvsp[(2) - (2)].sv);
        headerptr->reason()().reasons()[reasoncount].reasonValues()=OMIT_VALUE;
        reasoncount++;
//        Free($2);
      }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 2653 "SIP_parse.y"
    {
        headerptr->reason()().reasons()[reasoncount].protocol()= (yyvsp[(2) - (3)].sv);
        headerptr->reason()().reasons()[reasoncount].reasonValues()()=*paramptr;
        reasoncount++;
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
//        Free($2);
      }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 2664 "SIP_parse.y"
    {}
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 2671 "SIP_parse.y"
    {
        headerptr->passertedID()().ids()[passertedidcount].
                    nameAddr().displayName()= (yyvsp[(2) - (5)].sv);
        headerptr->passertedID()().ids()[passertedidcount].
                    nameAddr().addrSpec()= *uriptr;
        passertedidcount++;
//        Free($2);
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 2682 "SIP_parse.y"
    {
        headerptr->passertedID()().ids()[passertedidcount].
                    nameAddr().displayName()= OMIT_VALUE;
        headerptr->passertedID()().ids()[passertedidcount].
                    nameAddr().addrSpec()= *uriptr;
        passertedidcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 2692 "SIP_parse.y"
    {
        headerptr->passertedID()().ids()[passertedidcount].
                    addrSpecUnion()= *uriptr;
        passertedidcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 2702 "SIP_parse.y"
    {}
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 2709 "SIP_parse.y"
    {
        headerptr->ppreferredID()().ids()[ppreferredidcount].
                    nameAddr().displayName()= (yyvsp[(2) - (5)].sv);
        headerptr->ppreferredID()().ids()[ppreferredidcount].
                    nameAddr().addrSpec()= *uriptr;
        ppreferredidcount++;
//        Free($2);
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 2720 "SIP_parse.y"
    {
        headerptr->ppreferredID()().ids()[ppreferredidcount].
                    nameAddr().displayName()= OMIT_VALUE;
        headerptr->ppreferredID()().ids()[ppreferredidcount].
                    nameAddr().addrSpec()= *uriptr;
        ppreferredidcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 2730 "SIP_parse.y"
    {
        headerptr->ppreferredID()().ids()[ppreferredidcount].
                    addrSpecUnion()= *uriptr;
        ppreferredidcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 2740 "SIP_parse.y"
    {}
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 2747 "SIP_parse.y"
    {
      headerptr->privacy()().privacyValues()[privacycount]=(yyvsp[(1) - (1)].sv);
      privacycount++;
//      Free($1);
    }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 2754 "SIP_parse.y"
    {
        headerptr->rack()().response__num()= str2int((yyvsp[(3) - (7)].sv)); /*Free($3);*/
        headerptr->rack()().seqNumber()= str2int((yyvsp[(5) - (7)].sv)); /*Free($5);*/
        headerptr->rack()().method()= (yyvsp[(7) - (7)].sv);
//        Free($7);
      }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 2762 "SIP_parse.y"
    {
        headerptr->rseq()().response__num() = str2int((yyvsp[(3) - (3)].sv)); /*Free($3);*/
      }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 2767 "SIP_parse.y"
    {}
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 2770 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().nameAddr().displayName() = (yyvsp[(2) - (6)].sv);
        headerptr->replyTo()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->replyTo()().replyToParams()=*paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;

//        Free($2);
      }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 2784 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().nameAddr().displayName() = 
                                                                     OMIT_VALUE;
        headerptr->replyTo()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->replyTo()().replyToParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 2796 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().addrSpecUnion()= *uriptr;
        headerptr->replyTo()().replyToParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 2806 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().nameAddr().displayName() = (yyvsp[(2) - (5)].sv);
        headerptr->replyTo()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->replyTo()().replyToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($2);
      }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 2815 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().nameAddr().displayName() = 
                                                                    OMIT_VALUE;
        headerptr->replyTo()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->replyTo()().replyToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 2824 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().addrSpecUnion()= *uriptr;
        headerptr->replyTo()().replyToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 2833 "SIP_parse.y"
    {
        headerptr->undefinedHeader__List()()[undefcount].headerName() = (yyvsp[(1) - (2)].sv);
        headerptr->undefinedHeader__List()()[undefcount].headerValue()=trim((yyvsp[(2) - (2)].sv));
        undefcount++;
//        Free($1);Free($2);
      }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 2841 "SIP_parse.y"
    {}
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 2848 "SIP_parse.y"
    {}
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 2853 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].viaParams()=*paramptr;
        viacount++;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 2860 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].viaParams()=OMIT_VALUE;
        viacount++;
      }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 2867 "SIP_parse.y"
    {
       headerptr->via()().viaBody()[viacount].sentProtocol().protocolName()=(yyvsp[(1) - (5)].sv);
       headerptr->via()().viaBody()[viacount].sentProtocol().protocolVersion()=(yyvsp[(3) - (5)].sv);
       headerptr->via()().viaBody()[viacount].sentProtocol().transport()=(yyvsp[(5) - (5)].sv);
//       Free($1);Free($3);Free($5);
     }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 2875 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (5)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(5) - (5)].iv);
//        Free($1);
      }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 2880 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (4)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(4) - (4)].iv);
//        Free($1);
      }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 2885 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (4)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(4) - (4)].iv);
//        Free($1);
      }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 2890 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (3)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(3) - (3)].iv);
//        Free($1);
      }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 2895 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (1)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=OMIT_VALUE;
//        Free($1);
      }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 2902 "SIP_parse.y"
    {}
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 2903 "SIP_parse.y"
    {}
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 2906 "SIP_parse.y"
    {
        headerptr->minExpires()().deltaSec()= (yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 2912 "SIP_parse.y"
    {
        headerptr->mimeVersion()().majorNumber()=str2int((yyvsp[(3) - (5)].sv)); /*Free($3);*/
        headerptr->mimeVersion()().minorNumber()=str2int((yyvsp[(5) - (5)].sv)); /*Free($5); */
      }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 2918 "SIP_parse.y"
    {}
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 2921 "SIP_parse.y"
    {
        headerptr->userAgent()().userAgentBody()[useragentcount]= (yyvsp[(1) - (1)].sv);
        useragentcount++;
        Free((yyvsp[(1) - (1)].sv));
      }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 2926 "SIP_parse.y"
    {
        headerptr->userAgent()().userAgentBody()[useragentcount]= (yyvsp[(3) - (3)].sv);
        useragentcount++;
        Free((yyvsp[(3) - (3)].sv));
      }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 2933 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (3)].sv)); /*Free($3);*/
        headerptr->timestamp()().timeValue()().minorDigit()=OMIT_VALUE;
        headerptr->timestamp()().delay() = OMIT_VALUE;
      }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 2938 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (5)].sv)); /*Free($3);*/
        headerptr->timestamp()().timeValue()().minorDigit()=str2int((yyvsp[(5) - (5)].sv)); /*Free($5);*/
        headerptr->timestamp()().delay() = OMIT_VALUE;
      }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 2943 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (5)].sv)); /*Free($3);*/
        headerptr->timestamp()().timeValue()().minorDigit()=OMIT_VALUE;
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(5) - (5)].sv)); /*Free($5);*/
        headerptr->timestamp()().delay()().minorDigit()=OMIT_VALUE;
      }
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 2949 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (7)].sv)); //Free($3);
        headerptr->timestamp()().timeValue()().minorDigit()=str2int((yyvsp[(5) - (7)].sv)); //Free($5);
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(7) - (7)].sv)); //Free($7);
        headerptr->timestamp()().delay()().minorDigit()=OMIT_VALUE;
      }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 2955 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (7)].sv)); //Free($3);
        headerptr->timestamp()().timeValue()().minorDigit()=OMIT_VALUE;
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(5) - (7)].sv)); //Free($5);
        headerptr->timestamp()().delay()().minorDigit()=str2int((yyvsp[(7) - (7)].sv)); //Free($7);
      }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 2962 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (9)].sv)); //Free($3);
        headerptr->timestamp()().timeValue()().minorDigit()=str2int((yyvsp[(5) - (9)].sv)); //Free($5);
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(7) - (9)].sv)); //Free($7);
        headerptr->timestamp()().delay()().minorDigit()=str2int((yyvsp[(9) - (9)].sv)); //Free($9);
      }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 2970 "SIP_parse.y"
    {
        headerptr->supported()().optionsTags()=OMIT_VALUE;
      }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 2973 "SIP_parse.y"
    {
        if(!suppcount){
          headerptr->supported()().optionsTags()= *optptr;
          delete optptr;
        }
        suppcount=optioncount;
      }
    break;

  case 459:

/* Line 1806 of yacc.c  */
#line 2982 "SIP_parse.y"
    {
        if(!reqcount){
          headerptr->require()().optionsTags()= *optptr;
          delete optptr;
        }
        reqcount=optioncount;
      }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 2991 "SIP_parse.y"
    {
        if(!recroutecount){
          headerptr->recordRoute()().routeBody()= *routeptr;
          delete routeptr;
        }
        recroutecount=rcount;
      }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 3000 "SIP_parse.y"
    {
        headerptr->organization()().organization() = trim((yyvsp[(2) - (2)].sv));
//        Free($2);
      }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 3006 "SIP_parse.y"
    {
        headerptr->date()().sipDate() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 3012 "SIP_parse.y"
    {
        headerptr->cSeq()().seqNumber() = str2int((yyvsp[(3) - (5)].sv)); //Free($3);
        headerptr->cSeq()().method()= (yyvsp[(5) - (5)].sv);
//        Free($5);
      }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 3019 "SIP_parse.y"
    {}
    break;

  case 467:

/* Line 1806 of yacc.c  */
#line 3026 "SIP_parse.y"
    {
        headerptr->callInfo()().callInfoBody()()[callinfocount].url()=(yyvsp[(3) - (4)].sv);
        headerptr->callInfo()().callInfoBody()()[callinfocount].infoParams()=
                                                                     OMIT_VALUE;
        callinfocount++;
//        Free($3);
      }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 3033 "SIP_parse.y"
    {
        headerptr->callInfo()().callInfoBody()()[callinfocount].url()=(yyvsp[(3) - (5)].sv);
        headerptr->callInfo()().callInfoBody()()[callinfocount].infoParams()=
                                                                      *paramptr;
        paramcount=0;
        callinfocount++;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 469:

/* Line 1806 of yacc.c  */
#line 3045 "SIP_parse.y"
    {
        headerptr->callId()().callid()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 3051 "SIP_parse.y"
    {}
    break;

  case 471:

/* Line 1806 of yacc.c  */
#line 3052 "SIP_parse.y"
    {}
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 3055 "SIP_parse.y"
    {
        if(!acceptcount){headerptr->accept()().acceptArgs()= OMIT_VALUE;};
      }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 3058 "SIP_parse.y"
    {}
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 3065 "SIP_parse.y"
    {
        size_t len2 = strlen((yyvsp[(2) - (4)].sv));
        size_t buflen = len2+strlen((yyvsp[(4) - (4)].sv))+2;
        char *buff=(char *)Malloc(buflen);
        /*buff[0]='\0';
        strcat(buff,$2);
        strcat(buff,"/");
        strcat(buff,$4);*/
        // avoid strcat+strcat+...
        strcpy(buff, (yyvsp[(2) - (4)].sv));
        buff[len2] = '/';
        strcpy(buff+len2+1, (yyvsp[(4) - (4)].sv));
        buff[buflen-1] = '\0'; // safety
        headerptr->accept()().acceptArgs()()[acceptcount].mediaRange()=buff;
        headerptr->accept()().acceptArgs()()[acceptcount].acceptParam()
                      =OMIT_VALUE;
        acceptcount++;
        //Free($2);Free($4);
	Free(buff);
      }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 3085 "SIP_parse.y"
    {
        size_t len2 = strlen((yyvsp[(2) - (5)].sv));
        size_t buflen = len2+strlen((yyvsp[(4) - (5)].sv))+2;
        char *buff=(char *)Malloc(buflen);
        /*buff[0]='\0';
        strcat(buff,$2);
        strcat(buff,"/");
        strcat(buff,$4);*/
        // avoid strcat+strcat+...
        strcpy(buff, (yyvsp[(2) - (5)].sv));
        buff[len2] = '/';
        strcpy(buff+len2+1, (yyvsp[(4) - (5)].sv));
        buff[buflen-1] = '\0'; // safety
        headerptr->accept()().acceptArgs()()[acceptcount].mediaRange()=buff;
        headerptr->accept()().acceptArgs()()[acceptcount].acceptParam()
                      =*paramptr;
        paramcount=0;
        acceptcount++;
        delete paramptr;
        paramptr=new GenericParam__List;
        //Free($2);Free($4);
	Free(buff);
      }
    break;

  case 478:

/* Line 1806 of yacc.c  */
#line 3111 "SIP_parse.y"
    {
        if(!aceptenccount){headerptr->acceptEncoding()().contentCoding()
                    = OMIT_VALUE;};
      }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 3115 "SIP_parse.y"
    {}
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 3118 "SIP_parse.y"
    {
        headerptr->acceptEncoding()().contentCoding()()[aceptenccount]=trim((yyvsp[(2) - (2)].sv));
        aceptenccount++;
//        Free($2);
      }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 3123 "SIP_parse.y"
    {
        headerptr->acceptEncoding()().contentCoding()()[aceptenccount]=trim((yyvsp[(4) - (4)].sv));
        aceptenccount++;
//        Free($4);
      }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 3130 "SIP_parse.y"
    {
        headerptr->acceptLanguage()().languageBody()=OMIT_VALUE;
      }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 3133 "SIP_parse.y"
    {}
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 3140 "SIP_parse.y"
    {
        headerptr->acceptLanguage()().languageBody()()[acceptlangcount].
                      languageRange()=(yyvsp[(2) - (2)].sv);
        headerptr->acceptLanguage()().languageBody()()[acceptlangcount].
                      acceptParam()=OMIT_VALUE;
        acceptlangcount++;
//        Free($2);
      }
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 3148 "SIP_parse.y"
    {
        headerptr->acceptLanguage()().languageBody()()[acceptlangcount].
                      languageRange()=(yyvsp[(2) - (3)].sv);
        headerptr->acceptLanguage()().languageBody()()[acceptlangcount].
                      acceptParam()=*paramptr;
        paramcount=0;
        acceptlangcount++;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 488:

/* Line 1806 of yacc.c  */
#line 3163 "SIP_parse.y"
    {}
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 3166 "SIP_parse.y"
    {
        int idx;
        if(headerptr->wwwAuthenticate().ispresent()) 
          idx=headerptr->wwwAuthenticate()().challenge().size_of();
        else idx=0;
        headerptr->wwwAuthenticate()().challenge()[idx].digestCln()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 3176 "SIP_parse.y"
    {
        int idx;
        if(headerptr->wwwAuthenticate().ispresent()) 
          idx=headerptr->wwwAuthenticate()().challenge().size_of();
        else idx=0;
        headerptr->wwwAuthenticate()().challenge()[idx].otherChallenge().
                      authScheme()=(yyvsp[(2) - (3)].sv);
        headerptr->wwwAuthenticate()().challenge()[idx].otherChallenge().
                      authParams()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 3192 "SIP_parse.y"
    {}
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 3195 "SIP_parse.y"
    {
        int idx;
        if(headerptr->proxyAuthenticate().ispresent()) 
          idx=headerptr->proxyAuthenticate()().challenge().size_of();
        else idx=0;
        headerptr->proxyAuthenticate()().challenge()[idx].digestCln()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 493:

/* Line 1806 of yacc.c  */
#line 3205 "SIP_parse.y"
    {
        int idx;
        if(headerptr->proxyAuthenticate().ispresent()) 
          idx=headerptr->proxyAuthenticate()().challenge().size_of();
        else idx=0;
        headerptr->proxyAuthenticate()().challenge()[idx].otherChallenge().
                authScheme()=(yyvsp[(2) - (3)].sv);
        headerptr->proxyAuthenticate()().challenge()[idx].otherChallenge().
                authParams()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($2);
      }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 3223 "SIP_parse.y"
    {
        headerptr->toField()().addressField().nameAddr().displayName() = (yyvsp[(3) - (7)].sv);
        headerptr->toField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->toField()().toParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($3);
      }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 3235 "SIP_parse.y"
    {
        headerptr->toField()().addressField().nameAddr().displayName()=OMIT_VALUE;
        headerptr->toField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->toField()().toParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 496:

/* Line 1806 of yacc.c  */
#line 3246 "SIP_parse.y"
    {
        headerptr->toField()().addressField().addrSpecUnion()= *uriptr;
        headerptr->toField()().toParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 3256 "SIP_parse.y"
    {
        headerptr->toField()().addressField().nameAddr().displayName() = (yyvsp[(3) - (6)].sv);
        headerptr->toField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->toField()().toParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($3);
      }
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 3265 "SIP_parse.y"
    {
        headerptr->toField()().addressField().nameAddr().displayName()=OMIT_VALUE;
        headerptr->toField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->toField()().toParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 499:

/* Line 1806 of yacc.c  */
#line 3273 "SIP_parse.y"
    {
        headerptr->toField()().addressField().addrSpecUnion()= *uriptr;
        headerptr->toField()().toParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 3282 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().wildcard()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 3286 "SIP_parse.y"
    {}
    break;

  case 502:

/* Line 1806 of yacc.c  */
#line 3289 "SIP_parse.y"
    {}
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 3290 "SIP_parse.y"
    {}
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 3293 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().displayName()= (yyvsp[(2) - (6)].sv);
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    contactParams()= *paramptr;
        contactcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($2);
      }
    break;

  case 505:

/* Line 1806 of yacc.c  */
#line 3309 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().displayName()= OMIT_VALUE;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    contactParams()= *paramptr;
        contactcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 3324 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().addrSpecUnion()= *uriptr;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    contactParams()= *paramptr;
        contactcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 507:

/* Line 1806 of yacc.c  */
#line 3337 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().displayName()= (yyvsp[(2) - (5)].sv);
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    contactParams()= OMIT_VALUE;
        contactcount++;
//        Free($2);
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 508:

/* Line 1806 of yacc.c  */
#line 3350 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().displayName()= OMIT_VALUE;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    contactParams()= OMIT_VALUE;
        contactcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 509:

/* Line 1806 of yacc.c  */
#line 3362 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    addressField().addrSpecUnion()= *uriptr;
        headerptr->contact()().contactBody().contactAddresses()[contactcount].
                    contactParams()= OMIT_VALUE;
        contactcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 3375 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().nameAddr().displayName() = (yyvsp[(3) - (7)].sv);
        headerptr->fromField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->fromField()().fromParams()=*paramptr;

        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;

//        Free($3);
      }
    break;

  case 511:

/* Line 1806 of yacc.c  */
#line 3389 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().nameAddr().displayName() 
                    = OMIT_VALUE;
        headerptr->fromField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->fromField()().fromParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 512:

/* Line 1806 of yacc.c  */
#line 3401 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().addrSpecUnion()= *uriptr;
        headerptr->fromField()().fromParams()=*paramptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 513:

/* Line 1806 of yacc.c  */
#line 3411 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().nameAddr().displayName() = (yyvsp[(3) - (6)].sv);
        headerptr->fromField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->fromField()().fromParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
//        Free($3);
      }
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 3420 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().nameAddr().displayName()
                    = OMIT_VALUE;
        headerptr->fromField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->fromField()().fromParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 3429 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().addrSpecUnion()= *uriptr;
        headerptr->fromField()().fromParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 3438 "SIP_parse.y"
    {}
    break;

  case 517:

/* Line 1806 of yacc.c  */
#line 3439 "SIP_parse.y"
    {}
    break;

  case 518:

/* Line 1806 of yacc.c  */
#line 3442 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (4)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(4) - (4)].sv);
        paramcount++;
//        Free($2);Free($4);
      }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 3448 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (3)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(3) - (3)].sv);
        paramcount++;
//        Free($1);Free($3);
      }
    break;

  case 520:

/* Line 1806 of yacc.c  */
#line 3454 "SIP_parse.y"
    {}
    break;

  case 521:

/* Line 1806 of yacc.c  */
#line 3455 "SIP_parse.y"
    {}
    break;

  case 522:

/* Line 1806 of yacc.c  */
#line 3460 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (2)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(2) - (2)].sv);
        paramcount++;
//        Free($1);
//        Free($2);
      }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 3467 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (1)].sv);
        (*paramptr)[paramcount].paramValue()=OMIT_VALUE;
        paramcount++;
//        Free($1);
      }
    break;

  case 524:

/* Line 1806 of yacc.c  */
#line 3474 "SIP_parse.y"
    { }
    break;

  case 525:

/* Line 1806 of yacc.c  */
#line 3475 "SIP_parse.y"
    {}
    break;

  case 526:

/* Line 1806 of yacc.c  */
#line 3478 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (4)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(4) - (4)].sv);
        paramcount++;
      }
    break;

  case 527:

/* Line 1806 of yacc.c  */
#line 3483 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (3)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(3) - (3)].sv);
        paramcount++;
      }
    break;

  case 528:

/* Line 1806 of yacc.c  */
#line 3488 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (3)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(3) - (3)].sv);
        paramcount++;
      }
    break;

  case 529:

/* Line 1806 of yacc.c  */
#line 3493 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (2)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(2) - (2)].sv);
        paramcount++;
      }
    break;

  case 530:

/* Line 1806 of yacc.c  */
#line 3498 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (2)].sv);
        (*paramptr)[paramcount].paramValue()=OMIT_VALUE;
        paramcount++;
      }
    break;

  case 531:

/* Line 1806 of yacc.c  */
#line 3503 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (1)].sv);
        (*paramptr)[paramcount].paramValue()=OMIT_VALUE;
        paramcount++;
      }
    break;

  case 532:

/* Line 1806 of yacc.c  */
#line 3512 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(3) - (3)].sv);}
    break;

  case 533:

/* Line 1806 of yacc.c  */
#line 3513 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(2) - (2)].sv);}
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 3521 "SIP_parse.y"
    {
        uriptr->urlParameters()()[urlparamcount].id()=(yyvsp[(1) - (2)].sv);
        uriptr->urlParameters()()[urlparamcount].paramValue()=(yyvsp[(2) - (2)].sv);
        urlparamcount++;
//        Free($1);Free($2);
      }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 3527 "SIP_parse.y"
    {
        uriptr->urlParameters()()[urlparamcount].id()=(yyvsp[(1) - (1)].sv);
        uriptr->urlParameters()()[urlparamcount].paramValue()=OMIT_VALUE;
        urlparamcount++;
//        Free($1);
    }
    break;

  case 539:

/* Line 1806 of yacc.c  */
#line 3535 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(2) - (2)].sv);}
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 3541 "SIP_parse.y"
    {
        uriptr->scheme() = (yyvsp[(1) - (3)].sv);
        uriptr->urlParameters() = OMIT_VALUE;
        uriptr->headers() = OMIT_VALUE;
        if(!strcasecmp((yyvsp[(1) - (3)].sv),"tel")){
          if(!uriptr->userInfo().ispresent()){
            uriptr->userInfo()().userOrTelephoneSubscriber()=uriptr->hostPort().host()();
            uriptr->userInfo()().password()=OMIT_VALUE;
            uriptr->hostPort().host()=OMIT_VALUE;
          }
        }
        /*Free($1);*/
      }
    break;

  case 545:

/* Line 1806 of yacc.c  */
#line 3561 "SIP_parse.y"
    {}
    break;

  case 546:

/* Line 1806 of yacc.c  */
#line 3563 "SIP_parse.y"
    {
        uriptr->scheme() = (yyvsp[(1) - (5)].sv);
        if(!strcasecmp((yyvsp[(1) - (5)].sv),"tel")){
          if(!uriptr->userInfo().ispresent()){
            uriptr->userInfo()().userOrTelephoneSubscriber()=uriptr->hostPort().host()();
            uriptr->userInfo()().password()=OMIT_VALUE;
            uriptr->hostPort().host()=OMIT_VALUE;
          }
        }
        /*Free($1);*/
      }
    break;

  case 547:

/* Line 1806 of yacc.c  */
#line 3574 "SIP_parse.y"
    {
        uriptr->scheme() = (yyvsp[(1) - (4)].sv);
        uriptr->headers() = OMIT_VALUE;
        if(!strcasecmp((yyvsp[(1) - (4)].sv),"tel")){
          if(!uriptr->userInfo().ispresent()){
            uriptr->userInfo()().userOrTelephoneSubscriber()=uriptr->hostPort().host()();
            uriptr->userInfo()().password()=OMIT_VALUE;
            uriptr->hostPort().host()=OMIT_VALUE;
          }
        }
        /*Free($1);*/
      }
    break;

  case 548:

/* Line 1806 of yacc.c  */
#line 3586 "SIP_parse.y"
    {
        uriptr->scheme() = (yyvsp[(1) - (4)].sv);
        uriptr->urlParameters() = OMIT_VALUE;
        if(!strcasecmp((yyvsp[(1) - (4)].sv),"tel")){
          if(!uriptr->userInfo().ispresent()){
            uriptr->userInfo()().userOrTelephoneSubscriber()=uriptr->hostPort().host()();
            uriptr->userInfo()().password()=OMIT_VALUE;
            uriptr->hostPort().host()=OMIT_VALUE;
          }
        }
        /*Free($1);*/
      }
    break;

  case 549:

/* Line 1806 of yacc.c  */
#line 3598 "SIP_parse.y"
    {
        uriptr->scheme() = (yyvsp[(1) - (3)].sv);
        uriptr->urlParameters() = OMIT_VALUE;
        uriptr->headers() = OMIT_VALUE;
        if(!strcasecmp((yyvsp[(1) - (3)].sv),"tel")){
          if(!uriptr->userInfo().ispresent()){
            uriptr->userInfo()().userOrTelephoneSubscriber()=uriptr->hostPort().host()();
            uriptr->userInfo()().password()=OMIT_VALUE;
            uriptr->hostPort().host()=OMIT_VALUE;
          }
        }
        /*Free($1);*/
      }
    break;

  case 550:

/* Line 1806 of yacc.c  */
#line 3614 "SIP_parse.y"
    { uriptr->userInfo() = OMIT_VALUE;}
    break;

  case 551:

/* Line 1806 of yacc.c  */
#line 3615 "SIP_parse.y"
    {
        char* s=strchr((yyvsp[(1) - (1)].sv),':');
        if(s==NULL){
          uriptr->userInfo()().password() = OMIT_VALUE;
          uriptr->userInfo()().userOrTelephoneSubscriber() = (yyvsp[(1) - (1)].sv);
        }
        else{
          *s='\0';
          s++;
          uriptr->userInfo()().password() = s;
          uriptr->userInfo()().userOrTelephoneSubscriber() = (yyvsp[(1) - (1)].sv);
        }
//        Free($1);
      }
    break;

  case 552:

/* Line 1806 of yacc.c  */
#line 3631 "SIP_parse.y"
    {
        uriptr->hostPort().host() = trimOnIPv6((yyvsp[(1) - (2)].sv));
//        Free($1);
      }
    break;

  case 553:

/* Line 1806 of yacc.c  */
#line 3637 "SIP_parse.y"
    {uriptr->hostPort().portField() = OMIT_VALUE;}
    break;

  case 554:

/* Line 1806 of yacc.c  */
#line 3638 "SIP_parse.y"
    {uriptr->hostPort().portField() = (yyvsp[(2) - (2)].iv);}
    break;

  case 557:

/* Line 1806 of yacc.c  */
#line 3645 "SIP_parse.y"
    {}
    break;

  case 558:

/* Line 1806 of yacc.c  */
#line 3646 "SIP_parse.y"
    {}
    break;

  case 560:

/* Line 1806 of yacc.c  */
#line 3652 "SIP_parse.y"
    {}
    break;

  case 565:

/* Line 1806 of yacc.c  */
#line 3663 "SIP_parse.y"
    {}
    break;

  case 566:

/* Line 1806 of yacc.c  */
#line 3666 "SIP_parse.y"
    {
        uriptr->headers()()[headercount].id()=(yyvsp[(1) - (3)].sv);
        uriptr->headers()()[headercount].paramValue()=(yyvsp[(3) - (3)].sv);
        headercount++;
//        Free($1);Free($3);
      }
    break;



/* Line 1806 of yacc.c  */
#line 8893 "SIP_parse_.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 3677 "SIP_parse.y"

                    
/* Additional C code */
char *trim(char *string){

    /* trims leading blanks and removes line breaks*/

    char *j;
    int a=0;
    int b=0;
    j = string+strlen(string);
    //leading blanks
    while ((string[0] <= ' ') && (string[0] > 0) && (string < j)) string++; 
    while (string[a]){                                       // line breaks
        if((string[a]=='\n') || (string[a]=='\r')){
            while ((string[a] <= ' ') && (string[a] > 0) && (string[a])) a++;
            string[b]=' ';
            b++;
        }
        if(string[a]){
            string[b]=string[a];
            b++;
            a++;
        }
    }
    string[b]='\0';
    b--;
    //ending blanks
    while ((string[b] <= ' ') && (string[b] > 0) && (b)){string[b]='\0';b--;}
    return(string);
}

char *trimOnIPv6(char *str){
  if(ipv6enabled){
    if(str[0]=='['){
      str++;
      str[strlen(str)-1]='\0';
    }
  }
  return str;
}

void resetptr(){
    if(paramcount){
      delete paramptr;
      paramptr= new GenericParam__List;
      paramcount=0;
    }
    if(urlparamcount+headercount){
      delete uriptr;
      uriptr= new SipUrl;
      urlparamcount=headercount=0;
    }
}

extern char * getstream();

void parsing(const char* buff, int len, bool p_ipv6enabled){
  SIP_parse_lex_destroy();
  yy_buffer_state * flex_buffer = SIP_parse__scan_bytes (buff, len);
//  stream_buffer = getstream(); // EPTEBAL
  stream_buffer = (char *)Malloc((len*2+2)*sizeof(char)); // EPTEBAL
  if (flex_buffer == NULL) {
    TTCN_error("Flex buffer creation failed.");
  }
  ipv6enabled = p_ipv6enabled;
      SIP_parse_debug=0;
//      void resetptr();
      initcounters();
      SIP_parse_parse();  // also sets appropriate fields of msg through pointers..
        delete uriptr;
        uriptr=NULL;
        delete paramptr;
        paramptr=NULL;
  SIP_parse__delete_buffer(flex_buffer);
  Free(stream_buffer);
}

