/*
 * FUN_005bbd10 at 005bbd10
 * undefined FUN_005bbd10(void)
 * Address ranges: 005bbd10-005bbd97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbd10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x34fe8);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x33668) != 0) {
        iVar2 = FUN_005ba690(iVar1);
        if (iVar2 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x33c,
                       &DAT_006b3f70,0);
          return 0;
        }
      }
      FUN_005b8460(iVar1);
    }
    iVar3 = iVar3 + 1;
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4 = piVar4 + 2;
  } while (iVar3 < 8);
  FUN_005bbb40(param_1);
  *(undefined4 *)(param_1 + 0x3904c) = 1;
  return 1;
}

