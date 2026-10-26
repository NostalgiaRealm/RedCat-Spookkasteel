/*
 * FUN_005cc130 at 005cc130
 * undefined FUN_005cc130(void)
 * Address ranges: 005cc130-005cc1ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005cc130(int param_1,int *param_2)

{
  char *_Str2;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    _Str2 = *(char **)*param_2;
    iVar4 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x3c0);
    if (0 < *(int *)(param_1 + 0xbc0)) {
      do {
        if (((char *)*puVar3 != (char *)0x0) &&
           (iVar1 = __strcmpi((char *)*puVar3,_Str2), iVar1 == 0)) {
          iVar4 = FUN_005cc730(*(undefined4 *)(param_1 + 0x3c4 + iVar4 * 8),param_2);
          return iVar4 != 0;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar4 < *(int *)(param_1 + 0xbc0));
      if (0xff < iVar4) {
        return false;
      }
    }
    puVar3 = (undefined4 *)(param_1 + 0x3c4 + iVar4 * 8);
    uVar2 = FUN_005cc600();
    *puVar3 = uVar2;
    ((undefined4 *)(param_1 + 0x3c0))[iVar4 * 2] = _Str2;
    FUN_005cc730(*puVar3,param_2);
    *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + 1;
  }
  return true;
}

