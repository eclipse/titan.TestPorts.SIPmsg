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
* Copyright (c) 2000-2019 Ericsson Telecom AB
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v2.0
* which accompanies this distribution, and is available at
* https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
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
//  Rev:                R17B
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
     CONVERSATIONIDLWSCOLON = 390,
     CONTRIBUTIONIDLWSCOLON = 391,
     INREPLYTOCONTIDLWSCOLON = 392,
     MESSAGEEXPIRESLWSCOLON = 393,
     MESSAGEUIDLWSCOLON = 394,
     SESSIONREPLACESLWSCOLON = 395,
     _TOKEN_NO_DOT = 396,
     _HEXTOKEN = 397,
     _DOT = 398,
     _SLASH = 399,
     SEMICOLON = 400,
     EQUALSIGN = 401,
     _ABO = 402,
     _ABC = 403,
     _COLON = 404,
     QUESTMARK = 405,
     AMPERSANT = 406,
     SOMELWS_SEMICOLON = 407,
     _AT = 408,
     _HOST = 409,
     SCHEME = 410,
     _HNAME = 411,
     _HVALUE = 412,
     _PORT = 413,
     SOMELWS_COMMA_SOMELWS = 414,
     SOMELWS_SLASH_SOMELWS = 415,
     PROTOCOL_NAME = 416,
     PROTOCOL_VERSION = 417,
     TRANSPORT = 418,
     _URLTOKEN = 419,
     PASSERTEDSERVICELWSCOLON = 420,
     PPREFERREDSERVICELWSCOLON = 421,
     XAUTLWSCOLON = 422,
     XCARRIERINFOLWSCOLON = 423,
     XCHGDELAYLWSCOLON = 424,
     PAREAINFOLWSCOLON = 425,
     XFCILWSCOLON = 426,
     XCHGINFOLWSCOLON = 427
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
#line 446 "SIP_parse_.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 458 "SIP_parse_.tab.c"

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
#define YYLAST   1759

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  581
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1157

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   427

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
     165,   166,   167,   168,   169,   170,   171,   172
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
     892,   895,   898,   901,   904,   907,   910,   913,   917,   921,
     925,   929,   933,   937,   939,   942,   944,   948,   951,   955,
     959,   964,   968,   973,   976,   978,   982,   985,   989,   993,
     998,  1002,  1008,  1011,  1013,  1017,  1022,  1028,  1031,  1034,
    1037,  1042,  1046,  1048,  1051,  1054,  1059,  1063,  1068,  1072,
    1076,  1080,  1085,  1088,  1094,  1101,  1105,  1110,  1114,  1120,
    1122,  1126,  1128,  1130,  1135,  1139,  1141,  1149,  1158,  1162,
    1165,  1168,  1171,  1174,  1176,  1180,  1183,  1187,  1190,  1192,
    1196,  1203,  1209,  1215,  1220,  1223,  1226,  1231,  1234,  1237,
    1242,  1245,  1248,  1250,  1254,  1257,  1261,  1265,  1270,  1274,
    1279,  1283,  1288,  1291,  1293,  1297,  1299,  1302,  1305,  1308,
    1310,  1314,  1317,  1320,  1322,  1326,  1329,  1333,  1337,  1342,
    1346,  1351,  1355,  1360,  1364,  1369,  1373,  1378,  1382,  1387,
    1390,  1393,  1395,  1399,  1402,  1406,  1409,  1413,  1416,  1418,
    1422,  1424,  1427,  1430,  1432,  1436,  1438,  1441,  1447,  1452,
    1456,  1461,  1464,  1467,  1472,  1476,  1481,  1483,  1487,  1490,
    1495,  1498,  1500,  1504,  1507,  1511,  1514,  1516,  1520,  1521,
    1527,  1532,  1535,  1538,  1540,  1544,  1545,  1551,  1556,  1559,
    1562,  1565,  1570,  1572,  1580,  1584,  1587,  1594,  1600,  1604,
    1610,  1615,  1618,  1621,  1624,  1628,  1631,  1634,  1638,  1643,
    1647,  1653,  1659,  1664,  1669,  1673,  1675,  1678,  1682,  1686,
    1692,  1696,  1698,  1702,  1706,  1712,  1718,  1726,  1734,  1744,
    1746,  1749,  1752,  1755,  1758,  1762,  1768,  1771,  1773,  1777,
    1782,  1788,  1792,  1793,  1795,  1797,  1800,  1802,  1806,  1811,
    1817,  1819,  1822,  1825,  1830,  1832,  1835,  1837,  1841,  1844,
    1848,  1851,  1855,  1859,  1862,  1866,  1870,  1878,  1885,  1890,
    1897,  1903,  1907,  1911,  1914,  1916,  1920,  1927,  1933,  1937,
    1943,  1948,  1951,  1959,  1966,  1971,  1978,  1984,  1988,  1990,
    1992,  1995,  1999,  2004,  2008,  2011,  2013,  2016,  2018,  2021,
    2025,  2030,  2034,  2038,  2041,  2044,  2046,  2050,  2053,  2055,
    2057,  2059,  2061,  2064,  2066,  2069,  2071,  2075,  2078,  2081,
    2084,  2086,  2092,  2097,  2102,  2106,  2107,  2109,  2112,  2113,
    2116,  2118,  2121,  2124,  2127,  2129,  2133,  2134,  2136,  2138,
    2141,  2144
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     174,     0,    -1,   175,    -1,   220,    -1,   176,   177,     4,
      -1,     9,     3,   409,     3,     7,    13,    -1,     1,    13,
      -1,    -1,   178,    -1,   179,    -1,   178,   179,    -1,   244,
      -1,   196,    -1,   225,    -1,   180,    -1,     1,    13,    -1,
     181,    13,    -1,   183,    13,    -1,   184,    13,    -1,   186,
      13,    -1,   188,    13,    -1,   189,    13,    -1,   190,    13,
      -1,    87,    -1,    87,   182,    -1,   377,    29,    -1,   182,
      95,   377,    29,    -1,    89,   377,    29,    -1,    89,   377,
      29,   396,    -1,    40,   185,    -1,   377,    30,    -1,   185,
      95,   377,    30,    -1,    90,   187,    -1,   377,    30,    -1,
     187,    95,   377,    30,    -1,    41,   377,    42,    -1,    43,
     377,    20,    -1,    91,   377,    29,    -1,   167,   377,    29,
      -1,   168,   377,    29,    -1,   169,   377,    29,    -1,   172,
     377,    29,    -1,   172,   377,    29,   152,    29,    -1,   171,
     377,   142,    -1,   203,    13,    -1,   206,    13,    -1,   208,
      13,    -1,   210,    13,    -1,   211,    13,    -1,   212,    13,
      -1,   214,    13,    -1,   216,    13,    -1,   219,    13,    -1,
     202,    13,    -1,   199,    13,    -1,   198,    13,    -1,   197,
      13,    -1,   227,    13,    -1,   228,    13,    -1,   120,   377,
     407,   147,   408,   148,   396,    -1,   120,   377,   147,   408,
     148,   396,    -1,   120,   377,   405,   396,    -1,   120,   377,
     407,   147,   408,   148,    -1,   120,   377,   147,   408,   148,
      -1,   120,   377,   405,    -1,   126,   377,   407,   147,   408,
     148,   396,    -1,   126,   377,   147,   408,   148,   396,    -1,
     126,   377,   405,   396,    -1,   126,   377,   407,   147,   408,
     148,    -1,   126,   377,   147,   408,   148,    -1,   126,   377,
     405,    -1,   125,   377,   407,   147,   408,   148,   396,    -1,
     125,   377,   147,   408,   148,   396,    -1,   125,   377,   405,
     396,    -1,   125,   377,   407,   147,   408,   148,    -1,   125,
     377,   147,   408,   148,    -1,   125,   377,   405,    -1,   127,
     377,    29,    -1,   128,   377,    29,    -1,    82,   377,   407,
     147,   408,   148,   396,    -1,    82,   377,   147,   408,   148,
     396,    -1,    82,   377,   405,   396,    -1,    82,   377,   407,
     147,   408,   148,    -1,    82,   377,   147,   408,   148,    -1,
      82,   377,   405,    -1,    77,   204,    -1,   205,    -1,   205,
      95,   204,    -1,   377,   147,   164,   148,    -1,   377,   147,
     164,   148,   396,    -1,    78,   207,    -1,   377,    31,   230,
      -1,   377,    29,   230,    -1,    79,   377,   209,    -1,    11,
      -1,   209,    95,   377,    11,    -1,    81,   377,    42,    -1,
      83,    10,    -1,    84,   213,    -1,   377,    31,   230,    -1,
     377,    29,   230,    -1,    85,   215,    -1,   377,    29,    -1,
     215,    95,   377,    29,    -1,    86,   217,    -1,   218,    -1,
     217,    95,   218,    -1,   377,   407,   147,   408,   148,   396,
      -1,   377,   147,   408,   148,   396,    -1,   377,   407,   147,
     408,   148,    -1,   377,   147,   408,   148,    -1,    39,    10,
      -1,   221,   222,     4,    -1,     8,     3,     5,     3,     6,
      13,    -1,     1,     6,    13,    -1,    -1,   223,    -1,   224,
      -1,   223,   224,    -1,   244,    -1,   196,    -1,   225,    -1,
     180,    -1,     1,    13,    -1,   231,    13,    -1,   388,    13,
      -1,   234,    13,    -1,   236,    13,    -1,   239,    13,    -1,
     226,    13,    -1,   240,    13,    -1,   386,    13,    -1,    47,
     230,    -1,   165,   229,    -1,   166,   229,    -1,   377,    29,
      -1,   229,    95,   377,    29,    -1,   397,    -1,   397,    95,
     230,    -1,    66,   232,    -1,   233,    -1,   233,    95,   232,
      -1,   377,   147,   164,   148,    -1,   377,   147,   164,   148,
     396,    -1,    67,   377,    29,    -1,    67,   377,    29,   377,
      24,   235,    23,    -1,    67,   377,    29,   377,    24,   235,
      23,   396,    -1,    67,   377,    29,   396,    -1,    32,    -1,
     235,    32,    -1,    68,   377,   237,    -1,   238,    -1,   237,
      27,   238,    -1,    24,   235,    23,    -1,    29,    -1,    69,
     215,    -1,    70,   377,   241,    -1,    70,     3,   241,    -1,
     242,    -1,   241,    95,     3,   242,    -1,   241,    95,   377,
     242,    -1,   158,     3,   243,     3,    22,    -1,    29,   149,
     158,    -1,    29,    -1,   154,   149,   158,    -1,   154,    -1,
     378,    13,    -1,   381,    13,    -1,   383,    13,    -1,   376,
      13,    -1,   373,    13,    -1,   391,    13,    -1,   372,    13,
      -1,   371,    13,    -1,   362,    13,    -1,   335,    13,    -1,
     333,    13,    -1,   264,    13,    -1,   265,    13,    -1,   394,
      13,    -1,   304,    13,    -1,   363,    13,    -1,   370,    13,
      -1,   347,    13,    -1,   325,    13,    -1,   328,    13,    -1,
     324,    13,    -1,   341,    13,    -1,   321,    13,    -1,   344,
      13,    -1,   310,    13,    -1,   311,    13,    -1,   308,    13,
      -1,   307,    13,    -1,   350,    13,    -1,   338,    13,    -1,
     351,    13,    -1,   369,    13,    -1,   352,    13,    -1,   368,
      13,    -1,   367,    13,    -1,   303,    13,    -1,   301,    13,
      -1,   302,    13,    -1,   332,    13,    -1,   366,    13,    -1,
     390,    13,    -1,   364,    13,    -1,   355,    13,    -1,   298,
      13,    -1,   297,    13,    -1,   295,    13,    -1,   293,    13,
      -1,   290,    13,    -1,   285,    13,    -1,   286,    13,    -1,
     287,    13,    -1,   284,    13,    -1,   283,    13,    -1,   268,
      13,    -1,   282,    13,    -1,   277,    13,    -1,   276,    13,
      -1,   275,    13,    -1,   274,    13,    -1,   273,    13,    -1,
     271,    13,    -1,   272,    13,    -1,   270,    13,    -1,   200,
      13,    -1,   201,    13,    -1,   314,    13,    -1,   315,    13,
      -1,   316,    13,    -1,   317,    13,    -1,   318,    13,    -1,
     319,    13,    -1,   261,    13,    -1,   260,    13,    -1,   259,
      13,    -1,   255,    13,    -1,   256,    13,    -1,   254,    13,
      -1,   251,    13,    -1,   191,    13,    -1,   192,    13,    -1,
     193,    13,    -1,   320,    13,    -1,   194,    13,    -1,   195,
      13,    -1,   245,    13,    -1,   246,    13,    -1,   247,    13,
      -1,   249,    13,    -1,   250,    13,    -1,   248,    13,    -1,
     354,    13,    -1,   135,   377,    11,    -1,   136,   377,    11,
      -1,   137,   377,    11,    -1,   140,   377,    11,    -1,   138,
     377,    29,    -1,   139,   377,    42,    -1,   133,    -1,   133,
     252,    -1,   253,    -1,   253,    95,   252,    -1,   377,    29,
      -1,   377,    29,   396,    -1,   131,   377,    29,    -1,   131,
     377,    29,   396,    -1,   130,   377,    11,    -1,   130,   377,
      11,   396,    -1,   132,   257,    -1,   258,    -1,   258,    95,
     257,    -1,   377,    29,    -1,   377,    29,   396,    -1,    35,
     377,    42,    -1,    35,   377,    42,   396,    -1,   129,   377,
      29,    -1,   129,   377,    29,   377,   401,    -1,    36,   262,
      -1,   263,    -1,   262,    95,   263,    -1,   377,   147,   408,
     148,    -1,   377,   147,   408,   148,   396,    -1,    17,   266,
      -1,    18,   266,    -1,   377,   267,    -1,   266,    95,   377,
     267,    -1,   141,   143,   141,    -1,    88,    -1,    88,   269,
      -1,   377,    29,    -1,   269,    95,   377,    29,    -1,   124,
     377,    11,    -1,   124,   377,    11,   396,    -1,   123,   377,
      29,    -1,   122,   377,    29,    -1,   121,   377,    11,    -1,
     121,   377,    11,   396,    -1,   119,   291,    -1,   118,   377,
     147,   408,   148,    -1,   118,   377,   147,   408,   148,   396,
      -1,   117,   408,   148,    -1,   117,   408,   148,   396,    -1,
     116,   377,   281,    -1,   116,   377,   281,   152,   278,    -1,
     279,    -1,   279,   152,   278,    -1,   280,    -1,   397,    -1,
     377,    28,   377,   281,    -1,   154,   149,   158,    -1,   154,
      -1,   115,   377,   142,   160,   142,   153,   154,    -1,   115,
     377,   142,   160,   142,   153,   154,   396,    -1,   114,   377,
      29,    -1,   113,   331,    -1,   110,   288,    -1,   111,   288,
      -1,   112,   288,    -1,   289,    -1,   288,    95,   289,    -1,
     377,    29,    -1,   377,    29,   396,    -1,   109,   291,    -1,
     292,    -1,   291,    95,   292,    -1,   377,   407,   147,   408,
     148,   396,    -1,   377,   147,   408,   148,   396,    -1,   377,
     407,   147,   408,   148,    -1,   377,   147,   408,   148,    -1,
     108,   294,    -1,   377,    29,    -1,   294,    95,   377,    29,
      -1,    97,   296,    -1,   377,    29,    -1,   296,    95,   377,
      29,    -1,   107,   299,    -1,   106,   299,    -1,   300,    -1,
     299,    95,   300,    -1,   377,    34,    -1,   377,    34,   396,
      -1,    92,   377,    29,    -1,    92,   377,    29,   396,    -1,
      93,   377,    29,    -1,    93,   377,    29,   396,    -1,    94,
     377,    29,    -1,    94,   377,    29,   396,    -1,    61,   305,
      -1,   306,    -1,   305,    95,   306,    -1,   331,    -1,   331,
     396,    -1,    99,   309,    -1,    98,   309,    -1,   397,    -1,
     309,   152,   397,    -1,    96,   312,    -1,   134,   312,    -1,
     313,    -1,   312,    95,   313,    -1,   377,   407,    -1,   377,
     407,   399,    -1,   100,   377,    29,    -1,   100,   377,    29,
     396,    -1,   101,   377,    29,    -1,   101,   377,    29,   396,
      -1,   102,   377,    29,    -1,   102,   377,    29,   396,    -1,
     103,   377,    29,    -1,   103,   377,    29,   396,    -1,   104,
     377,    29,    -1,   104,   377,    29,   396,    -1,   105,   377,
      29,    -1,   105,   377,    29,   396,    -1,   170,   309,    -1,
      59,   322,    -1,   323,    -1,   322,    95,   323,    -1,   377,
     407,    -1,   377,   407,   396,    -1,    58,   331,    -1,    58,
     331,   396,    -1,    64,   326,    -1,   327,    -1,   326,    95,
     327,    -1,   331,    -1,   331,   396,    -1,    65,   329,    -1,
     330,    -1,   329,    95,   330,    -1,   331,    -1,   331,   396,
      -1,   377,   407,   147,   408,   148,    -1,   377,   147,   408,
     148,    -1,    53,   377,    29,    -1,    53,   377,    29,   396,
      -1,    52,   334,    -1,   377,   336,    -1,   334,    95,   377,
     336,    -1,    51,   377,   336,    -1,    51,   377,   336,   396,
      -1,   141,    -1,   141,   143,   337,    -1,   377,   141,    -1,
     337,   143,   377,   141,    -1,    72,   339,    -1,   340,    -1,
     339,    95,   340,    -1,   377,    29,    -1,   377,    29,   396,
      -1,    71,   342,    -1,   343,    -1,   342,    95,   343,    -1,
      -1,   377,   407,   147,   408,   148,    -1,   377,   147,   408,
     148,    -1,   377,   408,    -1,    73,   345,    -1,   346,    -1,
     345,    95,   346,    -1,    -1,   377,   407,   147,   408,   148,
      -1,   377,   147,   408,   148,    -1,   377,   405,    -1,    74,
     348,    -1,   377,   349,    -1,   348,   152,   377,   349,    -1,
      29,    -1,    75,   377,    42,    27,    42,    27,    29,    -1,
      76,   377,    42,    -1,    80,   353,    -1,   377,   407,   147,
     408,   148,   396,    -1,   377,   147,   408,   148,   396,    -1,
     377,   405,   396,    -1,   377,   407,   147,   408,   148,    -1,
     377,   147,   408,   148,    -1,   377,   405,    -1,    25,    10,
      -1,    38,   356,    -1,   377,   358,   357,    -1,   377,   358,
      -1,   159,   358,    -1,   357,   159,   358,    -1,   359,   377,
     360,   361,    -1,   359,   377,   360,    -1,   161,   160,   162,
     160,   163,    -1,   154,    27,   149,    27,   158,    -1,   154,
      27,   149,   158,    -1,   154,   149,    27,   158,    -1,   154,
     149,   158,    -1,   154,    -1,   152,   397,    -1,   361,   152,
     397,    -1,    49,   377,    29,    -1,    55,   377,    42,   143,
      42,    -1,    63,   377,   365,    -1,   238,    -1,   365,    27,
     238,    -1,    62,   377,    42,    -1,    62,   377,    42,   143,
      42,    -1,    62,   377,    42,    27,    42,    -1,    62,   377,
      42,   143,    42,    27,    42,    -1,    62,   377,    42,    27,
      42,   143,    42,    -1,    62,   377,    42,   143,    42,    27,
      42,   143,    42,    -1,    37,    -1,    37,   215,    -1,    60,
     215,    -1,    57,   217,    -1,    56,    10,    -1,    54,   377,
      20,    -1,    50,   377,    42,   377,     9,    -1,    48,   374,
      -1,   375,    -1,   375,    95,   374,    -1,   377,   147,   164,
     148,    -1,   377,   147,   164,   148,   396,    -1,    26,   377,
      11,    -1,    -1,    27,    -1,    44,    -1,    44,   379,    -1,
     380,    -1,   380,    95,   379,    -1,   377,    29,   144,    29,
      -1,   377,    29,   144,    29,   396,    -1,    45,    -1,    45,
     382,    -1,   377,    30,    -1,   382,    95,   377,    30,    -1,
      46,    -1,    46,   384,    -1,   385,    -1,   385,    95,   384,
      -1,   377,    29,    -1,   377,    29,   396,    -1,    12,   387,
      -1,   377,    31,   230,    -1,   377,    29,   230,    -1,    14,
     389,    -1,   377,    31,   230,    -1,   377,    29,   230,    -1,
      15,   377,   407,   147,   408,   148,   396,    -1,    15,   377,
     147,   408,   148,   396,    -1,    15,   377,   405,   396,    -1,
      15,   377,   407,   147,   408,   148,    -1,    15,   377,   147,
     408,   148,    -1,    15,   377,   405,    -1,    16,   377,    34,
      -1,    16,   392,    -1,   393,    -1,   392,    95,   393,    -1,
     377,   407,   147,   408,   148,   396,    -1,   377,   147,   408,
     148,   396,    -1,   377,   405,   396,    -1,   377,   407,   147,
     408,   148,    -1,   377,   147,   408,   148,    -1,   377,   405,
      -1,    19,   377,   407,   147,   408,   148,   396,    -1,    19,
     377,   147,   408,   148,   396,    -1,    19,   377,   405,   396,
      -1,    19,   377,   407,   147,   408,   148,    -1,    19,   377,
     147,   408,   148,    -1,    19,   377,   405,    -1,    29,    -1,
      34,    -1,   152,   397,    -1,   396,   152,   397,    -1,    27,
     395,    27,   401,    -1,   395,    27,   401,    -1,    27,   398,
      -1,   398,    -1,   395,   401,    -1,   395,    -1,   152,   400,
      -1,   399,   152,   400,    -1,    27,    29,    27,   401,    -1,
      29,    27,   401,    -1,    27,    29,   401,    -1,    29,   401,
      -1,    27,   402,    -1,   402,    -1,   146,    27,   402,    -1,
     146,   402,    -1,    29,    -1,   154,    -1,    34,    -1,    22,
      -1,    29,   404,    -1,    29,    -1,   146,   402,    -1,   406,
      -1,   155,   410,   411,    -1,    21,   377,    -1,    29,   377,
      -1,    22,   377,    -1,   409,    -1,   155,   410,   411,   413,
     416,    -1,   155,   410,   411,   413,    -1,   155,   410,   411,
     416,    -1,   155,   410,   411,    -1,    -1,    33,    -1,   154,
     412,    -1,    -1,   149,   158,    -1,   414,    -1,   413,   414,
      -1,   145,   415,    -1,   152,   415,    -1,   403,    -1,   150,
     420,   417,    -1,    -1,   418,    -1,   419,    -1,   418,   419,
      -1,   151,   420,    -1,   156,   146,   157,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   366,   366,   373,   382,   388,   399,   402,   403,   405,
     406,   408,   409,   410,   411,   412,   416,   417,   419,   421,
     423,   425,   427,   430,   431,   433,   438,   446,   451,   461,
     464,   469,   476,   479,   484,   491,   495,   501,   507,   512,
     517,   523,   527,   533,   541,   542,   544,   545,   547,   548,
     550,   552,   553,   554,   555,   556,   557,   558,   559,   561,
     576,   588,   598,   607,   616,   626,   641,   653,   663,   672,
     681,   690,   705,   717,   727,   736,   745,   754,   760,   766,
     781,   793,   803,   812,   821,   830,   833,   834,   837,   844,
     856,   859,   865,   876,   879,   884,   891,   895,   901,   904,
     911,   923,   932,   937,   944,   953,   954,   957,   971,   984,
     995,  1007,  1015,  1019,  1033,  1036,  1037,  1039,  1040,  1042,
    1043,  1044,  1045,  1046,  1049,  1050,  1052,  1053,  1054,  1055,
    1057,  1058,  1062,  1070,  1085,  1100,  1105,  1113,  1114,  1117,
    1120,  1121,  1124,  1131,  1143,  1149,  1156,  1167,  1178,  1182,
    1188,  1190,  1195,  1202,  1212,  1219,  1228,  1229,  1232,  1233,
    1234,  1237,  1247,  1254,  1267,  1274,  1291,  1292,  1294,  1296,
    1297,  1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,
    1307,  1309,  1311,  1313,  1314,  1316,  1318,  1320,  1322,  1324,
    1326,  1328,  1330,  1332,  1334,  1335,  1336,  1337,  1339,  1340,
    1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,
    1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,
    1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,
    1371,  1372,  1374,  1376,  1378,  1380,  1382,  1384,  1385,  1386,
    1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,
    1397,  1398,  1399,  1400,  1401,  1402,  1404,  1407,  1412,  1417,
    1422,  1427,  1432,  1437,  1440,  1443,  1444,  1447,  1456,  1469,
    1474,  1484,  1489,  1501,  1504,  1505,  1508,  1515,  1527,  1531,
    1540,  1544,  1551,  1566,  1572,  1580,  1589,  1605,  1620,  1635,
    1640,  1648,  1658,  1663,  1679,  1684,  1692,  1697,  1707,  1713,
    1719,  1724,  1734,  1749,  1757,  1769,  1777,  1789,  1794,  1804,
    1805,  1809,  1810,  1814,  1826,  1832,  1840,  1850,  1864,  1870,
    1877,  1892,  1907,  1922,  1927,  1935,  1941,  1951,  1966,  1971,
    1979,  1993,  2006,  2017,  2030,  2045,  2050,  2058,  2073,  2078,
    2086,  2101,  2116,  2121,  2129,  2133,  2141,  2146,  2156,  2161,
    2171,  2176,  2186,  2201,  2206,  2214,  2220,  2231,  2254,  2263,
    2264,  2267,  2282,  2296,  2301,  2309,  2315,  2327,  2332,  2342,
    2347,  2357,  2362,  2372,  2377,  2387,  2392,  2402,  2407,  2417,
    2425,  2440,  2445,  2452,  2458,  2470,  2475,  2485,  2500,  2505,
    2513,  2519,  2530,  2545,  2550,  2558,  2564,  2575,  2584,  2595,
    2600,  2611,  2626,  2631,  2640,  2645,  2655,  2661,  2670,  2675,
    2683,  2686,  2687,  2690,  2696,  2707,  2710,  2711,  2713,  2714,
    2725,  2735,  2745,  2748,  2749,  2751,  2752,  2763,  2773,  2783,
    2786,  2787,  2790,  2797,  2805,  2810,  2813,  2827,  2839,  2849,
    2858,  2867,  2876,  2884,  2887,  2888,  2891,  2892,  2896,  2903,
    2909,  2918,  2923,  2928,  2933,  2938,  2945,  2946,  2949,  2955,
    2961,  2964,  2969,  2976,  2981,  2986,  2992,  2998,  3004,  3013,
    3016,  3025,  3034,  3043,  3049,  3055,  3062,  3065,  3066,  3069,
    3076,  3088,  3094,  3095,  3098,  3101,  3104,  3105,  3108,  3128,
    3154,  3158,  3161,  3166,  3173,  3176,  3179,  3180,  3183,  3191,
    3206,  3209,  3219,  3235,  3238,  3248,  3265,  3278,  3289,  3299,
    3308,  3316,  3325,  3329,  3332,  3333,  3336,  3352,  3367,  3380,
    3393,  3405,  3417,  3432,  3444,  3454,  3463,  3472,  3481,  3482,
    3485,  3486,  3489,  3495,  3501,  3502,  3507,  3514,  3521,  3522,
    3525,  3530,  3535,  3540,  3545,  3550,  3559,  3560,  3563,  3564,
    3565,  3566,  3569,  3575,  3583,  3586,  3589,  3604,  3605,  3606,
    3609,  3611,  3622,  3634,  3646,  3662,  3663,  3679,  3685,  3686,
    3689,  3690,  3693,  3694,  3697,  3700,  3702,  3704,  3707,  3708,
    3711,  3714
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
  "RECVINFOLWSCOLON", "PLASTACCESSNETLWSCOLON", "CONVERSATIONIDLWSCOLON",
  "CONTRIBUTIONIDLWSCOLON", "INREPLYTOCONTIDLWSCOLON",
  "MESSAGEEXPIRESLWSCOLON", "MESSAGEUIDLWSCOLON",
  "SESSIONREPLACESLWSCOLON", "_TOKEN_NO_DOT", "_HEXTOKEN", "_DOT",
  "_SLASH", "SEMICOLON", "EQUALSIGN", "_ABO", "_ABC", "_COLON",
  "QUESTMARK", "AMPERSANT", "SOMELWS_SEMICOLON", "_AT", "_HOST", "SCHEME",
  "_HNAME", "_HVALUE", "_PORT", "SOMELWS_COMMA_SOMELWS",
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
  "convid_header", "contribid_header", "inreplyto_contribid_header",
  "sessionreplaces_header", "msgexpires_header", "msguid_header",
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
  "token_star", "semicolon_fromparam_1toN", "from_param",
  "from_param_withoutlws", "semicolon_paniparam_1toN", "pani_param",
  "equals_token_host_qtdstr", "token_or_host_or_quotedstring",
  "generic_param_withoutlws", "equals_token_host_qtdstr_withoutlws",
  "addr_spec_withnoparam", "SIP_URL_withnoparam", "display_name",
  "addr_spec", "SIP_URL", "userinfo_at_0to1", "hostport",
  "colon_port_0to1", "semicolon_urlparam_1toN", "semicolon_urlparam",
  "url_parameter", "headers", "amp_header_0toN", "amp_header_1toN",
  "amp_header", "header", 0
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
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   173,   174,   174,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   179,   179,   179,   180,   180,   180,   180,
     180,   180,   180,   181,   181,   182,   182,   183,   183,   184,
     185,   185,   186,   187,   187,   188,   189,   190,   191,   192,
     193,   194,   194,   195,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   197,
     197,   197,   197,   197,   197,   198,   198,   198,   198,   198,
     198,   199,   199,   199,   199,   199,   199,   200,   201,   202,
     202,   202,   202,   202,   202,   203,   204,   204,   205,   205,
     206,   207,   207,   208,   209,   209,   210,   211,   212,   213,
     213,   214,   215,   215,   216,   217,   217,   218,   218,   218,
     218,   219,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   224,   224,   224,   225,   225,   225,   225,   225,   225,
     225,   225,   226,   227,   228,   229,   229,   230,   230,   231,
     232,   232,   233,   233,   234,   234,   234,   234,   235,   235,
     236,   237,   237,   238,   238,   239,   240,   240,   241,   241,
     241,   242,   243,   243,   243,   243,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   245,   246,   247,
     248,   249,   250,   251,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   256,   257,   257,   258,   258,   259,   259,
     260,   260,   261,   262,   262,   263,   263,   264,   265,   266,
     266,   267,   268,   268,   269,   269,   270,   270,   271,   272,
     273,   273,   274,   275,   275,   276,   276,   277,   277,   278,
     278,   279,   279,   280,   281,   281,   282,   282,   283,   284,
     285,   286,   287,   288,   288,   289,   289,   290,   291,   291,
     292,   292,   292,   292,   293,   294,   294,   295,   296,   296,
     297,   298,   299,   299,   300,   300,   301,   301,   302,   302,
     303,   303,   304,   305,   305,   306,   306,   307,   308,   309,
     309,   310,   311,   312,   312,   313,   313,   314,   314,   315,
     315,   316,   316,   317,   317,   318,   318,   319,   319,   320,
     321,   322,   322,   323,   323,   324,   324,   325,   326,   326,
     327,   327,   328,   329,   329,   330,   330,   331,   331,   332,
     332,   333,   334,   334,   335,   335,   336,   336,   337,   337,
     338,   339,   339,   340,   340,   341,   342,   342,   343,   343,
     343,   343,   344,   345,   345,   346,   346,   346,   346,   347,
     348,   348,   349,   350,   351,   352,   353,   353,   353,   353,
     353,   353,   354,   355,   356,   356,   357,   357,   358,   358,
     359,   360,   360,   360,   360,   360,   361,   361,   362,   363,
     364,   365,   365,   366,   366,   366,   366,   366,   366,   367,
     367,   368,   369,   370,   371,   372,   373,   374,   374,   375,
     375,   376,   377,   377,   378,   378,   379,   379,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   385,   385,
     386,   387,   387,   388,   389,   389,   390,   390,   390,   390,
     390,   390,   391,   391,   392,   392,   393,   393,   393,   393,
     393,   393,   394,   394,   394,   394,   394,   394,   395,   395,
     396,   396,   397,   397,   397,   397,   398,   398,   399,   399,
     400,   400,   400,   400,   400,   400,   401,   401,   402,   402,
     402,   402,   403,   403,   404,   405,   406,   407,   407,   407,
     408,   409,   409,   409,   409,   410,   410,   411,   412,   412,
     413,   413,   414,   414,   415,   416,   417,   417,   418,   418,
     419,   420
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
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     1,     2,     1,     3,     2,     3,     3,
       4,     3,     4,     2,     1,     3,     2,     3,     3,     4,
       3,     5,     2,     1,     3,     4,     5,     2,     2,     2,
       4,     3,     1,     2,     2,     4,     3,     4,     3,     3,
       3,     4,     2,     5,     6,     3,     4,     3,     5,     1,
       3,     1,     1,     4,     3,     1,     7,     8,     3,     2,
       2,     2,     2,     1,     3,     2,     3,     2,     1,     3,
       6,     5,     5,     4,     2,     2,     4,     2,     2,     4,
       2,     2,     1,     3,     2,     3,     3,     4,     3,     4,
       3,     4,     2,     1,     3,     1,     2,     2,     2,     1,
       3,     2,     2,     1,     3,     2,     3,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,     3,     4,     2,
       2,     1,     3,     2,     3,     2,     3,     2,     1,     3,
       1,     2,     2,     1,     3,     1,     2,     5,     4,     3,
       4,     2,     2,     4,     3,     4,     1,     3,     2,     4,
       2,     1,     3,     2,     3,     2,     1,     3,     0,     5,
       4,     2,     2,     1,     3,     0,     5,     4,     2,     2,
       2,     4,     1,     7,     3,     2,     6,     5,     3,     5,
       4,     2,     2,     2,     3,     2,     2,     3,     4,     3,
       5,     5,     4,     4,     3,     1,     2,     3,     3,     5,
       3,     1,     3,     3,     5,     5,     7,     7,     9,     1,
       2,     2,     2,     2,     3,     5,     2,     1,     3,     4,
       5,     3,     0,     1,     1,     2,     1,     3,     4,     5,
       1,     2,     2,     4,     1,     2,     1,     3,     2,     3,
       2,     3,     3,     2,     3,     3,     7,     6,     4,     6,
       5,     3,     3,     2,     1,     3,     6,     5,     3,     5,
       4,     2,     7,     6,     4,     6,     5,     3,     1,     1,
       2,     3,     4,     3,     2,     1,     2,     1,     2,     3,
       4,     3,     3,     2,     2,     1,     3,     2,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     2,     2,     2,
       1,     5,     4,     4,     3,     0,     1,     2,     0,     2,
       1,     2,     2,     2,     1,     3,     0,     1,     1,     2,
       2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       6,     0,     0,     1,     0,   482,   482,   482,   482,   482,
     482,   482,     0,   482,   482,   482,   469,   482,     0,   482,
     482,   482,   482,   482,   482,     0,   482,   482,   482,   482,
     482,   482,   482,   482,     0,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,     0,   482,   482,   482,    23,   292,   482,   482,   482,
     482,   482,   482,   482,   482,     0,     0,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,     0,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     263,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,     0,   482,   482,     0,     0,     9,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   120,     0,     0,   117,
     121,   119,   114,     0,   565,     0,    15,   483,     0,   500,
       0,   503,     0,     0,   513,   514,   287,     0,   288,     0,
     442,     0,     0,   282,   283,     0,   470,     0,   443,     0,
     111,    29,     0,     0,     0,     0,   485,   486,     0,   491,
       0,   495,   496,     0,   528,   529,   132,   537,   137,   535,
     476,   477,     0,     0,     0,     0,   401,     0,     0,     0,
       0,   473,   472,   105,     0,   385,     0,   380,   381,     0,
     471,   352,   353,   355,     0,     0,   387,   388,   390,   392,
     393,   395,   139,   140,     0,     0,     0,   155,     0,     0,
     415,   416,     0,   410,   411,     0,   422,   423,     0,   429,
       0,     0,     0,    85,    86,     0,    90,     0,     0,   435,
       0,     0,     0,    97,    98,     0,   101,   104,    24,     0,
     293,     0,     0,    32,     0,     0,     0,     0,     0,   361,
     363,     0,   337,     0,   358,   359,   357,     0,     0,     0,
       0,     0,     0,   341,   342,     0,   340,   334,     0,   327,
     328,     0,   320,   323,     0,   321,   322,   319,     0,     0,
       0,     0,   560,     0,   302,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,   274,     0,
     264,   265,     0,   362,     0,     0,     0,     0,     0,     0,
     133,     0,   134,     0,     0,     0,   379,     0,     0,     4,
      10,    16,    17,    18,    19,    20,    21,    22,   244,   245,
     246,   248,   249,    56,    55,    54,   229,   230,    53,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   129,    57,
      58,   124,   126,   127,   128,   130,   250,   251,   252,   255,
     253,   254,   243,   242,   240,   241,   239,   238,   237,   177,
     178,   219,   228,   226,   227,   225,   224,   223,   222,   221,
     220,   218,   217,   214,   215,   216,   213,   212,   211,   210,
     209,   202,   203,   201,   180,   193,   192,   190,   191,   231,
     232,   233,   234,   235,   236,   247,   188,   186,   184,   185,
     204,   176,   175,   195,   187,   189,   183,   194,   196,   198,
     256,   208,   174,   181,   207,   205,   200,   199,   197,   182,
     173,   172,   170,   169,   166,   167,   168,   131,   125,   206,
     171,   179,   123,   112,   118,     0,   566,     0,     0,     0,
       0,     0,     0,   482,   482,   482,     0,   565,   511,   555,
       0,   512,     0,   521,     0,   482,   482,     0,   289,     0,
     527,     0,   481,   278,   482,     0,   482,   102,     0,   445,
     482,   482,    30,    35,    36,     0,   482,   492,   482,   498,
     482,   537,   534,     0,     0,   536,     0,   482,     0,   458,
     482,   406,   404,   482,   402,   399,   474,     0,   482,     0,
       0,     0,   386,     0,     0,   482,   383,   482,   356,   463,
       0,   154,   461,   460,   482,   391,   482,   396,   482,     0,
     144,   150,   151,     0,   157,   158,   156,   482,     0,     0,
     421,   482,   413,   482,     0,   428,     0,   482,   432,   430,
       0,   434,   482,     0,     0,     0,    94,    93,     0,   441,
       0,    96,     0,    84,     0,     0,     0,   482,    25,   482,
     294,    27,   482,    33,    37,   346,   348,   350,   482,   365,
     482,   338,     0,   367,   369,   371,   373,   375,   377,   482,
     344,   482,   335,   482,     0,     0,   482,   325,   318,     0,
     315,   307,   305,     0,     0,    64,     0,   300,   299,   298,
     296,     0,    76,     0,     0,    70,     0,    77,    78,   280,
     271,   269,   482,   276,   482,   267,   257,   258,   259,   261,
     262,   260,   482,   135,    38,    39,    40,    43,    41,     0,
     568,   564,     0,   502,   501,   505,   504,   557,   559,   558,
       0,     0,   508,     0,     0,   518,     0,     0,   515,     0,
       0,     0,   524,     0,   279,   284,     0,     0,     0,     0,
     444,     0,     0,     0,   487,     0,   499,   497,     0,   533,
     551,     0,   548,   550,   549,   547,   138,   478,     0,     0,
     482,   405,     0,   400,     0,   106,     0,     0,   530,     0,
       0,     0,   382,   384,   354,     0,     0,   148,     0,     0,
     389,   394,   141,     0,     0,   147,     0,     0,   482,   417,
       0,     0,   412,   414,   424,     0,     0,     0,     0,    87,
       0,    92,    91,   482,     0,   438,     0,     0,    81,     0,
     100,    99,     0,     0,    28,     0,   347,   349,   351,   364,
       0,   366,     0,   360,   368,   370,   372,   374,   376,   378,
     343,   345,     0,   329,     0,     0,   324,   326,     0,     0,
     482,   306,     0,     0,    61,     0,   301,   297,     0,    73,
       0,     0,    67,     0,     0,   272,   270,   275,   277,   266,
     268,     0,     0,   113,     0,   567,     0,     0,     0,   562,
     570,   563,     5,   510,   556,     0,   520,     0,   290,   291,
     526,     0,   285,   103,     0,   446,     0,   455,   449,    31,
     488,   493,   532,   546,   479,   475,   407,     0,   403,   459,
     110,     0,   531,   398,     0,   465,   464,   153,   149,   462,
     142,     0,   152,   163,   165,     0,     0,     0,   420,     0,
     427,     0,   431,     0,    88,     0,   440,     0,    83,     0,
      26,   295,    34,     0,   548,   538,   545,     0,   339,   336,
     333,     0,     0,   314,   483,   308,   309,   311,     0,   312,
     303,    63,     0,    75,     0,    69,     0,   281,   136,    42,
     569,   553,   574,   572,     0,   576,   573,   571,   561,   507,
     509,   517,   519,   523,   525,   286,     0,   447,     0,     0,
       0,   448,   489,   480,   482,   408,   108,   109,   397,     0,
       0,   143,     0,     0,     0,     0,   159,   160,   419,   426,
       0,    89,    95,   437,   439,    80,    82,   548,   544,     0,
     543,   539,   331,   332,     0,   482,   482,   304,    60,    62,
      72,    74,    66,    68,     0,   552,     0,     0,   575,   577,
     578,   506,   516,   522,   450,     0,     0,   454,   456,     0,
       0,   107,   467,   466,   145,   162,   164,   161,   433,   436,
      79,     0,   542,   541,   330,   316,   310,     0,    59,    71,
      65,   554,   581,   580,   579,     0,   452,   453,   457,   409,
       0,   146,   540,   317,   313,   451,   468
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,   136,   137,   138,   139,   140,   388,
     141,   142,   301,   143,   393,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   373,   374,   160,   376,   161,   707,   162,   163,   164,
     384,   165,   296,   166,   332,   333,   167,     7,     8,   267,
     268,   269,   168,   169,   170,   171,   460,   316,   172,   352,
     353,   173,   858,   174,   681,   672,   175,   176,   684,   685,
     995,   177,   178,   179,   180,   181,   182,   183,   184,   450,
     451,   185,   186,   187,   447,   448,   188,   189,   190,   293,
     294,   191,   192,   286,   618,   193,   390,   194,   195,   196,
     197,   198,   199,   200,   201,  1025,  1026,  1027,   751,   202,
     203,   204,   205,   206,   207,   422,   423,   208,   419,   420,
     209,   417,   210,   402,   211,   212,   413,   414,   213,   214,
     215,   216,   341,   342,   217,   218,   404,   219,   220,   399,
     400,   221,   222,   223,   224,   225,   226,   227,   228,   337,
     338,   229,   230,   346,   347,   231,   349,   350,   343,   232,
     233,   326,   234,   652,   976,   235,   363,   364,   236,   360,
     361,   237,   366,   367,   238,   369,   699,   239,   240,   241,
     379,   242,   243,   298,   820,   629,   630,   968,  1061,   244,
     245,   246,   673,   247,   248,   249,   250,   251,   252,   253,
     254,   320,   321,   255,   336,   256,   306,   307,   257,   309,
     258,   311,   312,   259,   279,   260,   281,   261,   262,   284,
     285,   263,   317,   662,   318,   319,   901,  1015,   645,  1016,
    1042,  1105,   613,   609,   614,   431,   432,   597,   791,   945,
     949,   950,  1043,   951,  1108,  1109,  1110,  1045
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -700
static const yytype_int16 yypact[] =
{
     243,   233,   152,   256,   185,  -700,  1071,  -700,  1243,   250,
    -700,   272,   133,  -700,   298,   300,   300,   300,   300,   300,
     300,   300,   282,   300,   300,   300,   188,   300,   318,   300,
     300,   300,   215,   220,   221,   273,   300,   300,   300,   300,
     300,   300,   300,   300,   323,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   198,   208,
     300,   210,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   332,   300,   300,   300,   188,   188,   300,   300,   300,
     300,   300,   300,   300,   300,   273,   273,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   133,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     188,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   273,   300,   300,   343,  1415,  -700,  -700,
     335,   337,   338,   339,   340,   341,   342,   344,   345,   346,
     347,   348,  -700,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,  -700,   364,
     365,   366,   367,   368,   370,   371,   372,  -700,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   387,   388,   389,   390,   393,   394,   395,   396,   397,
     399,   400,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   431,
     432,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   459,   461,   462,   463,   464,   466,
     468,   469,   471,   472,   473,  -700,  -700,   483,  1587,  -700,
    -700,  -700,  -700,   485,   458,   486,  -700,  -700,   242,  -700,
     279,  -700,   115,   109,   261,  -700,   398,   369,   398,   119,
    -700,   479,   460,   401,  -700,   386,   444,   465,  -700,   331,
    -700,   470,   467,   477,   475,   474,  -700,   476,   478,   480,
     482,  -700,   481,   148,  -700,  -700,  -700,   123,   484,  -700,
    -700,   487,   430,   491,   488,   391,   489,   391,   492,   493,
     494,  -700,   490,  -700,   125,   392,   168,   496,  -700,   291,
     444,   497,  -700,   392,   495,   265,   498,  -700,   392,   499,
    -700,   392,  -700,   500,   433,   511,   265,   444,   501,   501,
     502,  -700,   131,   503,  -700,   513,   504,  -700,   135,   417,
     516,   505,   507,  -700,   508,   506,  -700,   309,   512,  -700,
     140,   510,   144,  -700,  -700,   312,   444,   490,   509,   521,
     515,   525,   526,   517,   527,   529,   530,   531,   534,   519,
    -700,   291,   522,   538,   514,  -700,   514,   539,   541,   543,
     544,   545,   549,   523,  -700,   547,   523,   524,   554,   532,
    -700,   174,   533,  -700,   557,   533,   533,  -700,   558,   518,
     520,   535,  -700,   528,   532,   146,   585,   573,   576,   595,
     149,   159,   578,   579,   591,   611,   597,  -700,   536,   600,
    -700,   542,   601,   519,   613,   622,   623,   607,   598,   628,
     546,   615,   546,   616,   617,   618,   514,   537,   619,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,   636,  -700,   540,   642,   273,
     273,   273,   273,   300,   300,   300,   133,   458,   392,  -700,
     548,  -700,   133,   392,   550,   300,   300,   553,  -700,   133,
     392,   551,  -700,   392,   300,   133,   300,  -700,   552,   555,
     300,   300,  -700,  -700,  -700,   556,   300,  -700,   300,   392,
     300,   178,  -700,   559,   165,  -700,   273,   300,   334,  -700,
     300,   560,   392,   300,  -700,   392,  -700,   563,   300,   133,
     561,   273,   564,   133,   562,   300,   392,   300,   564,   122,
     620,  -700,  -700,   624,   300,   564,   300,   564,   300,   565,
     108,   627,  -700,   652,   566,  -700,   566,   208,   133,   570,
    -700,   300,   392,   210,   133,  -700,   572,   300,  -700,  -700,
     629,  -700,   300,   568,   273,   273,  -700,   567,   133,   392,
     574,  -700,   133,   392,   575,   273,   273,   300,  -700,   300,
    -700,   392,   300,  -700,  -700,   392,   392,   392,   300,   571,
     300,  -700,   273,   392,   392,   392,   392,   392,   392,   300,
     392,   300,  -700,   300,   133,   580,   300,   392,  -700,   577,
     581,   582,   392,   133,   133,   392,   586,   392,  -700,  -700,
     392,   133,   392,   588,   133,   392,   589,  -700,  -700,   180,
     392,   392,   300,   392,   300,   392,  -700,  -700,  -700,  -700,
    -700,  -700,   300,  -700,  -700,  -700,  -700,  -700,   587,   644,
     592,   105,   645,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
     590,   540,   564,   133,   594,   564,   133,   162,  -700,   369,
     569,   602,   564,   133,   564,  -700,   604,   635,   583,   331,
     584,   606,   637,   639,  -700,   640,   564,  -700,   559,  -700,
    -700,   129,  -700,  -700,  -700,  -700,  -700,  -700,   608,   660,
     300,   564,   391,   564,   631,  -700,   610,   133,  -700,   273,
     621,   133,  -700,   564,  -700,   638,   643,  -700,   213,   265,
    -700,  -700,  -700,   625,   647,   564,   265,    99,   211,  -700,
     626,   133,  -700,   564,  -700,   630,   133,   516,   646,  -700,
     632,  -700,  -700,   300,   634,   564,   133,   641,   564,   133,
    -700,  -700,   648,   657,   564,   651,   564,   564,   564,  -700,
     182,   612,   661,  -700,   564,   564,   564,   564,   564,   564,
    -700,   564,   662,  -700,   650,   133,  -700,   564,   633,   605,
     310,   564,   655,   656,   564,   133,   564,   564,   659,   564,
     133,   664,   564,   133,   559,   564,   564,  -700,   564,  -700,
     564,   663,   670,  -700,   614,  -700,   672,   649,   672,   105,
    -700,  -700,  -700,   392,  -700,   665,   392,   666,  -700,  -700,
     392,   667,   392,  -700,   658,  -700,   331,   118,   668,  -700,
     392,  -700,  -700,  -700,   392,  -700,   653,   669,  -700,  -700,
     392,   671,  -700,  -700,   675,   673,   684,  -700,  -700,  -700,
     392,   620,  -700,   678,   679,   686,   501,   501,  -700,   681,
    -700,   682,  -700,   693,   392,   714,   392,   685,   392,   687,
    -700,  -700,  -700,   164,   183,  -700,  -700,   182,  -700,  -700,
     392,   688,   689,  -700,   148,  -700,   680,  -700,   738,  -700,
     392,   392,   690,   392,   691,   392,   692,  -700,  -700,  -700,
    -700,   654,  -700,  -700,   698,   683,  -700,  -700,  -700,   564,
     392,   564,   392,   564,   392,   564,   336,  -700,   697,    96,
     273,   695,   564,   564,   300,  -700,   564,   392,  -700,   728,
     734,   564,   217,   694,   696,   755,  -700,  -700,  -700,  -700,
     750,   564,  -700,   564,   392,   564,   392,   186,  -700,   559,
    -700,  -700,   564,   392,   702,   310,   300,   564,   564,   392,
     564,   392,   564,   392,   129,  -700,   700,   649,  -700,   683,
    -700,   564,   564,   564,  -700,   100,   701,  -700,  -700,   273,
     676,   564,  -700,   705,   392,  -700,  -700,  -700,  -700,   564,
     564,   559,  -700,  -700,   564,   392,  -700,   520,   564,   564,
     564,  -700,  -700,  -700,  -700,   703,  -700,  -700,  -700,  -700,
     741,   564,  -700,   564,  -700,  -700,  -700
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -700,  -700,  -700,  -700,  -700,  -700,   712,    48,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,    62,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -201,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,   170,  -700,   710,  -152,  -700,  -700,  -700,  -700,
    -700,   239,    63,  -700,  -700,  -700,   721,  -370,  -700,  -169,
    -700,  -700,  -477,  -700,  -700,  -325,  -700,  -700,   156,  -699,
    -700,    81,  -700,  -700,  -700,  -700,  -700,  -700,  -700,   -81,
    -700,  -700,  -700,  -700,    13,  -700,  -700,  -700,  -700,  -700,
     163,  -700,  -700,   766,   -21,  -700,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -305,  -700,  -700,  -346,  -700,
    -700,  -700,  -700,  -700,  -700,   224,    46,  -700,   754,    50,
    -700,  -700,  -700,  -700,  -700,  -700,   715,    55,  -700,  -700,
    -700,  -700,  -700,   141,  -700,  -700,    73,  -700,  -700,   742,
     134,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
     199,  -700,  -700,  -700,   191,  -700,  -700,   190,    72,  -700,
    -700,  -700,  -700,  -307,  -700,  -700,  -700,   176,  -700,  -700,
     184,  -700,  -700,   177,  -700,  -700,    -8,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -698,  -700,  -700,  -700,  -700,
    -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
    -700,   226,  -700,  -700,   -15,  -700,   238,  -700,  -700,  -700,
    -700,   236,  -700,  -700,  -700,  -700,  -700,  -700,  -700,  -700,
     263,  -700,  -306,  -209,   -48,  -284,  -700,  -138,  -609,  -631,
    -700,  -700,  -156,  -700,  -160,   143,   868,   274,    82,  -700,
    -700,   -67,   -63,   -61,  -700,  -700,  -223,  -218
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -495
static const yytype_int16 yytable[] =
{
     278,   280,   282,   283,   287,   287,   289,   641,   291,   292,
     295,   297,   299,   835,   302,   303,   304,   305,   308,   310,
     654,   322,   323,   324,   325,   327,   328,   329,   330,   642,
     334,   682,   339,   297,   829,   344,   345,   405,   405,   354,
     355,   356,   297,   359,   362,   365,   368,   370,   371,   372,
     375,   377,   378,   380,   381,   382,   265,   385,   297,   334,
     389,   391,   392,   394,   395,   396,   397,   398,   401,   403,
     266,   270,   407,   408,   409,   410,   411,   412,   415,   415,
     418,   421,   424,   424,   424,   405,   428,   429,   430,   271,
     433,   421,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   449,   452,   401,   454,   455,   456,
     457,   458,   459,   461,   461,   463,   464,   465,   335,   467,
     468,   965,   610,  1116,   348,   351,   608,  1145,   993,   621,
     603,   604,  -482,   620,   668,   277,   603,   604,   605,   675,
     603,   604,   677,   611,   605,  1058,   603,   604,   605,   855,
     643,   830,   603,   604,   605,    11,   603,   604,   832,   406,
     605,   603,   604,   833,   605,   603,   604,   603,   604,   605,
     603,   604,   427,   605,   660,   605,   664,   314,   605,   666,
     603,   604,   315,   603,   604,    13,   830,   830,   605,   603,
     604,   605,   831,  1087,   832,   603,   604,   605,   833,   833,
     973,   358,   689,   605,   830,   828,   466,   277,   696,  1013,
    1089,  1014,   695,  1131,   996,   277,   833,  -482,   340,   972,
     710,  -418,   714,  -425,   709,   277,   713,   357,  -484,   793,
     794,   795,   796,  -490,  -494,   277,   987,   277,   277,     9,
    1124,   729,   277,   386,     1,   988,    10,   277,   277,   988,
     946,     2,     3,   994,  1117,   947,   612,   948,  1146,    12,
     661,   745,   606,   272,   607,   856,   619,  1059,  1057,   644,
     607,   599,   659,   600,   607,   756,   836,   273,   688,   755,
     763,   766,   694,   834,   762,   765,   274,   708,   274,   670,
     607,   712,   290,   754,   671,   607,   761,  1076,  1077,   607,
     313,   607,   314,  -418,   607,  -425,   764,   315,   601,   612,
     602,   276,   603,   604,   607,   663,   265,   607,   834,   834,
     605,   744,   425,   426,   644,  1037,  -482,   277,   300,   644,
     266,   270,   644,   331,   881,   882,   834,  1024,   704,   314,
     705,   715,   383,   716,   315,   890,   891,   469,   471,   271,
     472,   473,   474,   475,   476,   477,   615,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,  1088,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   802,
     519,   520,   521,   522,   805,  1090,   523,   524,   525,   526,
     527,   812,   528,   529,   814,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     826,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   841,   557,   558,   843,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   853,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   865,   582,  1141,   583,   584,   585,   586,  1132,   587,
    1133,   588,   589,   873,   590,   591,   592,   593,   595,   598,
     622,   596,   628,   616,   627,   634,   624,   632,   838,  1114,
     885,   879,   623,   635,   888,   690,   845,   594,   637,   862,
     617,   639,   894,   656,  1072,   686,   896,   897,   898,   633,
     649,   655,  1152,   706,   904,   905,   906,   907,   908,   909,
     650,   911,   651,   625,   989,   978,   657,   669,   917,   626,
     680,   992,   692,   921,   661,   698,   924,   700,   926,   701,
     718,   927,   711,   929,   720,   721,   932,   723,   724,   725,
     726,   935,   936,   727,   938,   631,   940,   731,   733,   697,
     734,   636,   735,   736,   737,   638,   640,   648,   738,   646,
     679,   740,   647,   742,   653,   658,   747,   748,   797,   798,
     799,   665,   667,   674,   676,   678,   757,   687,   691,   693,
     807,   809,   758,   702,   717,   759,   760,   767,   768,   295,
     719,   817,   722,   848,   728,   821,   822,   730,   739,   741,
     769,   305,   770,   825,   776,   310,   771,   743,   746,   773,
     775,   772,   322,   777,   778,   839,   779,   774,   842,   781,
     780,   782,   789,   334,   783,   784,   785,   786,   788,   792,
     339,   859,   857,   703,   866,   867,   878,   943,   952,   683,
     749,   868,   883,   354,   963,   864,   732,   969,   970,   975,
     971,   991,   362,   979,   750,   753,   365,  1010,   368,   787,
     985,  1012,   877,   752,   903,   986,  1011,   375,  1003,  1075,
    1018,  1019,  1038,   939,   790,   803,   810,   806,   813,  1039,
     823,  1041,   892,   840,   893,   644,   844,   895,   847,   851,
     959,  1070,   818,   401,   819,   902,   849,   871,   641,   876,
    1080,   886,   889,   900,   415,  1082,   912,   915,   421,   863,
     919,   424,   880,   925,   920,   930,   933,   918,   953,   942,
     642,   944,   956,   966,  1049,   964,   348,  1051,   351,   800,
     960,  1053,   962,  1055,   934,   804,   974,   449,   980,   452,
     967,  1062,   811,  1023,  1017,  1063,  1096,   941,   816,   983,
    1122,  1066,  1040,   990,   998,  1022,  1123,  1127,  1000,  1128,
    1004,  1071,  1006,  1156,   387,   937,   288,   815,   958,  1008,
    1136,  1154,   916,   913,   910,  1081,  1064,  1083,  1020,  1085,
    1104,   982,   846,  1030,  1031,  1044,   850,  1033,   854,   416,
    1065,  1092,  1035,  1050,  1052,  1054,  1069,  1149,  1056,  1067,
    1060,  1097,  1098,  1068,  1100,   977,  1102,  1073,  1074,  1078,
    1079,   870,  1095,  1084,  1107,  1086,  1093,   875,  1099,  1101,
    1103,  1111,  1094,  1112,  1106,  1113,  1115,  1119,  1150,   470,
     462,   884,  1125,   997,  1126,   887,  1135,  1142,  1121,  1147,
     434,  1155,   899,   453,   852,   860,   861,   872,  1005,  1002,
     874,   869,  1029,   837,   824,  1129,   827,  1130,   808,  1091,
     275,   801,  1047,   954,  1134,  1046,  1144,   914,  1048,  1143,
    1138,     0,  1139,     0,  1140,     0,   922,   923,     0,     0,
       0,     0,     0,     0,   928,  1028,     0,   931,     0,     0,
       0,     0,     0,     0,     0,  1151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   955,     0,     0,   957,
       0,     0,     0,     0,     0,     0,   961,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     981,     0,     0,     0,   984,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1118,     0,   999,     0,     0,     0,     0,  1001,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1007,
       0,     0,  1009,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1029,     0,  1120,
       0,     0,     0,     0,     0,     0,     0,     0,  1021,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1032,     0,
       0,  1148,    14,  1034,     0,    -7,  1036,     0,     0,     0,
    1028,  1137,     0,    15,     0,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   264,     0,     0,  -115,     0,     0,
       0,     0,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   134,   135,    14,     0,     0,    -8,
       0,     0,     0,     0,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,    28,    29,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   264,     0,
       0,  -116,     0,     0,     0,     0,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     0,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-700))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    16,    17,    18,    19,    20,    21,   313,    23,    24,
      25,    26,    27,   644,    29,    30,    31,    32,    33,    34,
     327,    36,    37,    38,    39,    40,    41,    42,    43,   313,
      45,   356,    47,    48,   643,    50,    51,    85,    86,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     8,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       8,     8,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   133,   101,   102,   103,     8,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    46,   134,
     135,   819,   282,    27,    52,    53,   282,    27,    29,   289,
      21,    22,    24,   289,   343,    27,    21,    22,    29,   348,
      21,    22,   351,    34,    29,    27,    21,    22,    29,    27,
      27,    22,    21,    22,    29,     3,    21,    22,    29,    86,
      29,    21,    22,    34,    29,    21,    22,    21,    22,    29,
      21,    22,   100,    29,   334,    29,   336,    29,    29,   339,
      21,    22,    34,    21,    22,     0,    22,    22,    29,    21,
      22,    29,    27,    29,    29,    21,    22,    29,    34,    34,
     831,     3,   362,    29,    22,    27,   133,    27,   368,    27,
      27,    29,   368,    27,     3,    27,    34,    29,    48,   828,
     380,    13,   382,    13,   380,    27,   382,    57,    13,   599,
     600,   601,   602,    13,    13,    27,    23,    27,    27,     6,
      23,   401,    27,    73,     1,    32,    13,    27,    27,    32,
     145,     8,     9,   154,   158,   150,   147,   152,   158,     3,
     152,   421,   147,    13,   155,   143,   147,   149,   966,   146,
     155,    29,   147,    31,   155,   435,   646,     5,   147,   435,
     440,   441,   147,   154,   440,   441,   155,   147,   155,    24,
     155,   147,    10,   147,    29,   155,   147,   996,   997,   155,
      27,   155,    29,    95,   155,    95,   147,    34,    29,   147,
      31,    13,    21,    22,   155,   147,   268,   155,   154,   154,
      29,   147,    98,    99,   146,   934,   146,    27,    10,   146,
     268,   268,   146,    10,   704,   705,   154,    27,    29,    29,
      31,    29,    10,    31,    34,   715,   716,     4,    13,   268,
      13,    13,    13,    13,    13,    13,    95,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,  1013,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,   608,
      13,    13,    13,    13,   613,  1014,    13,    13,    13,    13,
      13,   620,    13,    13,   623,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
     639,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,   652,    13,    13,   655,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,   666,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,   680,    13,  1104,    13,    13,    13,    13,  1087,    13,
    1089,    13,    13,   692,    13,    13,    13,     4,     3,     3,
      11,    33,   161,    95,    29,    20,    95,    30,   164,   163,
     709,   702,    42,    29,   713,   362,   658,   268,    30,   678,
     141,    29,   721,    20,   991,   359,   725,   726,   727,    42,
      29,    29,  1131,    11,   733,   734,   735,   736,   737,   738,
      42,   740,   141,   147,   859,   842,    42,    42,   747,    95,
      29,   866,    29,   752,   152,    29,   755,    42,   757,    42,
      29,   760,    42,   762,    29,    29,   765,    30,    29,    29,
      29,   770,   771,    29,   773,    95,   775,    29,    29,   152,
      29,    95,    29,    29,    29,    95,    95,   147,    29,    95,
     147,    34,    95,    29,    95,    95,    29,    29,   603,   604,
     605,    95,    95,    95,    95,    95,    11,    95,    95,    95,
     615,   616,    29,    95,    95,    29,    11,    29,    29,   624,
      95,   626,    95,   661,    95,   630,   631,    95,    95,    95,
      29,   636,    11,   638,    11,   640,    29,    95,    95,    29,
      29,    95,   647,    11,    11,   650,    29,    95,   653,    11,
      42,    95,     6,   658,    29,    29,    29,    29,    29,     7,
     665,    27,    32,   147,    27,     3,    27,    13,    13,   158,
     142,    95,    95,   678,    29,   680,   152,    30,    29,     9,
      30,    24,   687,    42,   154,   147,   691,    29,   693,   142,
      42,    30,   697,   148,   732,    42,    29,   702,    42,     3,
      29,    29,    29,   774,   154,   147,   143,   147,   147,    29,
     144,    29,   717,   143,   719,   146,   143,   722,   147,   147,
     141,    27,   160,   728,   159,   730,   152,   147,  1024,   147,
      27,   147,   147,   152,   739,    11,   741,   147,   743,   164,
     149,   746,   164,   147,   152,   147,   147,   160,   148,   152,
    1024,   149,   148,   159,   953,   162,   674,   956,   676,   606,
     148,   960,   148,   962,   769,   612,   148,   772,   148,   774,
     154,   970,   619,   158,   152,   974,    28,   782,   625,   148,
      42,   980,   158,   148,   148,   142,    42,    22,   148,    29,
     148,   990,   148,    42,    74,   772,    20,   624,   809,   148,
    1095,  1137,   746,   743,   739,  1004,   143,  1006,   148,  1008,
     146,   849,   659,   148,   148,   156,   663,   148,   667,    94,
     141,  1020,   148,   148,   148,   148,   143,   141,   160,   148,
     152,  1030,  1031,   148,  1033,   840,  1035,   149,   149,   148,
     148,   688,   152,   148,   151,   148,   148,   694,   148,   148,
     148,  1050,   153,  1052,   146,  1054,   149,   152,   143,   137,
     129,   708,   158,   868,   158,   712,   154,   157,  1067,   158,
     106,   158,   728,   121,   665,   674,   676,   691,   883,   877,
     693,   687,   920,   647,   636,  1084,   640,  1086,   615,  1017,
      12,   607,   949,   801,  1093,   948,  1109,   744,   949,  1107,
    1099,    -1,  1101,    -1,  1103,    -1,   753,   754,    -1,    -1,
      -1,    -1,    -1,    -1,   761,   920,    -1,   764,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   803,    -1,    -1,   806,
      -1,    -1,    -1,    -1,    -1,    -1,   813,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     847,    -1,    -1,    -1,   851,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1060,    -1,   871,    -1,    -1,    -1,    -1,   876,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   886,
      -1,    -1,   889,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,    -1,  1064,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   915,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   925,    -1,
      -1,  1119,     1,   930,    -1,     4,   933,    -1,    -1,    -1,
    1095,  1096,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,   166,   167,   168,
     169,   170,   171,   172,     1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,     1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,   166,   167,   168,   169,   170,   171,   172,     1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,   166,   167,   168,   169,   170,   171,   172
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     8,     9,   174,   175,   176,   220,   221,     6,
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
     133,   134,   135,   136,   137,   138,   139,   140,   165,   166,
     167,   168,   169,   170,   171,   172,   177,   178,   179,   180,
     181,   183,   184,   186,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     206,   208,   210,   211,   212,   214,   216,   219,   225,   226,
     227,   228,   231,   234,   236,   239,   240,   244,   245,   246,
     247,   248,   249,   250,   251,   254,   255,   256,   259,   260,
     261,   264,   265,   268,   270,   271,   272,   273,   274,   275,
     276,   277,   282,   283,   284,   285,   286,   287,   290,   293,
     295,   297,   298,   301,   302,   303,   304,   307,   308,   310,
     311,   314,   315,   316,   317,   318,   319,   320,   321,   324,
     325,   328,   332,   333,   335,   338,   341,   344,   347,   350,
     351,   352,   354,   355,   362,   363,   364,   366,   367,   368,
     369,   370,   371,   372,   373,   376,   378,   381,   383,   386,
     388,   390,   391,   394,     1,   180,   196,   222,   223,   224,
     225,   244,    13,     5,   155,   409,    13,    27,   377,   387,
     377,   389,   377,   377,   392,   393,   266,   377,   266,   377,
      10,   377,   377,   262,   263,   377,   215,   377,   356,   377,
      10,   185,   377,   377,   377,   377,   379,   380,   377,   382,
     377,   384,   385,    27,    29,    34,   230,   395,   397,   398,
     374,   375,   377,   377,   377,   377,   334,   377,   377,   377,
     377,    10,   217,   218,   377,   331,   377,   322,   323,   377,
     215,   305,   306,   331,   377,   377,   326,   327,   331,   329,
     330,   331,   232,   233,   377,   377,   377,   215,     3,   377,
     342,   343,   377,   339,   340,   377,   345,   346,   377,   348,
     377,   377,   377,   204,   205,   377,   207,   377,   377,   353,
     377,   377,   377,    10,   213,   377,   215,   217,   182,   377,
     269,   377,   377,   187,   377,   377,   377,   377,   377,   312,
     313,   377,   296,   377,   309,   397,   309,   377,   377,   377,
     377,   377,   377,   299,   300,   377,   299,   294,   377,   291,
     292,   377,   288,   289,   377,   288,   288,   331,   377,   377,
     377,   408,   409,   377,   291,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   257,   258,   377,
     252,   253,   377,   312,   377,   377,   377,   377,   377,   377,
     229,   377,   229,   377,   377,   377,   309,   377,   377,     4,
     179,    13,    13,    13,    13,    13,    13,    13,    13,    13,
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
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,     4,   224,     3,    33,   410,     3,    29,
      31,    29,    31,    21,    22,    29,   147,   155,   405,   406,
     407,    34,   147,   405,   407,    95,    95,   141,   267,   147,
     405,   407,    11,    42,    95,   147,    95,    29,   161,   358,
     359,    95,    30,    42,    20,    29,    95,    30,    95,    29,
      95,   395,   398,    27,   146,   401,    95,    95,   147,    29,
      42,   141,   336,    95,   336,    29,    20,    42,    95,   147,
     407,   152,   396,   147,   407,    95,   407,    95,   396,    42,
      24,    29,   238,   365,    95,   396,    95,   396,    95,   147,
      29,   237,   238,   158,   241,   242,   241,    95,   147,   407,
     408,    95,    29,    95,   147,   405,   407,   152,    29,   349,
      42,    42,    95,   147,    29,    31,    11,   209,   147,   405,
     407,    42,   147,   405,   407,    29,    31,    95,    29,    95,
      29,    29,    95,    30,    29,    29,    29,    29,    95,   407,
      95,    29,   152,    29,    29,    29,    29,    29,    29,    95,
      34,    95,    29,    95,   147,   407,    95,    29,    29,   142,
     154,   281,   148,   147,   147,   405,   407,    11,    29,    29,
      11,   147,   405,   407,   147,   405,   407,    29,    29,    29,
      11,    29,    95,    29,    95,    29,    11,    11,    11,    29,
      42,    11,    95,    29,    29,    29,    29,   142,    29,     6,
     154,   411,     7,   230,   230,   230,   230,   377,   377,   377,
     408,   410,   396,   147,   408,   396,   147,   377,   393,   377,
     143,   408,   396,   147,   396,   263,   408,   377,   160,   159,
     357,   377,   377,   144,   379,   377,   396,   384,    27,   401,
      22,    27,    29,    34,   154,   402,   230,   374,   164,   377,
     143,   396,   377,   396,   143,   218,   408,   147,   397,   152,
     408,   147,   323,   396,   306,    27,   143,    32,   235,    27,
     327,   330,   232,   164,   377,   396,    27,     3,    95,   343,
     408,   147,   340,   396,   346,   408,   147,   377,    27,   204,
     164,   230,   230,    95,   408,   396,   147,   408,   396,   147,
     230,   230,   377,   377,   396,   377,   396,   396,   396,   313,
     152,   399,   377,   397,   396,   396,   396,   396,   396,   396,
     300,   396,   377,   292,   408,   147,   289,   396,   160,   149,
     152,   396,   408,   408,   396,   147,   396,   396,   408,   396,
     147,   408,   396,   147,   377,   396,   396,   257,   396,   252,
     396,   377,   152,    13,   149,   412,   145,   150,   152,   413,
     414,   416,    13,   148,   411,   408,   148,   408,   267,   141,
     148,   408,   148,    29,   162,   358,   159,   154,   360,    30,
      29,    30,   401,   402,   148,     9,   337,   377,   336,    42,
     148,   408,   397,   148,   408,    42,    42,    23,    32,   238,
     148,    24,   238,    29,   154,   243,     3,   377,   148,   408,
     148,   408,   349,    42,   148,   377,   148,   408,   148,   408,
      29,    29,    30,    27,    29,   400,   402,   152,    29,    29,
     148,   408,   142,   158,    27,   278,   279,   280,   377,   397,
     148,   148,   408,   148,   408,   148,   408,   401,    29,    29,
     158,    29,   403,   415,   156,   420,   415,   414,   416,   396,
     148,   396,   148,   396,   148,   396,   160,   358,    27,   149,
     152,   361,   396,   396,   143,   141,   396,   148,   148,   143,
      27,   396,   235,   149,   149,     3,   242,   242,   148,   148,
      27,   396,    11,   396,   148,   396,   148,    29,   402,    27,
     401,   400,   396,   148,   153,   152,    28,   396,   396,   148,
     396,   148,   396,   148,   146,   404,   146,   151,   417,   418,
     419,   396,   396,   396,   163,   149,    27,   158,   397,   152,
     377,   396,    42,    42,    23,   158,   158,    22,    29,   396,
     396,    27,   401,   401,   396,   154,   278,   377,   396,   396,
     396,   402,   157,   420,   419,    27,   158,   158,   397,   141,
     143,   396,   401,   396,   281,   158,    42
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
      case 281: /* "host_and_port" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->host_p);};

/* Line 1391 of yacc.c  */
#line 2715 "SIP_parse_.tab.c"
	break;
      case 288: /* "Secmechanism_1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->sec_mech_list);};

/* Line 1391 of yacc.c  */
#line 2724 "SIP_parse_.tab.c"
	break;
      case 289: /* "Secmechanism" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->sec_mech);};

/* Line 1391 of yacc.c  */
#line 2733 "SIP_parse_.tab.c"
	break;
      case 291: /* "routebdy1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->route_list);};

/* Line 1391 of yacc.c  */
#line 2742 "SIP_parse_.tab.c"
	break;
      case 292: /* "routeadr" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->route_val);};

/* Line 1391 of yacc.c  */
#line 2751 "SIP_parse_.tab.c"
	break;
      case 299: /* "conatact_1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->c_list);};

/* Line 1391 of yacc.c  */
#line 2760 "SIP_parse_.tab.c"
	break;
      case 300: /* "conatact_value" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->p_list);};

/* Line 1391 of yacc.c  */
#line 2769 "SIP_parse_.tab.c"
	break;
      case 305: /* "h_urispec_1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->history_entry_list);};

/* Line 1391 of yacc.c  */
#line 2778 "SIP_parse_.tab.c"
	break;
      case 306: /* "h_urispec" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->history_entry);};

/* Line 1391 of yacc.c  */
#line 2787 "SIP_parse_.tab.c"
	break;
      case 312: /* "anetspec_1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->an_spec_list);};

/* Line 1391 of yacc.c  */
#line 2796 "SIP_parse_.tab.c"
	break;
      case 313: /* "anetspec" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->an_spec);};

/* Line 1391 of yacc.c  */
#line 2805 "SIP_parse_.tab.c"
	break;
      case 322: /* "vnetspec_1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->n_spec_list);};

/* Line 1391 of yacc.c  */
#line 2814 "SIP_parse_.tab.c"
	break;
      case 323: /* "vnetspec" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->n_spec);};

/* Line 1391 of yacc.c  */
#line 2823 "SIP_parse_.tab.c"
	break;
      case 326: /* "p_urispec_1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->u_spec_list);};

/* Line 1391 of yacc.c  */
#line 2832 "SIP_parse_.tab.c"
	break;
      case 327: /* "p_urispec" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->u_spec);};

/* Line 1391 of yacc.c  */
#line 2841 "SIP_parse_.tab.c"
	break;
      case 331: /* "p_nameaddr" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->naddr);};

/* Line 1391 of yacc.c  */
#line 2850 "SIP_parse_.tab.c"
	break;
      case 334: /* "event_list1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->e_list);};

/* Line 1391 of yacc.c  */
#line 2859 "SIP_parse_.tab.c"
	break;
      case 336: /* "event_event" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->e_type);};

/* Line 1391 of yacc.c  */
#line 2868 "SIP_parse_.tab.c"
	break;
      case 337: /* "event_event_template1toN" */

/* Line 1391 of yacc.c  */
#line 343 "SIP_parse.y"
	{delete (yyvaluep->e_template_list);};

/* Line 1391 of yacc.c  */
#line 2877 "SIP_parse_.tab.c"
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
#line 366 "SIP_parse.y"
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
#line 373 "SIP_parse.y"
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
#line 388 "SIP_parse.y"
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
#line 399 "SIP_parse.y"
    {yyerrok; errorind_loc=255;}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 402 "SIP_parse.y"
    {}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 403 "SIP_parse.y"
    {}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 408 "SIP_parse.y"
    {}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 409 "SIP_parse.y"
    {}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 410 "SIP_parse.y"
    {}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 411 "SIP_parse.y"
    {}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 412 "SIP_parse.y"
    { resetptr();  errorind_loc=255; yyerrok;}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 416 "SIP_parse.y"
    { headerptr->allow()().fieldName()=FieldName::ALLOW__E;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 418 "SIP_parse.y"
    { headerptr->contentDisposition()().fieldName()=FieldName::CONTENT__DISPOSITION__E;}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 420 "SIP_parse.y"
    { headerptr->contentEncoding()().fieldName()=FieldName::CONTENT__ENCODING__E;}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 422 "SIP_parse.y"
    { headerptr->contentLanguage()().fieldName()=FieldName::CONTENT__LANGUAGE__E;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 424 "SIP_parse.y"
    { headerptr->contentLength()().fieldName()=FieldName::CONTENT__LENGTH__E;}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 426 "SIP_parse.y"
    { headerptr->contentType()().fieldName()=FieldName::CONTENT__TYPE__E;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 427 "SIP_parse.y"
    { headerptr->expires()().fieldName()=FieldName::EXPIRES__E;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 430 "SIP_parse.y"
    { headerptr->allow()().methods()=OMIT_VALUE;}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 431 "SIP_parse.y"
    {}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 433 "SIP_parse.y"
    {
        headerptr->allow()().methods()()[allowcount] = (yyvsp[(2) - (2)].sv);
        allowcount++;
        /*Free($2);*/
      }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 438 "SIP_parse.y"
    {
        headerptr->allow()().methods()()[allowcount] = (yyvsp[(4) - (4)].sv);
        allowcount++;
        /*Free($4);*/
      }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 446 "SIP_parse.y"
    {
        headerptr->contentDisposition()().dispositionType()= (yyvsp[(3) - (3)].sv);
        headerptr->contentDisposition()().dispositionParams()=OMIT_VALUE;
        /*Free($3);*/
      }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 451 "SIP_parse.y"
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
#line 461 "SIP_parse.y"
    {}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 464 "SIP_parse.y"
    {
       headerptr->contentEncoding()().contentCoding()[contentenccount]=trim((yyvsp[(2) - (2)].sv));
       contentenccount++;
//       Free($2);
     }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 469 "SIP_parse.y"
    {
       headerptr->contentEncoding()().contentCoding()[contentenccount]=trim((yyvsp[(4) - (4)].sv));
       contentenccount++;
//       Free($4);
     }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 476 "SIP_parse.y"
    {}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 479 "SIP_parse.y"
    {
        headerptr->contentLanguage()().languageTag()[contentlangcount]=trim((yyvsp[(2) - (2)].sv));
        contentlangcount++;
//        Free($2);
      }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 484 "SIP_parse.y"
    {
        headerptr->contentLanguage()().languageTag()[contentlangcount]=trim((yyvsp[(4) - (4)].sv));
        contentlangcount++;
//        Free($4);
      }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 492 "SIP_parse.y"
    { headerptr->contentLength()().len() = str2int((yyvsp[(3) - (3)].sv)); /*Free($3)*/}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 495 "SIP_parse.y"
    {
        headerptr->contentType()().mediaType() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 501 "SIP_parse.y"
    {
        headerptr->expires()().deltaSec() = (yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 507 "SIP_parse.y"
    {
        headerptr->x__AUT()().x__AUT__Value() = (yyvsp[(3) - (3)].sv);
      }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 512 "SIP_parse.y"
    {
        headerptr->x__Carrier__Info()().x__Carrier__Info__Value() = (yyvsp[(3) - (3)].sv);
      }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 517 "SIP_parse.y"
    {
        headerptr->x__CHGDelay()().x__CHGDelay__Value() = (yyvsp[(3) - (3)].sv);
      }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 523 "SIP_parse.y"
    {    
        headerptr->x__CHGInfo()().x__ci__kind__data()= (yyvsp[(3) - (3)].sv); 
        headerptr->x__CHGInfo()().cDR__Record()=OMIT_VALUE; 
      }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 527 "SIP_parse.y"
    {
        headerptr->x__CHGInfo()().x__ci__kind__data()= (yyvsp[(3) - (5)].sv); 
        headerptr->x__CHGInfo()().cDR__Record()()=(yyvsp[(5) - (5)].sv);        
      }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 533 "SIP_parse.y"
    {
      headerptr->x__FCI()().x__FCI__Value() = str2hex((yyvsp[(3) - (3)].sv));
    }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 541 "SIP_parse.y"
    {headerptr->alertInfo()().fieldName()=FieldName::ALERT__INFO__E;}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 543 "SIP_parse.y"
    {headerptr->authorization()().fieldName()=FieldName::AUTHORIZATION__E;}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 544 "SIP_parse.y"
    {headerptr->inReplyTo()().fieldName()=FieldName::IN__REPLY__TO__E;}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 546 "SIP_parse.y"
    {headerptr->maxForwards()().fieldName()=FieldName::MAX__FORWARDS__E;}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 547 "SIP_parse.y"
    {headerptr->priority()().fieldName()=FieldName::PRIORITY__E;}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 549 "SIP_parse.y"
    {headerptr->proxyAuthorization()().fieldName()=FieldName::PROXY__AUTHORIZATION__E;}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 551 "SIP_parse.y"
    {headerptr->proxyRequire()().fieldName()=FieldName::PROXY__REQUIRE__E;}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 552 "SIP_parse.y"
    {headerptr->route()().fieldName()=FieldName::ROUTE__E;}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 553 "SIP_parse.y"
    {headerptr->subject()().fieldName()=FieldName::SUBJECT__E;}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 554 "SIP_parse.y"
    {headerptr->refer__to()().fieldName()=FieldName::REFER__TO__E;}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 555 "SIP_parse.y"
    {headerptr->p__served__user()().fieldName()=FieldName::P__SERVED__USER__E;}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 556 "SIP_parse.y"
    {headerptr->p__profile__key()().fieldName()=FieldName::P__PROFILE__KEY__E;}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 557 "SIP_parse.y"
    {headerptr->referred__by()().fieldName()=FieldName::REFERRED__BY__E;}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 558 "SIP_parse.y"
    {headerptr->p__asserted__service()().fieldName()=FieldName::P__ASSERTED__SERVICE__E;}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 559 "SIP_parse.y"
    {headerptr->p__preferred__service()().fieldName()=FieldName::P__PREFERRED__SERVICE__E;}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 562 "SIP_parse.y"
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
#line 576 "SIP_parse.y"
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
#line 588 "SIP_parse.y"
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
#line 598 "SIP_parse.y"
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
#line 607 "SIP_parse.y"
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
#line 616 "SIP_parse.y"
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
#line 627 "SIP_parse.y"
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
#line 641 "SIP_parse.y"
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
#line 653 "SIP_parse.y"
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
#line 663 "SIP_parse.y"
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
#line 672 "SIP_parse.y"
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
#line 681 "SIP_parse.y"
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
#line 691 "SIP_parse.y"
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
#line 705 "SIP_parse.y"
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
#line 717 "SIP_parse.y"
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
#line 727 "SIP_parse.y"
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
#line 736 "SIP_parse.y"
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
#line 745 "SIP_parse.y"
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
#line 754 "SIP_parse.y"
    {
        headerptr->p__Service__Indication()().service__indication() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 760 "SIP_parse.y"
    {
        headerptr->p__Service__Notification()().service__notification() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 767 "SIP_parse.y"
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
#line 781 "SIP_parse.y"
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
#line 793 "SIP_parse.y"
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
#line 803 "SIP_parse.y"
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
#line 812 "SIP_parse.y"
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
#line 821 "SIP_parse.y"
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
#line 830 "SIP_parse.y"
    {}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 837 "SIP_parse.y"
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
#line 844 "SIP_parse.y"
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
#line 856 "SIP_parse.y"
    {}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 859 "SIP_parse.y"
    {
        headerptr->authorization()().body().digestResponse()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 865 "SIP_parse.y"
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
#line 876 "SIP_parse.y"
    {}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 879 "SIP_parse.y"
    {
        headerptr->inReplyTo()().callids()[inreplytocount] = (yyvsp[(1) - (1)].sv);
        inreplytocount++;
//        Free($1);
      }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 884 "SIP_parse.y"
    {
        headerptr->inReplyTo()().callids()[inreplytocount] = (yyvsp[(4) - (4)].sv);
        inreplytocount++;
//        Free($4);
      }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 892 "SIP_parse.y"
    { headerptr->maxForwards()().forwards()=str2int((yyvsp[(3) - (3)].sv));/*Free($3)*/}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 895 "SIP_parse.y"
    {
        headerptr->priority()().priorityValue() = trim((yyvsp[(2) - (2)].sv));
//        Free($2);
      }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 901 "SIP_parse.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 904 "SIP_parse.y"
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
#line 911 "SIP_parse.y"
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
#line 923 "SIP_parse.y"
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
#line 932 "SIP_parse.y"
    {
        (*optptr)[optioncount]=(yyvsp[(2) - (2)].sv);
        optioncount++;
//        Free($2);
      }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 937 "SIP_parse.y"
    {
        (*optptr)[optioncount]=(yyvsp[(4) - (4)].sv);
        optioncount++;
//        Free($4);
      }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 944 "SIP_parse.y"
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
#line 953 "SIP_parse.y"
    {}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 954 "SIP_parse.y"
    {}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 957 "SIP_parse.y"
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
#line 971 "SIP_parse.y"
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
#line 984 "SIP_parse.y"
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
#line 995 "SIP_parse.y"
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
#line 1007 "SIP_parse.y"
    {
        headerptr->subject()().summary()=trim((yyvsp[(2) - (2)].sv));
//        Free($2);
      }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 1019 "SIP_parse.y"
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
#line 1033 "SIP_parse.y"
    { yyerrok; errorind_loc=255;}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1036 "SIP_parse.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 1037 "SIP_parse.y"
    {}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1042 "SIP_parse.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 1043 "SIP_parse.y"
    {}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 1044 "SIP_parse.y"
    {}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1045 "SIP_parse.y"
    {}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1046 "SIP_parse.y"
    { resetptr(); yyerrok; errorind_loc=255;}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1049 "SIP_parse.y"
    {headerptr->errorInfo()().fieldName()=FieldName::ERROR__INFO__E;}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1051 "SIP_parse.y"
    {headerptr->proxyAuthenticate()().fieldName()=FieldName::PROXY__AUTHENTICATE__E;}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1052 "SIP_parse.y"
    {headerptr->retryAfter()().fieldName()=FieldName::RETRY__AFTER__E;}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1053 "SIP_parse.y"
    {headerptr->server()().fieldName()=FieldName::SERVER__E;}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1054 "SIP_parse.y"
    {headerptr->unsupported()().fieldName()=FieldName::UNSUPPORTED__E;}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1056 "SIP_parse.y"
    {headerptr->authenticationInfo()().fieldName()=FieldName::AUTHENTICATION__INFO__E;}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1057 "SIP_parse.y"
    {headerptr->warning()().fieldName()=FieldName::WARNING__E;}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1059 "SIP_parse.y"
    {headerptr->wwwAuthenticate()().fieldName()=FieldName::WWW__AUTHENTICATE__E;}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1062 "SIP_parse.y"
    {
        headerptr->authenticationInfo()().ainfo()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1070 "SIP_parse.y"
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
#line 1085 "SIP_parse.y"
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
#line 1100 "SIP_parse.y"
    {
        (yyval.service_1toN) = new Service__ID__List;
        (*(yyval.service_1toN))[0] = (yyvsp[(2) - (2)].sv);
      //  delete $2;
      }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1105 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].service_1toN)->size_of();
        (yyval.service_1toN)=(yyvsp[(1) - (4)].service_1toN);
        (*(yyval.service_1toN))[a] = (yyvsp[(4) - (4)].sv);
     //   delete $4;
      }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1113 "SIP_parse.y"
    {}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1114 "SIP_parse.y"
    {}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1117 "SIP_parse.y"
    {}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1124 "SIP_parse.y"
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
#line 1131 "SIP_parse.y"
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
#line 1143 "SIP_parse.y"
    {
        headerptr->retryAfter()().deltaSec() = (yyvsp[(3) - (3)].sv);
        headerptr->retryAfter()().comment() = OMIT_VALUE;
        headerptr->retryAfter()().retryParams() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1149 "SIP_parse.y"
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
#line 1157 "SIP_parse.y"
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
#line 1167 "SIP_parse.y"
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
#line 1178 "SIP_parse.y"
    {
      strcat(comment_buf+1,(yyvsp[(1) - (1)].sv));
//      Free($1);
    }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1182 "SIP_parse.y"
    {
      strcat(comment_buf+1,(yyvsp[(2) - (2)].sv));
//      Free($2);
    }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 1188 "SIP_parse.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 1190 "SIP_parse.y"
    {
        headerptr->server()().serverBody()[servercount]= (yyvsp[(1) - (1)].sv);
        servercount++;
        Free((yyvsp[(1) - (1)].sv));
      }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1195 "SIP_parse.y"
    {
        headerptr->server()().serverBody()[servercount]= (yyvsp[(3) - (3)].sv);
        servercount++;
        Free((yyvsp[(3) - (3)].sv));
      }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1202 "SIP_parse.y"
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
#line 1212 "SIP_parse.y"
    {
        char *atm=(char *)Malloc(strlen((yyvsp[(1) - (1)].sv))+1);
        strcpy(atm,(yyvsp[(1) - (1)].sv));
        (yyval.sv)=atm;
    }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 1219 "SIP_parse.y"
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
#line 1228 "SIP_parse.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 1229 "SIP_parse.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 1232 "SIP_parse.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 1233 "SIP_parse.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 1234 "SIP_parse.y"
    {}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 1237 "SIP_parse.y"
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
#line 1247 "SIP_parse.y"
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
#line 1254 "SIP_parse.y"
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
#line 1267 "SIP_parse.y"
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
#line 1274 "SIP_parse.y"
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
#line 1291 "SIP_parse.y"
    {headerptr->accept()().fieldName()=FieldName::ACCEPT__E;}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 1293 "SIP_parse.y"
    {headerptr->acceptEncoding()().fieldName()=FieldName::ACCEPT__ENCODING__E;}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 1295 "SIP_parse.y"
    {headerptr->acceptLanguage()().fieldName()=FieldName::ACCEPT__LANGUAGE__E;}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 1296 "SIP_parse.y"
    {headerptr->callId()().fieldName()=FieldName::CALL__ID__E;}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 1297 "SIP_parse.y"
    {headerptr->callInfo()().fieldName()=FieldName::CALL__INFO__E;}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 1298 "SIP_parse.y"
    {headerptr->contact()().fieldName()=FieldName::CONTACT__E;}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 1299 "SIP_parse.y"
    {headerptr->cSeq()().fieldName()=FieldName:: CSEQ__E;}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 1300 "SIP_parse.y"
    {headerptr->date()().fieldName()=FieldName::DATE__E;}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 1301 "SIP_parse.y"
    {headerptr->minExpires()().fieldName()=FieldName::MIN__EXPIRES__E;}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 1302 "SIP_parse.y"
    {headerptr->event()().fieldName()=FieldName::EVENT__E;}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 1303 "SIP_parse.y"
    {headerptr->allow__events()().fieldName()=FieldName::ALLOW__EVENTS__E;}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 1304 "SIP_parse.y"
    {headerptr->acceptResourcePriority()().fieldName()=FieldName::ACCEPT__RESOURCE__PRIORITY__E;}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 1305 "SIP_parse.y"
    {headerptr->resourcePriority()().fieldName()=FieldName::RESOURCE__PRIORITY__E;}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 1306 "SIP_parse.y"
    {headerptr->fromField()().fieldName()=FieldName::FROM__E;errorind_loc&=254;}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 1308 "SIP_parse.y"
    {headerptr->historyInfo()().fieldName()=FieldName::HISTORY__INFO__E;}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 1310 "SIP_parse.y"
    {headerptr->mimeVersion()().fieldName()=FieldName::MIME__VERSION__E;}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 1312 "SIP_parse.y"
    {headerptr->organization()().fieldName()=FieldName::ORGANIZATION__E;}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 1313 "SIP_parse.y"
    {headerptr->privacy()().fieldName()=FieldName::PRIVACY__E;}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 1315 "SIP_parse.y"
    {headerptr->p__associated__uri()().fieldName()=FieldName::P__ASSOCIATED__URI;}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 1317 "SIP_parse.y"
    {headerptr->diversion()().fieldName()=FieldName::DIVERSION__E;}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 1319 "SIP_parse.y"
    {headerptr->p__called__party__id()().fieldName()=FieldName::P__CALLED__PARTY__ID;}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 1321 "SIP_parse.y"
    {headerptr->passertedID()().fieldName()=FieldName::P__ASSERTED__ID__E;}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 1323 "SIP_parse.y"
    {headerptr->p__visited__network__id()().fieldName()=FieldName::P__VISITED__NETWORK__ID;}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 1325 "SIP_parse.y"
    {headerptr->ppreferredID()().fieldName()=FieldName::P__PREFERRED__ID__E;}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 1327 "SIP_parse.y"
    {headerptr->p__access__network__info()().fieldName()=FieldName::P__ACCESS__NETWORK__INFO;}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 1329 "SIP_parse.y"
    {headerptr->p__last__access__network__info()().fieldName()=FieldName::P__LAST__ACCESS__NETWORK__INFO;}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 1331 "SIP_parse.y"
    {headerptr->p__charging__function__address()().fieldName()=FieldName::P__CHARGING__FUNCTION__ADDRESS;}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 1333 "SIP_parse.y"
    {headerptr->p__charging__vector()().fieldName()=FieldName::P__CHARGING__VECTOR;}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 1334 "SIP_parse.y"
    {headerptr->rack()().fieldName()=FieldName::RACK__E;}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 1335 "SIP_parse.y"
    {headerptr->reason()().fieldName()=FieldName::REASON__E;}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 1336 "SIP_parse.y"
    {headerptr->rseq()().fieldName()=FieldName::RSEQ__E;}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 1338 "SIP_parse.y"
    {headerptr->recordRoute()().fieldName()=FieldName::RECORD__ROUTE__E;}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 1339 "SIP_parse.y"
    {headerptr->replyTo()().fieldName()=FieldName::REPLY__TO__E;}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 1340 "SIP_parse.y"
    {headerptr->require()().fieldName()=FieldName::REQUIRE__E;}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 1341 "SIP_parse.y"
    {headerptr->supported()().fieldName()=FieldName::SUPPORTED__E;}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 1342 "SIP_parse.y"
    {headerptr->min__SE()().fieldName()=FieldName::MIN__SE__E;}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 1343 "SIP_parse.y"
    {headerptr->session__expires()().fieldName()=FieldName::SESSION__EXPIRES__E;}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 1344 "SIP_parse.y"
    {headerptr->session__id()().fieldName()=FieldName::SESSION__ID__E;}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 1345 "SIP_parse.y"
    {headerptr->subscription__state()().fieldName()=FieldName::SUBSCRIPTION__STATE__E;}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 1346 "SIP_parse.y"
    {headerptr->timestamp()().fieldName()=FieldName::TIMESTAMP__E;}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 1347 "SIP_parse.y"
    {headerptr->toField()().fieldName()=FieldName::TO__E;errorind_loc&=253;}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 1348 "SIP_parse.y"
    {headerptr->userAgent()().fieldName()=FieldName::USER__AGENT__E;}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 1349 "SIP_parse.y"
    {headerptr->via()().fieldName()=FieldName::VIA__E;errorind_loc&=251;}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 1350 "SIP_parse.y"
    {headerptr->accept__contact()().fieldName()=FieldName::ACCEPT__CONTACT__E;}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 1351 "SIP_parse.y"
    {headerptr->reject__contact()().fieldName()=FieldName::REJECT__CONTACT__E;}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 1352 "SIP_parse.y"
    {headerptr->request__disp()().fieldName()=FieldName::REQUEST__DISP__E;}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 1353 "SIP_parse.y"
    {headerptr->p__media__auth()().fieldName()=FieldName::P__MEDIA__AUTH__E;}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 1354 "SIP_parse.y"
    {headerptr->path()().fieldName()=FieldName::PATH__E;}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 1355 "SIP_parse.y"
    {headerptr->security__client()().fieldName()=FieldName::SECURITY__CLIENT__E;}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 1356 "SIP_parse.y"
    {headerptr->security__server()().fieldName()=FieldName::SECURITY__SERVER__E;}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 1357 "SIP_parse.y"
    {headerptr->security__verify()().fieldName()=FieldName::SECURITY__VERIFY__E;}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 1358 "SIP_parse.y"
    {headerptr->p__DCS__trace__pty__id()().fieldName()=FieldName::P__DCS__TRACE__PTY__ID__E;}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 1359 "SIP_parse.y"
    {headerptr->p__DCS__OSPS()().fieldName()=FieldName::P__DCS__OSPS__E;}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 1360 "SIP_parse.y"
    {headerptr->p__Early__Media()().fieldName()=FieldName::P__EARLY__MEDIA__E;}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 1361 "SIP_parse.y"
    {headerptr->p__DCS__billing__info()().fieldName()=FieldName::P__DCS__BILLING__INFO__E;}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 1362 "SIP_parse.y"
    {headerptr->p__DCS__LAES()().fieldName()=FieldName::P__DCS__LAES__E;}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 1363 "SIP_parse.y"
    {headerptr->p__DCS__redirect()().fieldName()=FieldName::P__DCS__REDIRECT__E;}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1364 "SIP_parse.y"
    {headerptr->p__user__database()().fieldName()=FieldName::P__USER__DATABASE__E;}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1365 "SIP_parse.y"
    {headerptr->service__route()().fieldName()=FieldName::SERVICE__ROUTE__E;}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1366 "SIP_parse.y"
    {headerptr->replaces()().fieldName()=FieldName::REPLACES__E;}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1367 "SIP_parse.y"
    {headerptr->sip__ETag()().fieldName()=FieldName::SIP__ETAG__E;}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1368 "SIP_parse.y"
    {headerptr->sip__If__Match()().fieldName()=FieldName::SIP__IF__MATCH__E;}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1369 "SIP_parse.y"
    {headerptr->join()().fieldName()=FieldName::JOIN__E;}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1370 "SIP_parse.y"
    {headerptr->p__Service__Indication()().fieldName()=FieldName::P__SERVICE__INDICATION__E;}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1371 "SIP_parse.y"
    {headerptr->p__Service__Notification()().fieldName()=FieldName::P__SERVICE__NOTIFICATION__E;}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1373 "SIP_parse.y"
    {headerptr->answer__mode()().fieldName()=FieldName::ANSWER__MODE__E;}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1375 "SIP_parse.y"
    {headerptr->priv__answer__mode()().fieldName()=FieldName::PRIV__ANSWER__MODE__E;}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1377 "SIP_parse.y"
    {headerptr->alert__mode()().fieldName()=FieldName::ALERT__MODE__E;}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1379 "SIP_parse.y"
    {headerptr->refer__sub()().fieldName()=FieldName::REFER__SUB__E;}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1381 "SIP_parse.y"
    {headerptr->p__alerting__mode()().fieldName()=FieldName::P__ALERTING__MODE__E;}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1383 "SIP_parse.y"
    {headerptr->p__answer__state()().fieldName()=FieldName::P__ANSWER__STATE__E;}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1384 "SIP_parse.y"
    {headerptr->geolocation()().fieldName()=FieldName::GEOLOCATION__E;}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1385 "SIP_parse.y"
    {headerptr->geolocation__routing()().fieldName()=FieldName::GEOLOCATION__ROUTING__E;}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1386 "SIP_parse.y"
    {headerptr->geolocation__error()().fieldName()=FieldName::GEOLOCATION__ERROR__E;}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1387 "SIP_parse.y"
    {headerptr->target__dialog()().fieldName()=FieldName::TARGET__DIALOG__E;}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1388 "SIP_parse.y"
    {headerptr->feature__caps()().fieldName()=FieldName::FEATURE__CAPS__E;}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1389 "SIP_parse.y"
    {headerptr->info__Package()().fieldName()=FieldName::INFO__PACKAGE__E;}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1390 "SIP_parse.y"
    {headerptr->recv__Info()().fieldName()=FieldName::RECV__INFO__E;}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1391 "SIP_parse.y"
    {headerptr->x__AUT()().fieldName()=FieldName::X__AUT__E;}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1392 "SIP_parse.y"
    {headerptr->x__Carrier__Info()().fieldName()=FieldName::X__CARRIER__INFO__E;}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1393 "SIP_parse.y"
    {headerptr->x__CHGDelay()().fieldName()=FieldName::X__CHGDELAY__E;}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1394 "SIP_parse.y"
    {headerptr->p__Area__Info()().fieldName()=FieldName::P__AREA__INFO__E;}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1395 "SIP_parse.y"
    {headerptr->x__CHGInfo()().fieldName()=FieldName::X__CHGINFO__E;}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1396 "SIP_parse.y"
    {headerptr->x__FCI()().fieldName()=FieldName::X__FCI__E;}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1397 "SIP_parse.y"
    {headerptr->conversation__ID()().fieldName()=FieldName::CONVERSATION__ID__E;}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1398 "SIP_parse.y"
    {headerptr->contribution__ID()().fieldName()=FieldName::CONTRIBUTION__ID__E;}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1399 "SIP_parse.y"
    {headerptr->inReplyTo__contribution__ID()().fieldName()=FieldName::INREPLYTO__CONTRIBUTION__ID__E;}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1400 "SIP_parse.y"
    {headerptr->message__Expires()().fieldName()=FieldName::MESSAGE__EXPIRES__E;}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1401 "SIP_parse.y"
    {headerptr->message__UID()().fieldName()=FieldName::MESSAGE__UID__E;}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1402 "SIP_parse.y"
    {headerptr->session__Replaces()().fieldName()=FieldName::SESSION__REPLACES__E;}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1407 "SIP_parse.y"
    {
      headerptr->conversation__ID()().conversationid()=(yyvsp[(3) - (3)].sv);
    }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1412 "SIP_parse.y"
    {
      headerptr->contribution__ID()().contributionid()=(yyvsp[(3) - (3)].sv);
    }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1417 "SIP_parse.y"
    {
      headerptr->inReplyTo__contribution__ID()().contributionid()=(yyvsp[(3) - (3)].sv);
    }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1422 "SIP_parse.y"
    {
      headerptr->session__Replaces()().sessionreplaces()=(yyvsp[(3) - (3)].sv);
    }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1427 "SIP_parse.y"
    {
      headerptr->message__Expires()().deltaSec()=(yyvsp[(3) - (3)].sv);
    }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1432 "SIP_parse.y"
    {
      headerptr->message__UID()().uniqueid()=(yyvsp[(3) - (3)].sv);
    }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1437 "SIP_parse.y"
    {
        headerptr->recv__Info()().info__Package__List()=OMIT_VALUE;
      }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1440 "SIP_parse.y"
    {}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1447 "SIP_parse.y"
    {
        headerptr->recv__Info()().info__Package__List()()[recvinfocount].
                                  info__package__name()=(yyvsp[(2) - (2)].sv);	
	headerptr->recv__Info()().info__Package__List()()[recvinfocount].
                                  info__package__params()=OMIT_VALUE;
				  
	recvinfocount++;
//        Free($2);				  
   }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1456 "SIP_parse.y"
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

  case 269:

/* Line 1806 of yacc.c  */
#line 1469 "SIP_parse.y"
    {
        headerptr->info__Package()().info__Package__Type().info__package__name() = (yyvsp[(3) - (3)].sv);
        headerptr->info__Package()().info__Package__Type().info__package__params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1474 "SIP_parse.y"
    {
        headerptr->info__Package()().info__Package__Type().info__package__name() = (yyvsp[(3) - (4)].sv);
        headerptr->info__Package()().info__Package__Type().info__package__params() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1484 "SIP_parse.y"
    {
      headerptr->target__dialog()().callid() =(yyvsp[(3) - (3)].sv);
      headerptr->target__dialog()().td__params()= OMIT_VALUE;
//      Free($3);
    }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1489 "SIP_parse.y"
    {
      headerptr->target__dialog()().callid() =(yyvsp[(3) - (4)].sv);
      headerptr->target__dialog()().td__params()= *paramptr;
      paramcount=0;
      delete paramptr;
      paramptr=new GenericParam__List;

//      Free($3);
    }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1501 "SIP_parse.y"
    {}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1508 "SIP_parse.y"
    {
        headerptr->feature__caps()().fc__values()[featureCapscount].fc__string()=(yyvsp[(2) - (2)].sv);
        headerptr->feature__caps()().fc__values()[featureCapscount].feature__param()=
                                                                     OMIT_VALUE;
        featureCapscount++;
//        Free($3);
      }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1515 "SIP_parse.y"
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

  case 278:

/* Line 1806 of yacc.c  */
#line 1527 "SIP_parse.y"
    {
      headerptr->geolocation__error()().location__error__code()=str2int((yyvsp[(3) - (3)].sv));
      headerptr->geolocation__error()().location__error__params()=OMIT_VALUE;
    }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1531 "SIP_parse.y"
    {
      headerptr->geolocation__error()().location__error__code()=str2int((yyvsp[(3) - (4)].sv));
      headerptr->geolocation__error()().location__error__params()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
    }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1540 "SIP_parse.y"
    {
     headerptr->geolocation__routing()().georouting__param()=(yyvsp[(3) - (3)].sv);
     headerptr->geolocation__routing()().georouting__value()=OMIT_VALUE;
   }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1544 "SIP_parse.y"
    {
     headerptr->geolocation__routing()().georouting__param()=(yyvsp[(3) - (5)].sv);
     headerptr->geolocation__routing()().georouting__value()=(yyvsp[(5) - (5)].sv);
   }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1551 "SIP_parse.y"
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

  case 283:

/* Line 1806 of yacc.c  */
#line 1566 "SIP_parse.y"
    {
        (yyval.g_val_list)= new Location__value__list;
        (*(yyval.g_val_list))[0]=*(yyvsp[(1) - (1)].g_val);
        delete (yyvsp[(1) - (1)].g_val);
      }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1572 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].g_val_list)->size_of();
        (yyval.g_val_list)=(yyvsp[(1) - (3)].g_val_list);
        (*(yyval.g_val_list))[a] = *(yyvsp[(3) - (3)].g_val);
        delete (yyvsp[(3) - (3)].g_val);
      }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1580 "SIP_parse.y"
    {
     (yyval.g_val) = new Location__value;
     (yyval.g_val)->location__uri() = *uriptr;
     (yyval.g_val)->location__params() = OMIT_VALUE;
     
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
   }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1589 "SIP_parse.y"
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

  case 287:

/* Line 1806 of yacc.c  */
#line 1605 "SIP_parse.y"
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

  case 288:

/* Line 1806 of yacc.c  */
#line 1620 "SIP_parse.y"
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

  case 289:

/* Line 1806 of yacc.c  */
#line 1635 "SIP_parse.y"
    {
        (yyval.r_val_list) = new Rvalue__List;
        (*(yyval.r_val_list))[0] = *(yyvsp[(2) - (2)].rval);
        delete (yyvsp[(2) - (2)].rval);
      }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1640 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].r_val_list)->size_of();
        (yyval.r_val_list)=(yyvsp[(1) - (4)].r_val_list);
        (*(yyval.r_val_list))[a] = *(yyvsp[(4) - (4)].rval);
        delete (yyvsp[(4) - (4)].rval);
      }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1648 "SIP_parse.y"
    {
      (yyval.rval) = new Rvalue;
      (yyval.rval)->namespace_()= (yyvsp[(1) - (3)].sv);
      (yyval.rval)->r__priority()=(yyvsp[(3) - (3)].sv);
//      delete $3;
//      Free($1);
      }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1658 "SIP_parse.y"
    {
      if(!headerptr->p__Early__Media().ispresent()){
        headerptr->p__Early__Media()().em__param__list()= OMIT_VALUE;
      }
    }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1663 "SIP_parse.y"
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

  case 294:

/* Line 1806 of yacc.c  */
#line 1679 "SIP_parse.y"
    {
        (yyval.em_bdy_list)= new Em__param__List;
        (*(yyval.em_bdy_list))[0]=(yyvsp[(2) - (2)].sv);
//        Free($2);
      }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1684 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].em_bdy_list)->size_of();
        (yyval.em_bdy_list)=(yyvsp[(1) - (4)].em_bdy_list);
        (*(yyval.em_bdy_list))[a] = (yyvsp[(4) - (4)].sv);
//        Free($4);
      }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1692 "SIP_parse.y"
    {
        headerptr->join()().callid()=(yyvsp[(3) - (3)].sv);
        headerptr->join()().joinParams()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1697 "SIP_parse.y"
    {
        headerptr->join()().callid()=(yyvsp[(3) - (4)].sv);
        headerptr->join()().joinParams()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($3);
      }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1707 "SIP_parse.y"
    {
        headerptr->sip__ETag()().entity__tag()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1713 "SIP_parse.y"
    {
        headerptr->sip__If__Match()().entity__tag()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1719 "SIP_parse.y"
    {
        headerptr->replaces()().callid()=(yyvsp[(3) - (3)].sv);
        headerptr->replaces()().replacesParams()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1724 "SIP_parse.y"
    {
        headerptr->replaces()().callid()=(yyvsp[(3) - (4)].sv);
        headerptr->replaces()().replacesParams()=*paramptr;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
//        Free($3);
      }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1734 "SIP_parse.y"
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

  case 303:

/* Line 1806 of yacc.c  */
#line 1749 "SIP_parse.y"
    {
        headerptr->p__user__database()().database()=*uriptr;
        headerptr->p__user__database()().params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;

      }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1757 "SIP_parse.y"
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

  case 305:

/* Line 1806 of yacc.c  */
#line 1769 "SIP_parse.y"
    {
        headerptr->p__DCS__redirect()().caller__ID()=*uriptr;
        headerptr->p__DCS__redirect()().redir__params()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;

      }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1777 "SIP_parse.y"
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

  case 307:

/* Line 1806 of yacc.c  */
#line 1789 "SIP_parse.y"
    {
        headerptr->p__DCS__LAES()().laes__sig()=*(yyvsp[(3) - (3)].host_p);
        headerptr->p__DCS__LAES()().laes__params()=OMIT_VALUE;
        delete (yyvsp[(3) - (3)].host_p);
      }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1794 "SIP_parse.y"
    {
        headerptr->p__DCS__LAES()().laes__sig()=*(yyvsp[(3) - (5)].host_p);
          headerptr->p__DCS__LAES()().laes__params()=*paramptr;
          delete paramptr;
          paramptr= new GenericParam__List;
          paramcount=0;
        delete (yyvsp[(3) - (5)].host_p);
      }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1814 "SIP_parse.y"
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

  case 314:

/* Line 1806 of yacc.c  */
#line 1826 "SIP_parse.y"
    {
        (yyval.host_p)= new HostPort;
        (yyval.host_p)->host()=(yyvsp[(1) - (3)].sv);
        (yyval.host_p)->portField() = (yyvsp[(3) - (3)].iv);
//        Free($1);
      }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1832 "SIP_parse.y"
    {
        (yyval.host_p)= new HostPort;
        (yyval.host_p)->host()=(yyvsp[(1) - (1)].sv);
        (yyval.host_p)->portField() = OMIT_VALUE;
//        Free($1);
      }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1840 "SIP_parse.y"
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

  case 317:

/* Line 1806 of yacc.c  */
#line 1850 "SIP_parse.y"
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

  case 318:

/* Line 1806 of yacc.c  */
#line 1864 "SIP_parse.y"
    {
        headerptr->p__DCS__OSPS()().OSPS__tag()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1870 "SIP_parse.y"
    {
        headerptr->p__DCS__trace__pty__id()().name__addr()=*(yyvsp[(2) - (2)].naddr);
        delete (yyvsp[(2) - (2)].naddr);
      }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1877 "SIP_parse.y"
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

  case 321:

/* Line 1806 of yacc.c  */
#line 1892 "SIP_parse.y"
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

  case 322:

/* Line 1806 of yacc.c  */
#line 1907 "SIP_parse.y"
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

  case 323:

/* Line 1806 of yacc.c  */
#line 1922 "SIP_parse.y"
    {
        (yyval.sec_mech_list)= new Security__mechanism__list;
        (*(yyval.sec_mech_list))[0]=*(yyvsp[(1) - (1)].sec_mech);
        delete (yyvsp[(1) - (1)].sec_mech);
      }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1927 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].sec_mech_list)->size_of();
        (yyval.sec_mech_list)=(yyvsp[(1) - (3)].sec_mech_list);
        (*(yyval.sec_mech_list))[a] = *(yyvsp[(3) - (3)].sec_mech);
        delete (yyvsp[(3) - (3)].sec_mech);
      }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1935 "SIP_parse.y"
    {
        (yyval.sec_mech) = new Security__mechanism;
        (yyval.sec_mech)->mechanism__name()= (yyvsp[(2) - (2)].sv);
        (yyval.sec_mech)->mechanism__params()=OMIT_VALUE;
//        Free($2);
      }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1941 "SIP_parse.y"
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

  case 327:

/* Line 1806 of yacc.c  */
#line 1951 "SIP_parse.y"
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

  case 328:

/* Line 1806 of yacc.c  */
#line 1966 "SIP_parse.y"
    {
        (yyval.route_list)= new RouteBody__List;
        (*(yyval.route_list))[0]=*(yyvsp[(1) - (1)].route_val);
        delete (yyvsp[(1) - (1)].route_val);
      }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1971 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].route_list)->size_of();
        (yyval.route_list)=(yyvsp[(1) - (3)].route_list);
        (*(yyval.route_list))[a] = *(yyvsp[(3) - (3)].route_val);
        delete (yyvsp[(3) - (3)].route_val);
      }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1979 "SIP_parse.y"
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

  case 331:

/* Line 1806 of yacc.c  */
#line 1993 "SIP_parse.y"
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

  case 332:

/* Line 1806 of yacc.c  */
#line 2006 "SIP_parse.y"
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

  case 333:

/* Line 1806 of yacc.c  */
#line 2017 "SIP_parse.y"
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

  case 334:

/* Line 1806 of yacc.c  */
#line 2030 "SIP_parse.y"
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

  case 335:

/* Line 1806 of yacc.c  */
#line 2045 "SIP_parse.y"
    {
        (yyval.a_t_list)= new Media__auth__token__list;
        (*(yyval.a_t_list))[0]=str2hex((yyvsp[(2) - (2)].sv));
        //Free $2;
      }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 2050 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].a_t_list)->size_of();
        (yyval.a_t_list)=(yyvsp[(1) - (4)].a_t_list);
        (*(yyval.a_t_list))[a] = str2hex((yyvsp[(4) - (4)].sv));
        //Free $4;
      }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 2058 "SIP_parse.y"
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

  case 338:

/* Line 1806 of yacc.c  */
#line 2073 "SIP_parse.y"
    {
        (yyval.d_list)= new Request__disp__directive__list;
        (*(yyval.d_list))[0]=(yyvsp[(2) - (2)].sv);
//        Free($2);
      }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 2078 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].d_list)->size_of();
        (yyval.d_list)=(yyvsp[(1) - (4)].d_list);
        (*(yyval.d_list))[a] = (yyvsp[(4) - (4)].sv);
//        Free($4);
      }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 2086 "SIP_parse.y"
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

  case 341:

/* Line 1806 of yacc.c  */
#line 2101 "SIP_parse.y"
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

  case 342:

/* Line 1806 of yacc.c  */
#line 2116 "SIP_parse.y"
    {
        (yyval.c_list)= new Contact__list;
        (*(yyval.c_list))[0]=*(yyvsp[(1) - (1)].p_list);
        delete (yyvsp[(1) - (1)].p_list);
      }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 2121 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].c_list)->size_of();
        (yyval.c_list)=(yyvsp[(1) - (3)].c_list);
        (*(yyval.c_list))[a] = *(yyvsp[(3) - (3)].p_list);
        delete (yyvsp[(3) - (3)].p_list);
      }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 2129 "SIP_parse.y"
    {
        (yyval.p_list)= new GenericParam__List(NULL_VALUE);
//        Free($2);
      }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 2133 "SIP_parse.y"
    {
//        Free($2);
        (yyval.p_list)=paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 2141 "SIP_parse.y"
    {
        headerptr->session__expires()().deltaSec() = (yyvsp[(3) - (3)].sv);
        headerptr->session__expires()().se__params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 2146 "SIP_parse.y"
    {
        headerptr->session__expires()().deltaSec() = (yyvsp[(3) - (4)].sv);
        headerptr->session__expires()().se__params()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 2156 "SIP_parse.y"
    {
        headerptr->session__id()().sessionID() = (yyvsp[(3) - (3)].sv);
        headerptr->session__id()().se__params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 2161 "SIP_parse.y"
    {
        headerptr->session__id()().sessionID() = (yyvsp[(3) - (4)].sv);
        headerptr->session__id()().se__params()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 2171 "SIP_parse.y"
    {
        headerptr->min__SE()().deltaSec() = (yyvsp[(3) - (3)].sv);
        headerptr->min__SE()().params() = OMIT_VALUE;
//        Free($3);
      }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 2176 "SIP_parse.y"
    {
        headerptr->min__SE()().deltaSec() = (yyvsp[(3) - (4)].sv);
        headerptr->min__SE()().params()() = *paramptr;
//        Free($3);
        delete paramptr;
        paramptr=new GenericParam__List;
        paramcount=0;
      }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 2186 "SIP_parse.y"
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

  case 353:

/* Line 1806 of yacc.c  */
#line 2201 "SIP_parse.y"
    {
        (yyval.history_entry_list) = new Hi__Entry__list;
        (*(yyval.history_entry_list))[0] = *(yyvsp[(1) - (1)].history_entry);
        delete (yyvsp[(1) - (1)].history_entry);
      }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 2206 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].history_entry_list)->size_of();
        (yyval.history_entry_list)=(yyvsp[(1) - (3)].history_entry_list);
        (*(yyval.history_entry_list))[a] = *(yyvsp[(3) - (3)].history_entry);
        delete (yyvsp[(3) - (3)].history_entry);
      }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 2214 "SIP_parse.y"
    {
        (yyval.history_entry)= new Hi__Entry;
        (yyval.history_entry)->nameAddr()=*(yyvsp[(1) - (1)].naddr);
        (yyval.history_entry)->hi__params()=OMIT_VALUE;
        delete (yyvsp[(1) - (1)].naddr);
      }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 2220 "SIP_parse.y"
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

  case 357:

/* Line 1806 of yacc.c  */
#line 2231 "SIP_parse.y"
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

  case 358:

/* Line 1806 of yacc.c  */
#line 2254 "SIP_parse.y"
    {
        headerptr->p__charging__function__address()().charge__addr__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;

      }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 2263 "SIP_parse.y"
    {}
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 2264 "SIP_parse.y"
    {}
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 2267 "SIP_parse.y"
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

  case 362:

/* Line 1806 of yacc.c  */
#line 2282 "SIP_parse.y"
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

  case 363:

/* Line 1806 of yacc.c  */
#line 2296 "SIP_parse.y"
    {
        (yyval.an_spec_list)= new Access__net__spec__list;
        (*(yyval.an_spec_list))[0]=*(yyvsp[(1) - (1)].an_spec);
        delete (yyvsp[(1) - (1)].an_spec);
      }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 2301 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].an_spec_list)->size_of();
        (yyval.an_spec_list)=(yyvsp[(1) - (3)].an_spec_list);
        (*(yyval.an_spec_list))[a] = *(yyvsp[(3) - (3)].an_spec);
        delete (yyvsp[(3) - (3)].an_spec);
      }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 2309 "SIP_parse.y"
    {
        (yyval.an_spec)= new Access__net__spec;
        (yyval.an_spec)->access__type()=(yyvsp[(2) - (2)].sv);
        (yyval.an_spec)->access__info()=OMIT_VALUE;
//        Free($2);
      }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 2315 "SIP_parse.y"
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

  case 367:

/* Line 1806 of yacc.c  */
#line 2327 "SIP_parse.y"
    {
        headerptr->answer__mode()().answer__mode()=(yyvsp[(3) - (3)].sv);
        headerptr->answer__mode()().answer__mode__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 2332 "SIP_parse.y"
    {
        headerptr->answer__mode()().answer__mode()=(yyvsp[(3) - (4)].sv);
        headerptr->answer__mode()().answer__mode__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 2342 "SIP_parse.y"
    {
        headerptr->priv__answer__mode()().answer__mode()=(yyvsp[(3) - (3)].sv);
        headerptr->priv__answer__mode()().answer__mode__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 2347 "SIP_parse.y"
    {
        headerptr->priv__answer__mode()().answer__mode()=(yyvsp[(3) - (4)].sv);
        headerptr->priv__answer__mode()().answer__mode__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 2357 "SIP_parse.y"
    {
        headerptr->alert__mode()().alert__mode()=(yyvsp[(3) - (3)].sv);
        headerptr->alert__mode()().alert__mode__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 2362 "SIP_parse.y"
    {
        headerptr->alert__mode()().alert__mode()=(yyvsp[(3) - (4)].sv);
        headerptr->alert__mode()().alert__mode__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 2372 "SIP_parse.y"
    {
        headerptr->refer__sub()().refer__sub__value()=(yyvsp[(3) - (3)].sv);
        headerptr->refer__sub()().refer__sub__param()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 2377 "SIP_parse.y"
    {
        headerptr->refer__sub()().refer__sub__value()=(yyvsp[(3) - (4)].sv);
        headerptr->refer__sub()().refer__sub__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 2387 "SIP_parse.y"
    {
        headerptr->p__alerting__mode()().alerting__type()=(yyvsp[(3) - (3)].sv);
        headerptr->p__alerting__mode()().alerting__info()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 2392 "SIP_parse.y"
    {
        headerptr->p__alerting__mode()().alerting__type()=(yyvsp[(3) - (4)].sv);
        headerptr->p__alerting__mode()().alerting__info()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 2402 "SIP_parse.y"
    {
        headerptr->p__answer__state()().answer__type()=(yyvsp[(3) - (3)].sv);
        headerptr->p__answer__state()().answer__info()=OMIT_VALUE;
//        Free($3);
      }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 2407 "SIP_parse.y"
    {
        headerptr->p__answer__state()().answer__type()=(yyvsp[(3) - (4)].sv);
        headerptr->p__answer__state()().answer__info()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
//        Free($3);
      }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 2417 "SIP_parse.y"
    {
        headerptr->p__Area__Info()().p__Area__Info__Value()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
      }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 2425 "SIP_parse.y"
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

  case 381:

/* Line 1806 of yacc.c  */
#line 2440 "SIP_parse.y"
    {
        (yyval.n_spec_list)= new Network__spec__list;
        (*(yyval.n_spec_list))[0]=*(yyvsp[(1) - (1)].n_spec);
        delete (yyvsp[(1) - (1)].n_spec);
      }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 2445 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].n_spec_list)->size_of();
        (yyval.n_spec_list)=(yyvsp[(1) - (3)].n_spec_list);
        (*(yyval.n_spec_list))[a] = *(yyvsp[(3) - (3)].n_spec);
        delete (yyvsp[(3) - (3)].n_spec);
      }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 2452 "SIP_parse.y"
    {
        (yyval.n_spec)= new Network__spec;
        (yyval.n_spec)->network__id()=(yyvsp[(2) - (2)].sv);
        (yyval.n_spec)->network__par()=OMIT_VALUE;
//        Free($2);
      }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 2458 "SIP_parse.y"
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

  case 385:

/* Line 1806 of yacc.c  */
#line 2470 "SIP_parse.y"
    {
        headerptr->p__called__party__id()().called__pty__id()=*(yyvsp[(2) - (2)].naddr);
        headerptr->p__called__party__id()().cpid__param()=OMIT_VALUE;
        delete (yyvsp[(2) - (2)].naddr);
      }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 2475 "SIP_parse.y"
    {
        headerptr->p__called__party__id()().called__pty__id()=*(yyvsp[(2) - (3)].naddr);
        headerptr->p__called__party__id()().cpid__param()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(2) - (3)].naddr);
      }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 2485 "SIP_parse.y"
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

  case 388:

/* Line 1806 of yacc.c  */
#line 2500 "SIP_parse.y"
    {
        (yyval.u_spec_list) = new P__Assoc__uri__spec__list;
        (*(yyval.u_spec_list))[0] = *(yyvsp[(1) - (1)].u_spec);
        delete (yyvsp[(1) - (1)].u_spec);
      }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 2505 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].u_spec_list)->size_of();
        (yyval.u_spec_list)=(yyvsp[(1) - (3)].u_spec_list);
        (*(yyval.u_spec_list))[a] = *(yyvsp[(3) - (3)].u_spec);
        delete (yyvsp[(3) - (3)].u_spec);
      }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 2513 "SIP_parse.y"
    {
        (yyval.u_spec)= new P__Assoc__uri__spec;
        (yyval.u_spec)->p__asso__uri()=*(yyvsp[(1) - (1)].naddr);
        (yyval.u_spec)->ai__params()=OMIT_VALUE;
        delete (yyvsp[(1) - (1)].naddr);
      }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 2519 "SIP_parse.y"
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

  case 392:

/* Line 1806 of yacc.c  */
#line 2530 "SIP_parse.y"
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

  case 393:

/* Line 1806 of yacc.c  */
#line 2545 "SIP_parse.y"
    {
        (yyval.divparam_list) = new Diversion__params__list;
        (*(yyval.divparam_list))[0] = *(yyvsp[(1) - (1)].divparam);
        delete (yyvsp[(1) - (1)].divparam);
      }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 2550 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (3)].divparam_list)->size_of();
        (yyval.divparam_list)=(yyvsp[(1) - (3)].divparam_list);
        (*(yyval.divparam_list))[a] = *(yyvsp[(3) - (3)].divparam);
        delete (yyvsp[(3) - (3)].divparam);
      }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 2558 "SIP_parse.y"
    {
        (yyval.divparam)= new Diversion__params;
        (yyval.divparam)->nameAddr()=*(yyvsp[(1) - (1)].naddr);
        (yyval.divparam)->div__params()=OMIT_VALUE;
        delete (yyvsp[(1) - (1)].naddr);
      }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 2564 "SIP_parse.y"
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

  case 397:

/* Line 1806 of yacc.c  */
#line 2575 "SIP_parse.y"
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

  case 398:

/* Line 1806 of yacc.c  */
#line 2584 "SIP_parse.y"
    {
        (yyval.naddr)= new NameAddr;
        (yyval.naddr)->displayName() = OMIT_VALUE;
        (yyval.naddr)->addrSpec()= *uriptr;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 2595 "SIP_parse.y"
    {
      headerptr->subscription__state()().substate__value() =(yyvsp[(3) - (3)].sv);
      headerptr->subscription__state()().subexp__params()= OMIT_VALUE;
//      Free($3);
    }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 2600 "SIP_parse.y"
    {
      headerptr->subscription__state()().substate__value() =(yyvsp[(3) - (4)].sv);
      headerptr->subscription__state()().subexp__params()= *paramptr;
      paramcount=0;
      delete paramptr;
      paramptr=new GenericParam__List;

//      Free($3);
    }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 2611 "SIP_parse.y"
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

  case 402:

/* Line 1806 of yacc.c  */
#line 2626 "SIP_parse.y"
    {
        (yyval.e_list) = new Event__type__list;
        (*(yyval.e_list))[0] = *(yyvsp[(2) - (2)].e_type);
        delete (yyvsp[(2) - (2)].e_type);
      }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 2631 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].e_list)->size_of();
        (yyval.e_list)=(yyvsp[(1) - (4)].e_list);
        (*(yyval.e_list))[a] = *(yyvsp[(4) - (4)].e_type);
        delete (yyvsp[(4) - (4)].e_type);
      }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 2640 "SIP_parse.y"
    {
        headerptr->event()().event__type()=*(yyvsp[(3) - (3)].e_type);
        headerptr->event()().event__params()=OMIT_VALUE;
        delete (yyvsp[(3) - (3)].e_type);
      }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 2645 "SIP_parse.y"
    {
        headerptr->event()().event__type()=*(yyvsp[(3) - (4)].e_type);
        headerptr->event()().event__params()=*paramptr;
        paramcount=0;
        delete paramptr;
        paramptr=new GenericParam__List;
        delete (yyvsp[(3) - (4)].e_type);
      }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 2655 "SIP_parse.y"
    {
      (yyval.e_type) = new Event__type;
      (yyval.e_type)->event__package()= (yyvsp[(1) - (1)].sv);
      (yyval.e_type)->event__templates()=OMIT_VALUE;
//      Free($1);
      }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 2661 "SIP_parse.y"
    {
      (yyval.e_type) = new Event__type;
      (yyval.e_type)->event__package()= (yyvsp[(1) - (3)].sv);
      (yyval.e_type)->event__templates()=*(yyvsp[(3) - (3)].e_template_list);
      delete (yyvsp[(3) - (3)].e_template_list);
//      Free($1);
      }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 2670 "SIP_parse.y"
    {
        (yyval.e_template_list) = new Event__template__list;
        (*(yyval.e_template_list))[0] = (yyvsp[(2) - (2)].sv);
//        Free($2);
      }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 2675 "SIP_parse.y"
    {
        int a=(yyvsp[(1) - (4)].e_template_list)->size_of();
        (yyval.e_template_list)=(yyvsp[(1) - (4)].e_template_list);
        (*(yyval.e_template_list))[a] = (yyvsp[(4) - (4)].sv);
//        Free($4);
      }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 2690 "SIP_parse.y"
    {
        headerptr->reason()().reasons()[reasoncount].protocol()= (yyvsp[(2) - (2)].sv);
        headerptr->reason()().reasons()[reasoncount].reasonValues()=OMIT_VALUE;
        reasoncount++;
//        Free($2);
      }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 2696 "SIP_parse.y"
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

  case 415:

/* Line 1806 of yacc.c  */
#line 2707 "SIP_parse.y"
    {}
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 2714 "SIP_parse.y"
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

  case 420:

/* Line 1806 of yacc.c  */
#line 2725 "SIP_parse.y"
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

  case 421:

/* Line 1806 of yacc.c  */
#line 2735 "SIP_parse.y"
    {
        headerptr->passertedID()().ids()[passertedidcount].
                    addrSpecUnion()= *uriptr;
        passertedidcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 2745 "SIP_parse.y"
    {}
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 2752 "SIP_parse.y"
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

  case 427:

/* Line 1806 of yacc.c  */
#line 2763 "SIP_parse.y"
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

  case 428:

/* Line 1806 of yacc.c  */
#line 2773 "SIP_parse.y"
    {
        headerptr->ppreferredID()().ids()[ppreferredidcount].
                    addrSpecUnion()= *uriptr;
        ppreferredidcount++;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 2783 "SIP_parse.y"
    {}
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 2790 "SIP_parse.y"
    {
      headerptr->privacy()().privacyValues()[privacycount]=(yyvsp[(1) - (1)].sv);
      privacycount++;
//      Free($1);
    }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 2797 "SIP_parse.y"
    {
        headerptr->rack()().response__num()= str2int((yyvsp[(3) - (7)].sv)); /*Free($3);*/
        headerptr->rack()().seqNumber()= str2int((yyvsp[(5) - (7)].sv)); /*Free($5);*/
        headerptr->rack()().method()= (yyvsp[(7) - (7)].sv);
//        Free($7);
      }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 2805 "SIP_parse.y"
    {
        headerptr->rseq()().response__num() = str2int((yyvsp[(3) - (3)].sv)); /*Free($3);*/
      }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 2810 "SIP_parse.y"
    {}
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 2813 "SIP_parse.y"
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

  case 437:

/* Line 1806 of yacc.c  */
#line 2827 "SIP_parse.y"
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

  case 438:

/* Line 1806 of yacc.c  */
#line 2839 "SIP_parse.y"
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

  case 439:

/* Line 1806 of yacc.c  */
#line 2849 "SIP_parse.y"
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

  case 440:

/* Line 1806 of yacc.c  */
#line 2858 "SIP_parse.y"
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

  case 441:

/* Line 1806 of yacc.c  */
#line 2867 "SIP_parse.y"
    {
        headerptr->replyTo()().addressField().addrSpecUnion()= *uriptr;
        headerptr->replyTo()().replyToParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 2876 "SIP_parse.y"
    {
        headerptr->undefinedHeader__List()()[undefcount].headerName() = (yyvsp[(1) - (2)].sv);
        headerptr->undefinedHeader__List()()[undefcount].headerValue()=trim((yyvsp[(2) - (2)].sv));
        undefcount++;
//        Free($1);Free($2);
      }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 2884 "SIP_parse.y"
    {}
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 2891 "SIP_parse.y"
    {}
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 2896 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].viaParams()=*paramptr;
        viacount++;
        delete paramptr;
        paramptr= new GenericParam__List;
        paramcount=0;
      }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 2903 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].viaParams()=OMIT_VALUE;
        viacount++;
      }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 2910 "SIP_parse.y"
    {
       headerptr->via()().viaBody()[viacount].sentProtocol().protocolName()=(yyvsp[(1) - (5)].sv);
       headerptr->via()().viaBody()[viacount].sentProtocol().protocolVersion()=(yyvsp[(3) - (5)].sv);
       headerptr->via()().viaBody()[viacount].sentProtocol().transport()=(yyvsp[(5) - (5)].sv);
//       Free($1);Free($3);Free($5);
     }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 2918 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (5)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(5) - (5)].iv);
//        Free($1);
      }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 2923 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (4)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(4) - (4)].iv);
//        Free($1);
      }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 2928 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (4)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(4) - (4)].iv);
//        Free($1);
      }
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 2933 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (3)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=(yyvsp[(3) - (3)].iv);
//        Free($1);
      }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 2938 "SIP_parse.y"
    {
        headerptr->via()().viaBody()[viacount].sentBy().host()=trimOnIPv6((yyvsp[(1) - (1)].sv));
        headerptr->via()().viaBody()[viacount].sentBy().portField()=OMIT_VALUE;
//        Free($1);
      }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 2945 "SIP_parse.y"
    {}
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 2946 "SIP_parse.y"
    {}
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 2949 "SIP_parse.y"
    {
        headerptr->minExpires()().deltaSec()= (yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 459:

/* Line 1806 of yacc.c  */
#line 2955 "SIP_parse.y"
    {
        headerptr->mimeVersion()().majorNumber()=str2int((yyvsp[(3) - (5)].sv)); /*Free($3);*/
        headerptr->mimeVersion()().minorNumber()=str2int((yyvsp[(5) - (5)].sv)); /*Free($5); */
      }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 2961 "SIP_parse.y"
    {}
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 2964 "SIP_parse.y"
    {
        headerptr->userAgent()().userAgentBody()[useragentcount]= (yyvsp[(1) - (1)].sv);
        useragentcount++;
        Free((yyvsp[(1) - (1)].sv));
      }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 2969 "SIP_parse.y"
    {
        headerptr->userAgent()().userAgentBody()[useragentcount]= (yyvsp[(3) - (3)].sv);
        useragentcount++;
        Free((yyvsp[(3) - (3)].sv));
      }
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 2976 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (3)].sv)); /*Free($3);*/
        headerptr->timestamp()().timeValue()().minorDigit()=OMIT_VALUE;
        headerptr->timestamp()().delay() = OMIT_VALUE;
      }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 2981 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (5)].sv)); /*Free($3);*/
        headerptr->timestamp()().timeValue()().minorDigit()=str2int((yyvsp[(5) - (5)].sv)); /*Free($5);*/
        headerptr->timestamp()().delay() = OMIT_VALUE;
      }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 2986 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (5)].sv)); /*Free($3);*/
        headerptr->timestamp()().timeValue()().minorDigit()=OMIT_VALUE;
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(5) - (5)].sv)); /*Free($5);*/
        headerptr->timestamp()().delay()().minorDigit()=OMIT_VALUE;
      }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 2992 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (7)].sv)); //Free($3);
        headerptr->timestamp()().timeValue()().minorDigit()=str2int((yyvsp[(5) - (7)].sv)); //Free($5);
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(7) - (7)].sv)); //Free($7);
        headerptr->timestamp()().delay()().minorDigit()=OMIT_VALUE;
      }
    break;

  case 467:

/* Line 1806 of yacc.c  */
#line 2998 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (7)].sv)); //Free($3);
        headerptr->timestamp()().timeValue()().minorDigit()=OMIT_VALUE;
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(5) - (7)].sv)); //Free($5);
        headerptr->timestamp()().delay()().minorDigit()=str2int((yyvsp[(7) - (7)].sv)); //Free($7);
      }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 3005 "SIP_parse.y"
    {
        headerptr->timestamp()().timeValue()().majorDigit()=str2int((yyvsp[(3) - (9)].sv)); //Free($3);
        headerptr->timestamp()().timeValue()().minorDigit()=str2int((yyvsp[(5) - (9)].sv)); //Free($5);
        headerptr->timestamp()().delay()().majorDigit()=str2int((yyvsp[(7) - (9)].sv)); //Free($7);
        headerptr->timestamp()().delay()().minorDigit()=str2int((yyvsp[(9) - (9)].sv)); //Free($9);
      }
    break;

  case 469:

/* Line 1806 of yacc.c  */
#line 3013 "SIP_parse.y"
    {
        headerptr->supported()().optionsTags()=OMIT_VALUE;
      }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 3016 "SIP_parse.y"
    {
        if(!suppcount){
          headerptr->supported()().optionsTags()= *optptr;
          delete optptr;
        }
        suppcount=optioncount;
      }
    break;

  case 471:

/* Line 1806 of yacc.c  */
#line 3025 "SIP_parse.y"
    {
        if(!reqcount){
          headerptr->require()().optionsTags()= *optptr;
          delete optptr;
        }
        reqcount=optioncount;
      }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 3034 "SIP_parse.y"
    {
        if(!recroutecount){
          headerptr->recordRoute()().routeBody()= *routeptr;
          delete routeptr;
        }
        recroutecount=rcount;
      }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 3043 "SIP_parse.y"
    {
        headerptr->organization()().organization() = trim((yyvsp[(2) - (2)].sv));
//        Free($2);
      }
    break;

  case 474:

/* Line 1806 of yacc.c  */
#line 3049 "SIP_parse.y"
    {
        headerptr->date()().sipDate() = trim((yyvsp[(3) - (3)].sv));
//        Free($3);
      }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 3055 "SIP_parse.y"
    {
        headerptr->cSeq()().seqNumber() = str2int((yyvsp[(3) - (5)].sv)); //Free($3);
        headerptr->cSeq()().method()= (yyvsp[(5) - (5)].sv);
//        Free($5);
      }
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 3062 "SIP_parse.y"
    {}
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 3069 "SIP_parse.y"
    {
        headerptr->callInfo()().callInfoBody()()[callinfocount].url()=(yyvsp[(3) - (4)].sv);
        headerptr->callInfo()().callInfoBody()()[callinfocount].infoParams()=
                                                                     OMIT_VALUE;
        callinfocount++;
//        Free($3);
      }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 3076 "SIP_parse.y"
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

  case 481:

/* Line 1806 of yacc.c  */
#line 3088 "SIP_parse.y"
    {
        headerptr->callId()().callid()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 3094 "SIP_parse.y"
    {}
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 3095 "SIP_parse.y"
    {}
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 3098 "SIP_parse.y"
    {
        if(!acceptcount){headerptr->accept()().acceptArgs()= OMIT_VALUE;};
      }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 3101 "SIP_parse.y"
    {}
    break;

  case 488:

/* Line 1806 of yacc.c  */
#line 3108 "SIP_parse.y"
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

  case 489:

/* Line 1806 of yacc.c  */
#line 3128 "SIP_parse.y"
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

  case 490:

/* Line 1806 of yacc.c  */
#line 3154 "SIP_parse.y"
    {
        if(!aceptenccount){headerptr->acceptEncoding()().contentCoding()
                    = OMIT_VALUE;};
      }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 3158 "SIP_parse.y"
    {}
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 3161 "SIP_parse.y"
    {
        headerptr->acceptEncoding()().contentCoding()()[aceptenccount]=trim((yyvsp[(2) - (2)].sv));
        aceptenccount++;
//        Free($2);
      }
    break;

  case 493:

/* Line 1806 of yacc.c  */
#line 3166 "SIP_parse.y"
    {
        headerptr->acceptEncoding()().contentCoding()()[aceptenccount]=trim((yyvsp[(4) - (4)].sv));
        aceptenccount++;
//        Free($4);
      }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 3173 "SIP_parse.y"
    {
        headerptr->acceptLanguage()().languageBody()=OMIT_VALUE;
      }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 3176 "SIP_parse.y"
    {}
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 3183 "SIP_parse.y"
    {
        headerptr->acceptLanguage()().languageBody()()[acceptlangcount].
                      languageRange()=(yyvsp[(2) - (2)].sv);
        headerptr->acceptLanguage()().languageBody()()[acceptlangcount].
                      acceptParam()=OMIT_VALUE;
        acceptlangcount++;
//        Free($2);
      }
    break;

  case 499:

/* Line 1806 of yacc.c  */
#line 3191 "SIP_parse.y"
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

  case 500:

/* Line 1806 of yacc.c  */
#line 3206 "SIP_parse.y"
    {}
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 3209 "SIP_parse.y"
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

  case 502:

/* Line 1806 of yacc.c  */
#line 3219 "SIP_parse.y"
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

  case 503:

/* Line 1806 of yacc.c  */
#line 3235 "SIP_parse.y"
    {}
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 3238 "SIP_parse.y"
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

  case 505:

/* Line 1806 of yacc.c  */
#line 3248 "SIP_parse.y"
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

  case 506:

/* Line 1806 of yacc.c  */
#line 3266 "SIP_parse.y"
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

  case 507:

/* Line 1806 of yacc.c  */
#line 3278 "SIP_parse.y"
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

  case 508:

/* Line 1806 of yacc.c  */
#line 3289 "SIP_parse.y"
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

  case 509:

/* Line 1806 of yacc.c  */
#line 3299 "SIP_parse.y"
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

  case 510:

/* Line 1806 of yacc.c  */
#line 3308 "SIP_parse.y"
    {
        headerptr->toField()().addressField().nameAddr().displayName()=OMIT_VALUE;
        headerptr->toField()().addressField().nameAddr().addrSpec()= *uriptr;
        headerptr->toField()().toParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 511:

/* Line 1806 of yacc.c  */
#line 3316 "SIP_parse.y"
    {
        headerptr->toField()().addressField().addrSpecUnion()= *uriptr;
        headerptr->toField()().toParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 512:

/* Line 1806 of yacc.c  */
#line 3325 "SIP_parse.y"
    {
        headerptr->contact()().contactBody().wildcard()=(yyvsp[(3) - (3)].sv);
//        Free($3);
      }
    break;

  case 513:

/* Line 1806 of yacc.c  */
#line 3329 "SIP_parse.y"
    {}
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 3332 "SIP_parse.y"
    {}
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 3333 "SIP_parse.y"
    {}
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 3336 "SIP_parse.y"
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

  case 517:

/* Line 1806 of yacc.c  */
#line 3352 "SIP_parse.y"
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

  case 518:

/* Line 1806 of yacc.c  */
#line 3367 "SIP_parse.y"
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

  case 519:

/* Line 1806 of yacc.c  */
#line 3380 "SIP_parse.y"
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

  case 520:

/* Line 1806 of yacc.c  */
#line 3393 "SIP_parse.y"
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

  case 521:

/* Line 1806 of yacc.c  */
#line 3405 "SIP_parse.y"
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

  case 522:

/* Line 1806 of yacc.c  */
#line 3418 "SIP_parse.y"
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

  case 523:

/* Line 1806 of yacc.c  */
#line 3432 "SIP_parse.y"
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

  case 524:

/* Line 1806 of yacc.c  */
#line 3444 "SIP_parse.y"
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

  case 525:

/* Line 1806 of yacc.c  */
#line 3454 "SIP_parse.y"
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

  case 526:

/* Line 1806 of yacc.c  */
#line 3463 "SIP_parse.y"
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

  case 527:

/* Line 1806 of yacc.c  */
#line 3472 "SIP_parse.y"
    {
        headerptr->fromField()().addressField().addrSpecUnion()= *uriptr;
        headerptr->fromField()().fromParams()=OMIT_VALUE;
        delete uriptr;
        uriptr= new SipUrl;
        urlparamcount=headercount=0;
      }
    break;

  case 528:

/* Line 1806 of yacc.c  */
#line 3481 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(1) - (1)].sv);}
    break;

  case 529:

/* Line 1806 of yacc.c  */
#line 3482 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(1) - (1)].sv);}
    break;

  case 530:

/* Line 1806 of yacc.c  */
#line 3485 "SIP_parse.y"
    {}
    break;

  case 531:

/* Line 1806 of yacc.c  */
#line 3486 "SIP_parse.y"
    {}
    break;

  case 532:

/* Line 1806 of yacc.c  */
#line 3489 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (4)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(4) - (4)].sv);
        paramcount++;
//        Free($2);Free($4);
      }
    break;

  case 533:

/* Line 1806 of yacc.c  */
#line 3495 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (3)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(3) - (3)].sv);
        paramcount++;
//        Free($1);Free($3);
      }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 3501 "SIP_parse.y"
    {}
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 3502 "SIP_parse.y"
    {}
    break;

  case 536:

/* Line 1806 of yacc.c  */
#line 3507 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (2)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(2) - (2)].sv);
        paramcount++;
//        Free($1);
//        Free($2);
      }
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 3514 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (1)].sv);
        (*paramptr)[paramcount].paramValue()=OMIT_VALUE;
        paramcount++;
//        Free($1);
      }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 3521 "SIP_parse.y"
    { }
    break;

  case 539:

/* Line 1806 of yacc.c  */
#line 3522 "SIP_parse.y"
    {}
    break;

  case 540:

/* Line 1806 of yacc.c  */
#line 3525 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (4)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(4) - (4)].sv);
        paramcount++;
      }
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 3530 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (3)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(3) - (3)].sv);
        paramcount++;
      }
    break;

  case 542:

/* Line 1806 of yacc.c  */
#line 3535 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (3)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(3) - (3)].sv);
        paramcount++;
      }
    break;

  case 543:

/* Line 1806 of yacc.c  */
#line 3540 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (2)].sv);
        (*paramptr)[paramcount].paramValue()=(yyvsp[(2) - (2)].sv);
        paramcount++;
      }
    break;

  case 544:

/* Line 1806 of yacc.c  */
#line 3545 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(2) - (2)].sv);
        (*paramptr)[paramcount].paramValue()=OMIT_VALUE;
        paramcount++;
      }
    break;

  case 545:

/* Line 1806 of yacc.c  */
#line 3550 "SIP_parse.y"
    {
        (*paramptr)[paramcount].id()=(yyvsp[(1) - (1)].sv);
        (*paramptr)[paramcount].paramValue()=OMIT_VALUE;
        paramcount++;
      }
    break;

  case 546:

/* Line 1806 of yacc.c  */
#line 3559 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(3) - (3)].sv);}
    break;

  case 547:

/* Line 1806 of yacc.c  */
#line 3560 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(2) - (2)].sv);}
    break;

  case 552:

/* Line 1806 of yacc.c  */
#line 3569 "SIP_parse.y"
    {
        uriptr->urlParameters()()[urlparamcount].id()=(yyvsp[(1) - (2)].sv);
        uriptr->urlParameters()()[urlparamcount].paramValue()=(yyvsp[(2) - (2)].sv);
        urlparamcount++;
//        Free($1);Free($2);
      }
    break;

  case 553:

/* Line 1806 of yacc.c  */
#line 3575 "SIP_parse.y"
    {
        uriptr->urlParameters()()[urlparamcount].id()=(yyvsp[(1) - (1)].sv);
        uriptr->urlParameters()()[urlparamcount].paramValue()=OMIT_VALUE;
        urlparamcount++;
//        Free($1);
    }
    break;

  case 554:

/* Line 1806 of yacc.c  */
#line 3583 "SIP_parse.y"
    {(yyval.sv)=(yyvsp[(2) - (2)].sv);}
    break;

  case 556:

/* Line 1806 of yacc.c  */
#line 3589 "SIP_parse.y"
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

  case 560:

/* Line 1806 of yacc.c  */
#line 3609 "SIP_parse.y"
    {}
    break;

  case 561:

/* Line 1806 of yacc.c  */
#line 3611 "SIP_parse.y"
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

  case 562:

/* Line 1806 of yacc.c  */
#line 3622 "SIP_parse.y"
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

  case 563:

/* Line 1806 of yacc.c  */
#line 3634 "SIP_parse.y"
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

  case 564:

/* Line 1806 of yacc.c  */
#line 3646 "SIP_parse.y"
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

  case 565:

/* Line 1806 of yacc.c  */
#line 3662 "SIP_parse.y"
    { uriptr->userInfo() = OMIT_VALUE;}
    break;

  case 566:

/* Line 1806 of yacc.c  */
#line 3663 "SIP_parse.y"
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

  case 567:

/* Line 1806 of yacc.c  */
#line 3679 "SIP_parse.y"
    {
        uriptr->hostPort().host() = trimOnIPv6((yyvsp[(1) - (2)].sv));
//        Free($1);
      }
    break;

  case 568:

/* Line 1806 of yacc.c  */
#line 3685 "SIP_parse.y"
    {uriptr->hostPort().portField() = OMIT_VALUE;}
    break;

  case 569:

/* Line 1806 of yacc.c  */
#line 3686 "SIP_parse.y"
    {uriptr->hostPort().portField() = (yyvsp[(2) - (2)].iv);}
    break;

  case 572:

/* Line 1806 of yacc.c  */
#line 3693 "SIP_parse.y"
    {}
    break;

  case 573:

/* Line 1806 of yacc.c  */
#line 3694 "SIP_parse.y"
    {}
    break;

  case 575:

/* Line 1806 of yacc.c  */
#line 3700 "SIP_parse.y"
    {}
    break;

  case 580:

/* Line 1806 of yacc.c  */
#line 3711 "SIP_parse.y"
    {}
    break;

  case 581:

/* Line 1806 of yacc.c  */
#line 3714 "SIP_parse.y"
    {
        uriptr->headers()()[headercount].id()=(yyvsp[(1) - (3)].sv);
        uriptr->headers()()[headercount].paramValue()=(yyvsp[(3) - (3)].sv);
        headercount++;
//        Free($1);Free($3);
      }
    break;



/* Line 1806 of yacc.c  */
#line 9072 "SIP_parse_.tab.c"
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
#line 3725 "SIP_parse.y"

                    
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

