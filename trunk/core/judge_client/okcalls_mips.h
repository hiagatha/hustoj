/*
 * 
 *
 * This file is part of HUSTOJ.
 *
 * HUSTOJ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * HUSTOJ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HUSTOJ. if not, see <http://www.gnu.org/licenses/>.
 */
#include <sys/syscall.h>
#define HOJ_MAX_LIMIT -1
//C C++
int LANG_CV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,40,41,42,43,44,45,46,47,48,49,52,55,56,57,59,60,61,63,64,65,66,68,69,75,76,79,80,81,82,85,90,91,94,95,99,103,104,114,115,116,122,133,136,139,150,155,156,157,159,165,166,167,170,188,194,195,198,199,200,201,202,217,228,292,304,331,383,385,392,393,397,400,404,412,431,454,453,479,484,485,490,491,492,496,497,510,0};
//pascal
int LANG_PV[CALL_ARRAY_SIZE] = {0,3,4,54,85,174,191,248,0};
//java
int LANG_JV[CALL_ARRAY_SIZE]={0,160,169,365,375,481,491,251,241,98,108,263,273,282,2,3,5,32,36,49,50,60,70,74,77,87,97,82,85,88,92,94,104,122,126,127,148,152,177,182,192,202,208,216,230,240,250,272,320,337,347,357,382,392,393,394,395,396,397,400,401,402,403,404,405,406,409,419,429,412,430,447,479,487,338,348,358,6,16,26,64,73,398,407,416,420,451,0};
//ruby
int LANG_RV[CALL_ARRAY_SIZE] = {0,0};
//bash
int LANG_BV[CALL_ARRAY_SIZE]={0,3,4,5,6,19,20,33,45,54,63,64,65,78,122,125,140,174,175,183,191,192,195,197,199,200,201,202,221,248,0};
//python
int LANG_YV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,8,9,10,11,13,19,20,22,24,25,26,27,30,32,36,39,46,48,51,56,66,70,71,75,76,78,82,85,92,93,114,115,122,136,146,148,152,158,159,167,168,172,189,193,194,195,208,216,217,226,228,248,250,251,264,272,279,304,312,320,333,352,368,371,384,392,393,394,395,396,397,398,400,401,402,403,404,405,406,407,412,423,429,430,432,433,448,451,453,456,458,462,464,468,469,470,475,477,479,487,489,492,494,497,498,504,0};
//php
int LANG_PHV[CALL_ARRAY_SIZE] = {0,0};
//perl
int LANG_PLV[CALL_ARRAY_SIZE] = {0,0};
//c-sharp
int LANG_CSV[CALL_ARRAY_SIZE]={0,3,5,6,19,33,45,122,125,174,175,191,192,195,197,256,338,0};
//objective-c
int LANG_OV[CALL_ARRAY_SIZE] = {0,0};
//freebasic
int LANG_BASICV[CALL_ARRAY_SIZE] = {0,0};
//scheme
int LANG_SV[CALL_ARRAY_SIZE] = {0,0};
//lua
int LANG_LUAV[CALL_ARRAY_SIZE]={0,0};
//nodejs
int LANG_JSV[CALL_ARRAY_SIZE]={0,0};
//go-lang
int LANG_GOV[CALL_ARRAY_SIZE]={0,0};
//sqlite3
int LANG_SQLV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,12,13,16,17,18,20,21,22,25,28,32,36,40,41,44,49,51,52,57,64,70,85,90,92,100,119,122,127,148,152,167,168,174,177,197,216,272,320,360,392,393,395,396,397,398,400,401,402,404,405,406,407,408,409,412,430,432,433,459,461,462,465,468,469,477,487,492,497,0};
//fortran

int LANG_FV[CALL_ARRAY_SIZE]={0,2,3,4,6,85,122,392,393,397,404,405,412,453,479,0};
//matlab octave
int LANG_MV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,9,8,10,11,12,13,16,17,18,22,24,25,28,32,33,36,40,42,48,55,56,57,60,61,64,66,72,74,76,80,83,85,88,92,96,104,111,112,116,120,122,124,126,128,131,132,133,134,135,136,144,147,148,152,157,160,164,168,169,176,179,184,185,193,200,208,215,216,224,245,248,251,256,257,264,272,279,287,288,296,304,312,315,318,320,323,328,336,337,339,344,347,349,352,368,371,372,376,377,384,385,392,393,394,395,396,397,399,400,401,402,403,404,405,406,407,408,411,412,424,431,432,433,435,436,439,440,443,446,447,448,451,452,453,455,456,462,464,468,469,472,487,488,490,492,496,497,504,510,511,0};
