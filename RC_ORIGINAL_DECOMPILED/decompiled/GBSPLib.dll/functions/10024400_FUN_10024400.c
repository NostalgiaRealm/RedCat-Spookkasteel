/*
 * FUN_10024400 at 10024400
 * undefined FUN_10024400(void)
 * Address ranges: 10024400-1002456e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10024400(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == -1) {
    *param_3 = 0;
    return 1;
  }
  piVar2 = (int *)FUN_10014310(0x2c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar3 = piVar2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  iVar1 = FUN_10014a00(4);
  if (iVar1 != 0) {
    iVar1 = FUN_10014310(param_2);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      FUN_10014360(piVar2);
      _DAT_1003fde8 = 0;
      return 0;
    }
    iVar1 = FUN_10014a00(param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_10014a00(8);
      if (iVar1 != 0) {
        iVar1 = FUN_10014a00(4);
        if (iVar1 != 0) {
          iVar1 = FUN_10014a00(4);
          if (iVar1 != 0) {
            iVar1 = FUN_10014a00(4);
            if (iVar1 != 0) {
              iVar1 = FUN_10014a00(4);
              if (iVar1 != 0) {
                iVar1 = piVar2[6];
                if (iVar1 != 0) {
                  iVar1 = FUN_10014310(iVar1);
                  piVar2[5] = iVar1;
                  if (iVar1 == 0) goto LAB_1002454f;
                  iVar1 = FUN_10014a00(piVar2[6]);
                  if (iVar1 == 0) goto LAB_1002454f;
                }
                iVar1 = FUN_10024400(param_2,piVar2 + 9);
                if (iVar1 != 0) {
                  iVar1 = FUN_10024400(param_2,piVar2 + 10);
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
LAB_1002454f:
  FUN_10024090(piVar2);
  return 0;
}

