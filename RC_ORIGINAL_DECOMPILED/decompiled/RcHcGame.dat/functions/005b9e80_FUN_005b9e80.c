/*
 * FUN_005b9e80 at 005b9e80
 * undefined FUN_005b9e80(void)
 * Address ranges: 005b9e80-005b9f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9e80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0xbc0) == 0) ||
     (iVar1 = FUN_005b9ce0(param_1,s_FogLight_006a9558), iVar1 == 0)) {
    return 1;
  }
  iVar4 = 0;
  iVar3 = param_1;
  do {
    iVar4 = FUN_005cc780(iVar1,iVar4);
    if (iVar4 == 0) {
      return 1;
    }
    iVar2 = FUN_005cc290(iVar4);
    if (iVar2 == 0) break;
    iVar3 = FUN_005b9d50(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_005b7bd0(iVar3,iVar2,iVar2 + 0xc,0x3f800000,*(undefined4 *)(iVar2 + 0x1c),
                         *(undefined4 *)(iVar2 + 0x20));
  } while (iVar2 != 0);
  if (iVar3 != 0) {
    FUN_005b9e10(param_1,iVar3);
  }
  return 0;
}

