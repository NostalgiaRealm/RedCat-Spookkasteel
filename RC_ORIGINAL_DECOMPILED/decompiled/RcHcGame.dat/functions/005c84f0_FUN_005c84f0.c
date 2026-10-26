/*
 * FUN_005c84f0 at 005c84f0
 * undefined FUN_005c84f0(void)
 * Address ranges: 005c84f0-005c85e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c84f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  
  puVar2 = param_3;
  piVar1 = param_1;
  local_28 = 0;
  *param_3 = 0;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar3 = FUN_005c8790(param_2,&local_28);
  if (iVar3 != 0) {
    iVar3 = FUN_005c8820(local_28,local_24,&param_1);
    if ((iVar3 != 0) && (iVar3 = FUN_005c86c0(local_24,&param_3), iVar3 != 0)) {
      param_3[7] = piVar1[3];
      param_3[1] = piVar1[1];
      piVar1[1] = piVar1[1] + 1;
      param_3[6] = local_28;
      piVar1[3] = (int)param_3;
      *piVar1 = *piVar1 + 1;
      iVar3 = FUN_005c85f0(*param_3,param_1,local_1c);
      if (iVar3 != 0) {
        *puVar2 = param_3[1];
        return 1;
      }
      return 0;
    }
    FUN_005cf400(local_28);
    _DAT_007203c0 = 0;
  }
  return 0;
}

