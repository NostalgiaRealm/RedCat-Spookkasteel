/*
 * FUN_005bbfe0 at 005bbfe0
 * undefined FUN_005bbfe0(void)
 * Address ranges: 005bbfe0-005bc08c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbfe0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x33678);
  if (0 < *(int *)(param_1 + 0x35028)) {
    puVar4 = (undefined4 *)(param_1 + 0x3502c);
    do {
      iVar2 = FUN_005ba640(*puVar4,uVar1,*(undefined4 *)(param_1 + 0x390b4));
      if (iVar2 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x41a,
                     &DAT_006b3f70,0);
        return 0;
      }
      iVar2 = FUN_005bbe40(param_1,*puVar4);
      if (iVar2 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x420,
                     &DAT_006b3f70,0);
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x35028));
  }
  return 1;
}

