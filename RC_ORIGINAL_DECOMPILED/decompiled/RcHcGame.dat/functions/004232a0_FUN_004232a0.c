/*
 * FUN_004232a0 at 004232a0
 * undefined FUN_004232a0(void)
 * Address ranges: 004232a0-00423326
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004232a0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_0040cf10();
  iVar2 = FUN_00565870();
  param_1[0x5a] = iVar2;
  cVar1 = FUN_00424420();
  if (cVar1 == '\0') {
    iVar2 = __ftol();
    param_1[0x5e] = param_1[0x5e] - iVar2;
    uVar3 = FUN_0060a4a0();
    uVar3 = uVar3 & 0x80000001;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((bVar4) && ((int *)param_1[0x3f] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x3f] + 0x20))();
    }
    else {
      (**(code **)(*param_1 + 0xbc))(3);
    }
    if (param_1[0x5e] < 1) {
      (**(code **)(*param_1 + 0x60))();
    }
  }
  return;
}

