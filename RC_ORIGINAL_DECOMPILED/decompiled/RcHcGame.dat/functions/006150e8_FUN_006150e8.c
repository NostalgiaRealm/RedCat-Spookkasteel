/*
 * FUN_006150e8 at 006150e8
 * undefined FUN_006150e8(void)
 * Address ranges: 006150e8-0061517d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_006150e8(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_0061503c();
  if (iVar1 == 0) {
    iVar1 = (int)param_3;
    if (param_2 == (undefined1 *)0x0) {
      iVar1 = FUN_00615087();
      iVar1 = iVar1 + 1;
      param_2 = (undefined1 *)FUN_00614d0f(iVar1,0);
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
    }
    piVar4 = (int *)*param_1;
    param_3 = param_2;
    while ((piVar4 != (int *)0x0 && (0 < iVar1))) {
      iVar2 = (**(code **)*piVar4)();
      if (iVar2 != 0) {
        if (iVar1 - iVar2 < 0) {
          iVar2 = iVar1;
        }
        iVar3 = (**(code **)(*piVar4 + 8))(param_3,iVar2);
        if (iVar3 != 0) {
          iVar1 = iVar1 - iVar2;
          param_3 = param_3 + iVar2;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
    *param_3 = 0;
  }
  else if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  return param_2;
}

