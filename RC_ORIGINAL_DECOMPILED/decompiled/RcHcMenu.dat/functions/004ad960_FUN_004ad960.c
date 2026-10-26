/*
 * FUN_004ad960 at 004ad960
 * uint __register FUN_004ad960(int param_1)
 * Address ranges: 004ad960-004ad9cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004ad960(int param_1)

{
  char cVar1;
  uint local_c;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    local_c = 0x20;
  }
  else {
    local_c = 0x10;
  }
  cVar1 = *(char *)(param_1 + 0x6d);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_c = local_c | 4;
    }
    else if (cVar1 == '\x02') {
      local_c = local_c | 8;
    }
  }
  cVar1 = *(char *)(param_1 + 0x6e);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_c = local_c | 2;
    }
    else if (cVar1 == '\x02') {
      local_c = local_c | 1;
    }
  }
  return local_c;
}

