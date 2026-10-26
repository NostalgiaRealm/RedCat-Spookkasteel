/*
 * FUN_00481868 at 00481868
 * undefined __register FUN_00481868(int param_1)
 * Address ranges: 00481868-0048188c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481868(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = thunk_FUN_00479b65(param_1);
    FUN_0047fe48(uVar1);
    return;
  }
  FUN_00481e4c(param_1,'\x01');
  return;
}

