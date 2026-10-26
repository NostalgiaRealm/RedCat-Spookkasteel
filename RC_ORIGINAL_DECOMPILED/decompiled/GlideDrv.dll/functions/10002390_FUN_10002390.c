/*
 * FUN_10002390 at 10002390
 * undefined4 __cdecl FUN_10002390(undefined4 param_1, undefined4 * param_2)
 * Address ranges: 10002390-100023ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10002390(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 1:
    *param_2 = 5;
    return 1;
  default:
    *param_2 = 1;
    return 0;
  case 5:
    *param_2 = 10;
    return 1;
  case 7:
    *param_2 = 0xc;
    return 1;
  case 8:
    *param_2 = 0xb;
    return 1;
  }
}

