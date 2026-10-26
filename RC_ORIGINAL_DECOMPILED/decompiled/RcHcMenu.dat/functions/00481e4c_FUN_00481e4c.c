/*
 * FUN_00481e4c at 00481e4c
 * undefined __register FUN_00481e4c(int param_1, char param_2)
 * Address ranges: 00481e4c-00481e74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481e4c(int param_1,char param_2)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    *(char *)(param_1 + 0x3f) = param_2;
    return;
  }
  bVar1 = FUN_00480bd4(param_1);
  if ((bool)param_2 != bVar1) {
    FUN_00482360(param_1,param_2);
  }
  return;
}

