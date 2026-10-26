/*
 * FUN_005b9ce0 at 005b9ce0
 * undefined FUN_005b9ce0(void)
 * Address ranges: 005b9ce0-005b9d42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9ce0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (char *)0x0) {
    return *(undefined4 *)(param_1 + 0x3c4);
  }
  iVar2 = 1;
  if (1 < *(int *)(param_1 + 0xbc0)) {
    puVar3 = (undefined4 *)(param_1 + 0x3c8);
    do {
      iVar1 = __strcmpi((char *)*puVar3,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(param_1 + 0x3c4 + iVar2 * 8);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar2 < *(int *)(param_1 + 0xbc0));
  }
  return 0;
}

