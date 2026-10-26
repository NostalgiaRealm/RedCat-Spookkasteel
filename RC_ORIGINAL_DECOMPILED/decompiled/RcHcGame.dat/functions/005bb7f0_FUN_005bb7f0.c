/*
 * FUN_005bb7f0 at 005bb7f0
 * undefined FUN_005bb7f0(void)
 * Address ranges: 005bb7f0-005bb837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb7f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x39058) == 0) {
    iVar1 = FUN_005d6b50();
    *(int *)(param_1 + 0x39058) = iVar1;
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0xe9,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  return 1;
}

