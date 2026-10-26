/*
 * FUN_1000d730 at 1000d730
 * undefined FUN_1000d730(void)
 * Address ranges: 1000d730-1000d7af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000d730(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == (int *)0x0) {
    (*DAT_1014e358)(s_CopyPoly__NULL_Poly____10038b6c);
    return 0;
  }
  iVar1 = *param_1;
  if ((iVar1 < 1) || (0xff < iVar1)) {
    (*DAT_1014e358)(s_CopyPoly__Bogus_number_of_verts__10038b44,iVar1);
  }
  else {
    iVar1 = FUN_1000c250(iVar1);
    if (iVar1 != 0) {
      iVar3 = 0;
      if (*param_1 < 1) {
        return iVar1;
      }
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(iVar2 + param_1[1]);
        puVar4 = (undefined4 *)(*(int *)(iVar1 + 4) + iVar2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
      } while (iVar3 < *param_1);
      return iVar1;
    }
  }
  return 0;
}

