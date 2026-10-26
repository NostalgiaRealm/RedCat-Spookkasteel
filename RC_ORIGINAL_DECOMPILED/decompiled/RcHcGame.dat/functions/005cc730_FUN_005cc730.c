/*
 * FUN_005cc730 at 005cc730
 * undefined FUN_005cc730(void)
 * Address ranges: 005cc730-005cc774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc730(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[3] == 0) {
    param_1[3] = param_2;
    return 1;
  }
  iVar3 = FUN_005cc600();
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0xc) = param_2;
    piVar2 = (int *)*param_1;
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      param_1 = piVar1;
      piVar2 = (int *)*piVar1;
    }
    *param_1 = iVar3;
    return 1;
  }
  return 0;
}

