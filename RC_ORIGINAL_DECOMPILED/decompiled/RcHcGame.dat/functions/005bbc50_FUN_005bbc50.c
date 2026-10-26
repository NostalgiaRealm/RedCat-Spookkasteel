/*
 * FUN_005bbc50 at 005bbc50
 * undefined FUN_005bbc50(void)
 * Address ranges: 005bbc50-005bbd08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbc50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x34fe8);
  do {
    if (*piVar2 == param_2) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 8);
  if (iVar1 == 8) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x2ea,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = piVar2[1];
  piVar2[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (*(int *)(param_1 + 0x33668) != 0) {
      iVar1 = FUN_005ba690(param_2);
      if (iVar1 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x304,
                     &DAT_006b3f70,0);
        return 0;
      }
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    FUN_005bbb40(param_1);
    *(undefined4 *)(param_1 + 0x3904c) = 1;
    FUN_005b8460(param_2);
  }
  return 1;
}

