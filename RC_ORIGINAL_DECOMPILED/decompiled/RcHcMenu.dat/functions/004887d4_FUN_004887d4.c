/*
 * FUN_004887d4 at 004887d4
 * undefined __register FUN_004887d4(int param_1)
 * Address ranges: 004887d4-004887f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004887d4(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x16c) != 0) {
    uVar1 = thunk_FUN_00479a4d(param_1 + 0x16c);
    if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
      FUN_0047fe48(uVar1);
    }
  }
  return;
}

