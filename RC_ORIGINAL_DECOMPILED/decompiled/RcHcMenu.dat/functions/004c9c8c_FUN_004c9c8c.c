/*
 * FUN_004c9c8c at 004c9c8c
 * undefined __register FUN_004c9c8c(void)
 * Address ranges: 004c9c8c-004c9cb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c9c8c(void)

{
  byte local_5;
  
  local_5 = 0;
  do {
    FUN_00403094(*(int **)(&DAT_00574518 + (uint)local_5 * 4));
    local_5 = local_5 + 1;
  } while (local_5 != 0x2d);
  return;
}

