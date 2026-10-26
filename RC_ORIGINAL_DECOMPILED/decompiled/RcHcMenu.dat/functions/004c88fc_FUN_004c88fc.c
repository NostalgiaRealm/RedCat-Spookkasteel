/*
 * FUN_004c88fc at 004c88fc
 * undefined __register FUN_004c88fc(int * param_1, byte param_2)
 * Address ranges: 004c88fc-004c894b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c890e) */

void FUN_004c88fc(int *param_1,byte param_2)

{
  byte local_9;
  
  local_9 = param_2;
  if (4 < param_2) {
    local_9 = 4;
  }
  if (*(byte *)(param_1[0x4d] + 0x20) != local_9) {
    FUN_004c714c(param_1[0x4d],local_9);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

