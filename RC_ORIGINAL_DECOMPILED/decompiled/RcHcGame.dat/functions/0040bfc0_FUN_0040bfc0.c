/*
 * FUN_0040bfc0 at 0040bfc0
 * undefined FUN_0040bfc0(void)
 * Address ranges: 0040bfc0-0040c040
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0040bfc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  if ((char)param_1[0x8c] != '\0') {
    FUN_004232a0(param_2,param_3,param_4);
    return;
  }
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_0040cf10();
  iVar1 = FUN_00565870();
  param_1[0x5a] = iVar1;
  uVar2 = FUN_0060a4a0();
  uVar2 = uVar2 & 0x80000001;
  bVar4 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar4) {
    piVar3 = (int *)FUN_00424e90();
    (**(code **)(*piVar3 + 0x20))();
    return;
  }
  (**(code **)(*param_1 + 0xbc))(3);
  return;
}

