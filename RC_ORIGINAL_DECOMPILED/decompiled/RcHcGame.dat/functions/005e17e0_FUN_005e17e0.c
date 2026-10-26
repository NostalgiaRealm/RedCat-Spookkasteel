/*
 * FUN_005e17e0 at 005e17e0
 * undefined FUN_005e17e0(void)
 * Address ranges: 005e17e0-005e194e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005e17e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == -1) {
    *param_3 = 0;
    return 1;
  }
  piVar2 = (int *)FUN_005cf3b0(0x2c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar3 = piVar2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  iVar1 = FUN_005cd390(4);
  if (iVar1 != 0) {
    iVar1 = FUN_005cf3b0(param_2);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      FUN_005cf400(piVar2);
      _DAT_007203c0 = 0;
      return 0;
    }
    iVar1 = FUN_005cd390(param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_005cd390(8);
      if (iVar1 != 0) {
        iVar1 = FUN_005cd390(4);
        if (iVar1 != 0) {
          iVar1 = FUN_005cd390(4);
          if (iVar1 != 0) {
            iVar1 = FUN_005cd390(4);
            if (iVar1 != 0) {
              iVar1 = FUN_005cd390(4);
              if (iVar1 != 0) {
                iVar1 = piVar2[6];
                if (iVar1 != 0) {
                  iVar1 = FUN_005cf3b0(iVar1);
                  piVar2[5] = iVar1;
                  if (iVar1 == 0) goto LAB_005e192f;
                  iVar1 = FUN_005cd390(piVar2[6]);
                  if (iVar1 == 0) goto LAB_005e192f;
                }
                iVar1 = FUN_005e17e0(param_2,piVar2 + 9);
                if (iVar1 != 0) {
                  iVar1 = FUN_005e17e0(param_2,piVar2 + 10);
                  if (iVar1 != 0) {
                    *param_3 = piVar2;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_005e192f:
  FUN_005e1470(piVar2);
  return 0;
}

