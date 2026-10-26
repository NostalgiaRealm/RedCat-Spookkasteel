/*
 * FUN_10011790 at 10011790
 * undefined4 __cdecl FUN_10011790(short param_1)
 * Address ranges: 10011790-100117de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10011790(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_100309d4 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}

