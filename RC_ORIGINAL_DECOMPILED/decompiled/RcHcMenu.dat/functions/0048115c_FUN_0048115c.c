/*
 * FUN_0048115c at 0048115c
 * undefined4 __register FUN_0048115c(int param_1)
 * Address ranges: 0048115c-00481182
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048115c(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00481e4c(param_1,'\x01');
  }
  else {
    uVar1 = thunk_FUN_00479b65(param_1);
    FUN_0047fe48(uVar1);
  }
  return *(undefined4 *)(param_1 + 0x24);
}

