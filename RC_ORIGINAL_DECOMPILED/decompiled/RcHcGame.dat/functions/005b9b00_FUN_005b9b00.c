/*
 * FUN_005b9b00 at 005b9b00
 * undefined FUN_005b9b00(void)
 * Address ranges: 005b9b00-005b9b61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9b00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3b8)) {
    piVar2 = *(int **)(param_1 + 0x3bc);
    do {
      if (*piVar2 == param_2) {
        (*(int **)(param_1 + 0x3bc))[iVar1 * 3 + 1] = param_3;
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < *(int *)(param_1 + 0x3b8));
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xa21,
               &DAT_006b3f70,0);
  return 0;
}

