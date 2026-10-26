/*
 * FUN_005bbe40 at 005bbe40
 * undefined FUN_005bbe40(void)
 * Address ranges: 005bbe40-005bbf21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbe40(undefined4 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  iVar2 = *(int *)(param_2 + 0x18);
  FUN_005b8630(param_1);
  FUN_005b8670(iVar4);
  FUN_005b86b0(*(undefined4 *)(iVar4 + 0x18));
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x188)) {
    iVar5 = 0;
    do {
      psVar1 = (short *)(*(int *)(iVar2 + 0x1c0) + iVar5);
      if (((*(int *)(*(int *)(iVar2 + 0x1c0) + 0x14 + iVar5) != -1) &&
          ((*(byte *)(psVar1 + 0x42) & 4) != 0)) && (*(int *)(psVar1 + 0xc) == 0)) {
        FUN_005d2020(psVar1,&param_2);
        iVar3 = FUN_005bd2c0(param_1,(int)*psVar1,(int)psVar1[1],1,1);
        *(int *)(psVar1 + 0xc) = iVar3;
        if (iVar3 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x3b9,
                       &DAT_006b3f70,0);
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x3ba,
                       &DAT_006b3f70,0);
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x88;
    } while (iVar4 < *(int *)(iVar2 + 0x188));
  }
  return 1;
}

