/*
 * FUN_10011a50 at 10011a50
 * int __cdecl FUN_10011a50(char * param_1)
 * Address ranges: 10011a50-10011ac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10011a50(char *param_1)

{
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    local_c = *param_1;
    param_1 = param_1 + 1;
    if (local_c == '\0') break;
    if ((local_c < 'a') || ('f' < local_c)) {
      if (('@' < local_c) && (local_c < 'G')) {
        local_c = local_c + -7;
      }
    }
    else {
      local_c = local_c + -0x27;
    }
    local_8 = local_8 * 0x10 + -0x30 + (int)local_c;
  }
  return local_8;
}

