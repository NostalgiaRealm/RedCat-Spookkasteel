/*
 * FUN_004c9bd0 at 004c9bd0
 * undefined __register FUN_004c9bd0(int * param_1, byte param_2)
 * Address ranges: 004c9bd0-004c9c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c9be2) */

void FUN_004c9bd0(int *param_1,byte param_2)

{
  byte local_9;
  
  local_9 = param_2;
  if (4 < param_2) {
    local_9 = 4;
  }
  if (*(byte *)(param_1[0x81] + 0x20) != local_9) {
    FUN_004c714c(param_1[0x81],local_9);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

