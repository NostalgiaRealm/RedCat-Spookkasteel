/*
 * FUN_005bc960 at 005bc960
 * undefined FUN_005bc960(void)
 * Address ranges: 005bc960-005bca1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc960(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x35028);
  if (0 < iVar2) {
    piVar3 = (int *)(param_1 + 0x3502c);
    do {
      if (*(int *)(*piVar3 + 0xc54) != 0) {
        bVar1 = true;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (bVar1) goto LAB_005bc9a0;
  }
  if (*(int *)(param_1 + 0x3904c) == 0) {
    return 1;
  }
LAB_005bc9a0:
  iVar2 = FUN_005bc1a0(param_1);
  if (iVar2 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x5e5,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_005bc090(param_1);
  if (iVar2 != 0) {
    FUN_005bc3a0(param_1,0);
    *(undefined4 *)(param_1 + 0x3904c) = 0;
    return 1;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x5ec,
               &DAT_006b3f70);
  return 0;
}

