/*
 * FUN_100090f0 at 100090f0
 * uint __cdecl FUN_100090f0(int param_1, uint param_2)
 * Address ranges: 100090f0-1000914a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_100090f0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_100302a4 * 0xc);
  if ((param_2 + DAT_100302a4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}

