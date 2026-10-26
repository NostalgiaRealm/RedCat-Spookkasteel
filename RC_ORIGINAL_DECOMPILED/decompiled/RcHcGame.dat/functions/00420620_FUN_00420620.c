/*
 * FUN_00420620 at 00420620
 * undefined FUN_00420620(void)
 * Address ranges: 00420620-004206c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ba48 slot 7 for .?AVCRcWitch@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ba48 slot 7 for
   .?AVCRcWitch@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00420620(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_0040cf10();
  iVar1 = FUN_00565870();
  iVar4 = param_1[0x5e];
  param_1[0x5a] = iVar1;
  if (2 < iVar4) {
    iVar1 = __ftol();
    iVar4 = iVar4 - iVar1;
    if (iVar4 < 3) {
      iVar4 = 2;
    }
    param_1[0x5e] = iVar4;
    if (iVar4 == 2) {
      FUN_00505400(&DAT_006b9760);
      (**(code **)(*param_1 + 0x60))();
      return;
    }
    uVar2 = FUN_0060a4a0();
    uVar2 = uVar2 & 0x80000001;
    bVar5 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar5) {
      piVar3 = (int *)FUN_00424e90();
      (**(code **)(*piVar3 + 0x20))();
      return;
    }
    (**(code **)(*param_1 + 0xbc))(3);
  }
  return;
}

