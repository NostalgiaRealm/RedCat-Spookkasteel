/*
 * FUN_00615599 at 00615599
 * undefined FUN_00615599(void)
 * Address ranges: 00615599-00615633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00615599(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  if ((uVar2 & 0xf) == 1) {
    return;
  }
  if ((uVar2 & 0xf) == 3) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00615520(3);
    return;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    uVar2 = uVar2 & 0xfffffff1 | 1;
    goto LAB_0061562c;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = FUN_00614d0f(0xc,0);
      if (iVar1 == 0) goto LAB_00615617;
      iVar1 = FUN_0061574d(*param_2);
    }
    else {
      iVar1 = FUN_00614d0f(0x10,0);
      if (iVar1 == 0) {
LAB_00615617:
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0061578b(param_2,param_3);
      }
    }
    *param_1 = iVar1;
    if (iVar1 != 0) {
      return;
    }
    uVar2 = param_1[1];
  }
  uVar2 = uVar2 & 0xfffffff3 | 3;
LAB_0061562c:
  param_1[1] = uVar2;
  return;
}

