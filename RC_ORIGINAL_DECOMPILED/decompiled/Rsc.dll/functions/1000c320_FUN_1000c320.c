/*
 * FUN_1000c320 at 1000c320
 * int * __cdecl FUN_1000c320(int param_1, int * param_2)
 * Address ranges: 1000c320-1000c378
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1000c320(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_100302a4 * 3);
  if ((param_2 + DAT_100302a4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}

