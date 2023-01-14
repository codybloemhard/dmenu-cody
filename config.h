/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static unsigned int topbar = 0;   /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int fuzzy = 1;
static const unsigned int border_width = 4;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=20"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eeeeee", "#111111" },
	[SchemeSel] =  { "#111111", "#eeeeee" },
	[SchemeNormHighlight] =  { "#ff0000", "#000000" },
	[SchemeSelHighlight] =  { "#ffff00", "#000000" },
	[SchemeOut] =  { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 4;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
