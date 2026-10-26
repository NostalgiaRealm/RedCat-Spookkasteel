/*
 * FUN_005e15d0 at 005e15d0
 * undefined FUN_005e15d0(void)
 * Address ranges: 005e15d0-005e1730
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005e15d0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar4 = (char *)*param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  if (0 < (int)~uVar3) {
    iVar2 = FUN_005cd3b0(~uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_005cd3b0(8);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1[6] != 0) {
    iVar2 = FUN_005cd3b0(param_1[6]);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (param_1[9] == 0) {
    iVar2 = FUN_005cd3b0(4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    FUN_005e15d0(param_1[9],param_2);
  }
  if (param_1[10] != 0) {
    FUN_005e15d0(param_1[10],param_2);
    return 1;
  }
  iVar2 = FUN_005cd3b0(4);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

