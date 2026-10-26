/*
 * FUN_00419cc0 at 00419cc0
 * undefined FUN_00419cc0(void)
 * Address ranges: 00419cc0-00419d5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00419cc0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  if ((char)param_1[0x40] == '\0') {
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    FUN_0040cf10();
    iVar3 = FUN_00565870();
    param_1[0x5a] = iVar3;
    cVar2 = FUN_00424420();
    if (cVar2 == '\0') {
      iVar3 = FUN_0060a4a0();
      if ((iVar3 % 3 == 0) && (piVar1 = (int *)param_1[0x3f], piVar1 != (int *)0x0)) {
        iVar3 = __ftol();
        param_1[0x5e] = param_1[0x5e] - iVar3;
        (**(code **)(*piVar1 + 0x20))();
      }
      else {
        (**(code **)(*param_1 + 0xbc))(3);
      }
      if (param_1[0x5e] < 1) {
        (**(code **)(*param_1 + 0x60))();
      }
    }
  }
  return;
}

