/*
 * FUN_005b9a50 at 005b9a50
 * undefined FUN_005b9a50(void)
 * Address ranges: 005b9a50-005b9aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9a50(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x3b8);
  if (0 < iVar4) {
    piVar3 = *(int **)(param_1 + 0x3bc);
    do {
      if (*piVar3 == param_2) {
        FUN_005b3e10();
        iVar4 = iVar4 * 0xc;
        puVar2 = (undefined4 *)(iVar4 + -0xc + *(int *)(param_1 + 0x3bc));
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x3bc) + iVar5 * 0xc);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        *(undefined4 *)(iVar4 + -0xc + *(int *)(param_1 + 0x3bc)) = 0;
        *(undefined4 *)(iVar4 + -8 + *(int *)(param_1 + 0x3bc)) = 0;
        *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + -1;
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar5 < iVar4);
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xa0a,
               &DAT_006b3f70,0);
  return 0;
}

