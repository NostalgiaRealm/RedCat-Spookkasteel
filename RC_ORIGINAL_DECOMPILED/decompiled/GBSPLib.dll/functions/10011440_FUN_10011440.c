/*
 * FUN_10011440 at 10011440
 * undefined FUN_10011440(void)
 * Address ranges: 10011440-10011574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011440(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = *(int *)(DAT_1014e288 + 0x10 + param_1 * 0x24) * 0x40 + DAT_1014e2fc;
  iVar1 = DAT_1014e2c4 + *(int *)(iVar6 + 0x3c) * 0x34;
  FUN_100145f0();
  iVar3 = *(int *)(iVar1 + 0x28) * *(int *)(iVar1 + 0x24);
  pbVar4 = (byte *)(*(int *)(iVar1 + 0x2c) + DAT_1014e2b4);
  iVar5 = iVar3;
  if (0 < iVar3) {
    do {
      pbVar2 = (byte *)(*(int *)(iVar1 + 0x30) * 0x300 + DAT_1014e304 + (uint)*pbVar4 * 3);
      local_c = (float)*pbVar2 + local_c;
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
      local_8 = (float)pbVar2[1] + local_8;
      local_4 = (float)pbVar2[2] + local_4;
    } while (iVar5 != 0);
  }
  FUN_10014530(1.0 / (float)iVar3);
  FUN_10014530(0x3b808081);
  fVar7 = (float10)FUN_1000c090(&local_c,param_2 + 0x6c);
  if (fVar7 < (float10)0.5) {
    FUN_10014530((float)(fVar7 + fVar7));
  }
  FUN_10014530(_DAT_10037ad8 * *(float *)(iVar6 + 0x30));
  return;
}

