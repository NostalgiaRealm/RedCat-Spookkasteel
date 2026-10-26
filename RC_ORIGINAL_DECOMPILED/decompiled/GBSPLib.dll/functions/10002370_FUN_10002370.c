/*
 * FUN_10002370 at 10002370
 * undefined FUN_10002370(void)
 * Address ranges: 10002370-10002402
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002370(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  
  iVar3 = 0;
  pfVar1 = (float *)(param_1 + 0x10);
  pfVar4 = param_2;
  do {
    pfVar4 = pfVar4 + 1;
    if ((*(float *)(((int)param_2 - param_1) + (int)pfVar1) <= pfVar1[-3]) || (*pfVar1 <= *pfVar4))
    {
      return 0;
    }
    iVar3 = iVar3 + 1;
    pfVar1 = pfVar1 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    pcVar5 = (char *)(param_1 + 0x34);
    do {
      iVar2 = 0;
      if (0 < (int)param_2[10]) {
        pfVar1 = param_2 + 0xd;
        do {
          if ((*(float *)(pcVar5 + -4) == pfVar1[-1]) && (*pcVar5 != *(char *)pfVar1)) {
            return 0;
          }
          iVar2 = iVar2 + 1;
          pfVar1 = pfVar1 + 5;
        } while (iVar2 < (int)param_2[10]);
      }
      iVar3 = iVar3 + 1;
      pcVar5 = pcVar5 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  return 1;
}

