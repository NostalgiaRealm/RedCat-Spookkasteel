/*
 * FUN_004cb96c at 004cb96c
 * undefined __register FUN_004cb96c(int param_1)
 * Address ranges: 004cb96c-004cb9a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cb96c(int param_1)

{
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x128);
  if ((local_c != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    local_10 = 0xb018;
    local_4 = 0;
    local_8 = param_1;
    FUN_004357bc(*(int *)(param_1 + 0x24),(int)&local_10);
  }
  return;
}

