/*
 * FUN_0056f9b0 at 0056f9b0
 * undefined FUN_0056f9b0(void)
 * Address ranges: 0056f9b0-0056fb30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0056f9b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x2a0);
  cVar3 = '\x01';
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x2a4);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x2a8) = 0x3f800000;
      *(int *)(param_1 + 0x2a4) = iVar1 + param_2;
    }
    else if (iVar2 < param_2) {
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      cVar3 = '\0';
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x2a8) = 0;
    }
    else {
      *(float *)(param_1 + 0x2a8) = (float)(iVar2 - param_2) / (float)iVar1;
    }
  }
  *(char *)(param_1 + 0x2ac) = cVar3;
  if (cVar3 == '\0') {
    FUN_00502220();
    return;
  }
  FUN_0049d890(param_2,param_3);
  if (*(char *)(param_1 + 0x2e5) != '\0') {
    iVar1 = *(int *)(param_1 + 0x2f0);
    cVar3 = '\x01';
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0x2f4);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
        *(int *)(param_1 + 0x2f4) = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        cVar3 = '\0';
      }
      else if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x2f8) = 0;
      }
      else {
        *(float *)(param_1 + 0x2f8) = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(char *)(param_1 + 0x2fc) = cVar3;
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x2e5) = 0;
    }
    fVar4 = (*(float *)(param_1 + 0x2e8) * *(float *)(param_1 + 0x2f8) +
            (1.0 - *(float *)(param_1 + 0x2f8)) * *(float *)(param_1 + 0x2ec)) * 2.55;
    if (*(float *)(param_1 + 0x210) != fVar4) {
      *(float *)(param_1 + 0x210) = fVar4;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_004247e0(fVar4);
        FUN_005b3ae0(fVar4);
      }
    }
  }
  if (*(char *)(param_1 + 0x2e6) != '\0') {
    FUN_0056fef0(param_3);
  }
  return;
}

