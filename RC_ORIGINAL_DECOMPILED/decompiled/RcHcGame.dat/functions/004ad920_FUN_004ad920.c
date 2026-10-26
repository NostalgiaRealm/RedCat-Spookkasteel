/*
 * FUN_004ad920 at 004ad920
 * undefined FUN_004ad920(void)
 * Address ranges: 004ad920-004ad99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004ad920(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  if ((char)param_1[0xc] == '\0') {
    return 0;
  }
  iVar1 = param_1[0xe];
  cVar4 = '\x01';
  if (iVar1 != -1) {
    iVar2 = param_1[0xf];
    if (iVar2 == -1) {
      param_1[0x10] = 0x3f800000;
      param_1[0xf] = iVar1 + param_2;
    }
    else if (iVar2 < param_2) {
      param_1[0x10] = 0;
      cVar4 = '\0';
    }
    else if (iVar1 < 1) {
      param_1[0x10] = 0;
    }
    else {
      param_1[0x10] = (int)((float)(iVar2 - param_2) / (float)iVar1);
    }
  }
  *(char *)(param_1 + 0x11) = cVar4;
  if (cVar4 == '\0') {
    return 1;
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_2);
  return uVar3;
}

