/*
 * FUN_00404020 at 00404020
 * undefined FUN_00404020(void)
 * Address ranges: 00404020-0040408d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00404020(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  cVar3 = '\x01';
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
      *(int *)(param_1 + 0x2c) = iVar1 + param_3;
    }
    else if (iVar2 < param_3) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      cVar3 = '\0';
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
      *(float *)(param_1 + 0x30) = (float)(iVar2 - param_3) / (float)iVar1;
    }
  }
  *(char *)(param_1 + 0x34) = cVar3;
  if (cVar3 == '\0') {
    FUN_00402d00();
  }
  return;
}

