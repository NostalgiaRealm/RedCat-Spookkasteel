/*
 * FUN_0041e840 at 0041e840
 * undefined FUN_0041e840(void)
 * Address ranges: 0041e840-0041e8db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0041e840(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((char)param_1[0x40] == '\0') {
    cVar1 = FUN_0041e830();
    if (cVar1 == '\0') {
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
        iVar2 = FUN_0060a4a0();
        if ((iVar2 % 3 == 0) && ((int *)param_1[0x3f] != (int *)0x0)) {
          (**(code **)(*(int *)param_1[0x3f] + 0x20))();
        }
        else {
          (**(code **)(*param_1 + 0xbc))(3);
        }
        if (param_1[0x5e] < 1) {
          (**(code **)(*param_1 + 0x60))();
        }
      }
    }
  }
  return;
}

