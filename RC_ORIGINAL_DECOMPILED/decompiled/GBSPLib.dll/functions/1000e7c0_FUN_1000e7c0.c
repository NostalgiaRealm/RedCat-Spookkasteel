/*
 * FUN_1000e7c0 at 1000e7c0
 * undefined FUN_1000e7c0(void)
 * Address ranges: 1000e7c0-1000e83c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000e7c0(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  iVar1 = *(int *)*param_1;
  pfVar4 = (float *)((int *)*param_1)[1];
  if (iVar1 < 3) {
    (*DAT_1014e358)(s_CheckPortal__NumVerts_<_3__10038e68);
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = 0;
      pfVar3 = pfVar4;
      do {
        if ((*pfVar3 == 15192.0) || (*pfVar3 == -15192.0)) {
          (*DAT_1014e358)(s_CheckPortal__Portal_was_not_clip_10038e30);
          return 0;
        }
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar2 < 3);
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar5 < iVar1);
  }
  return 1;
}

