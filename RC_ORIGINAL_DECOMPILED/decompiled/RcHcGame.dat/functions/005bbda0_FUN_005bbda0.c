/*
 * FUN_005bbda0 at 005bbda0
 * undefined FUN_005bbda0(void)
 * Address ranges: 005bbda0-005bbe3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbda0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  uVar4 = 1;
  if (0 < *(int *)(param_1 + 0x35028)) {
    puVar3 = (undefined4 *)(param_1 + 0x3502c);
    do {
      iVar1 = FUN_005ba690(*puVar3);
      if (iVar1 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x377,
                     &DAT_006b3f70,0);
        uVar4 = 0;
      }
      iVar1 = FUN_005bbf30(param_1,*puVar3);
      if (iVar1 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x37d,
                     &DAT_006b3f70,0);
        uVar4 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x35028));
    return uVar4;
  }
  return 1;
}

