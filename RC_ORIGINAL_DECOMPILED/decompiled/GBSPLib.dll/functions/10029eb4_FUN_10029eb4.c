/*
 * FUN_10029eb4 at 10029eb4
 * undefined FUN_10029eb4(void)
 * Address ranges: 10029eb4-10029f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10029eb4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = FUN_10031443(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)&DAT_1003cb78) {
    iVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_1003cb98) {
      return 0;
    }
    iVar2 = 1;
  }
  _DAT_1052a3ec = _DAT_1052a3ec + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_1052a3f0)[iVar2] == 0) {
    pvVar3 = _malloc(0x1000);
    (&DAT_1052a3f0)[iVar2] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_10029f30;
    }
  }
  uVar1 = (&DAT_1052a3f0)[iVar2];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_10029f30:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}

