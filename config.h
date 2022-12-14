/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xb0;
static int centered = 1;
static int min_width = 500;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:style=Bold:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

#include "/home/tim/.config/colorscheme/colors.h"

static const char *colors[SchemeLast][2] = {
	// selected/unselected = current arrow key selection
	// active/passive = inside/outside query text

	/*     						fg         		bg       */
	// default
	[SchemeNorm]			= { inactive_fg,	inactive_bg },
	// selected passive
	[SchemeSel]				= { active_fg,		inactive_bg },
	// selected active
	[SchemeSelHighlight] 	= { debug, 			inactive_bg },
	// unselected active
	[SchemeNormHighlight] 	= { col3, 			inactive_bg },
	// no effect
	[SchemeOut] 			= { debug, 	debug },
	[SchemeOutHighlight] 	= { debug, 	debug },
	[SchemeHp] 				= { debug, 	debug },
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] = { OPAQUE, alpha },
    [SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 1;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 40;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
