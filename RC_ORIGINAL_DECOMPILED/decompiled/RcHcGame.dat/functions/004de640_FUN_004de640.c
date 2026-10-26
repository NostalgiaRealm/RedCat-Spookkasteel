/*
 * FUN_004de640 at 004de640
 * undefined FUN_004de640(void)
 * Address ranges: 004de640-004de6c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004de640(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x120);
  cVar3 = '\x01';
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x124);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
      *(int *)(param_1 + 0x124) = iVar1 + param_2;
    }
    else if (iVar2 < param_2) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      cVar3 = '\0';
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    else {
      *(float *)(param_1 + 0x128) = (float)(iVar2 - param_2) / (float)iVar1;
    }
  }
  *(char *)(param_1 + 300) = cVar3;
  if (cVar3 == '\0') {
    FUN_00502220();
  }
  return;
}

