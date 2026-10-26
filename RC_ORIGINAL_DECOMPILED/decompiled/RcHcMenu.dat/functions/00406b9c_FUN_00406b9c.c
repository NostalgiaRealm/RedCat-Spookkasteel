/*
 * FUN_00406b9c at 00406b9c
 * undefined __register FUN_00406b9c(int param_1)
 * Address ranges: 00406b9c-00406bb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406b9c(int param_1)

{
  undefined4 in_stack_00000000;
  
  if (param_1 < 0) {
    if (DAT_00573014 != (code *)0x0) {
      param_1 = (*DAT_00573014)(param_1,in_stack_00000000);
    }
    FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),0x18));
    return;
  }
  return;
}

