/*
 * FUN_005a61f0 at 005a61f0
 * undefined FUN_005a61f0(void)
 * Address ranges: 005a61f0-005a6336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a61f0(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = param_1[0x2b];
  dVar3 = *(double *)(param_1 + 0x32);
  iVar2 = param_1[0x2c];
  dVar4 = *(double *)(param_1 + 0x32);
  FUN_005a61a0();
  if (((char)param_1[0xe] != '\0') && (-1 < *param_1)) {
    *(bool *)(param_1 + 0x12) = (double)param_1[0x2b] + (double)iVar1 * dVar3 < (double)param_2;
    *(bool *)(param_1 + 0x10) = (double)param_2 < (double)param_1[0x2b] - (double)iVar1 * dVar3;
    *(bool *)(param_1 + 0x16) = (double)param_1[0x2c] + (double)iVar2 * dVar4 < (double)param_3;
    *(bool *)(param_1 + 0x14) = (double)param_3 < (double)param_1[0x2c] - (double)iVar2 * dVar4;
    *(byte *)(param_1 + 0x18) = (byte)param_4 & 1;
    *(byte *)(param_1 + 0x1a) = (byte)(param_4 >> 1) & 1;
    *(byte *)(param_1 + 0x1c) = (byte)(param_4 >> 2) & 1;
    *(byte *)(param_1 + 0x1e) = (byte)(param_4 >> 3) & 1;
    *(byte *)(param_1 + 0x20) = (byte)(param_4 >> 4) & 1;
    *(byte *)(param_1 + 0x22) = (byte)(param_4 >> 5) & 1;
    *(byte *)(param_1 + 0x24) = (byte)(param_4 >> 6) & 1;
    *(byte *)(param_1 + 0x26) = (byte)(param_4 >> 7) & 1;
    *(byte *)(param_1 + 0x28) = (byte)(param_4 >> 8) & 1;
    *(byte *)(param_1 + 0x2a) = (byte)(param_4 >> 9) & 1;
  }
  return;
}

