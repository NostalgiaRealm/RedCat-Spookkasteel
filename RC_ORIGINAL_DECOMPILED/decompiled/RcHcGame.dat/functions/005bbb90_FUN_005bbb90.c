/*
 * FUN_005bbb90 at 005bbb90
 * undefined FUN_005bbb90(void)
 * Address ranges: 005bbb90-005bbc4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbb90(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x34fe8);
  iVar3 = 0;
  piVar2 = piVar1;
  do {
    if (*piVar2 == param_2) {
      piVar2[1] = piVar2[1] + 1;
      return 1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar3 < 8);
  iVar3 = 0;
  do {
    if (piVar1[1] == 0) break;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar3 < 8);
  if (iVar3 == 8) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x2bf,
                 &DAT_006b3f70,0);
    return 0;
  }
  *piVar1 = param_2;
  piVar1[1] = 1;
  FUN_005bbb40(param_1);
  *(undefined4 *)(param_1 + 0x3904c) = 1;
  *(undefined4 *)(param_2 + 0xc54) = 1;
  iVar3 = FUN_005b8610(param_2);
  if (iVar3 != 0) {
    return 1;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x2ce,
               &DAT_006b3f70,0);
  return 0;
}

