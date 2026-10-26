/*
 * FUN_005bb9e0 at 005bb9e0
 * undefined FUN_005bb9e0(void)
 * Address ranges: 005bb9e0-005bba55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb9e0(int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(param_1 + 0x33668) != 0) {
    iVar1 = FUN_005bc1a0(param_1);
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x1e4,
                   &DAT_006b3f70,0);
      return 0;
    }
    (**(code **)(*(int *)(param_1 + 0x33678) + 0x24))();
    BVar2 = FreeLibrary(*(HMODULE *)(param_1 + 0x3366c));
    if (BVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x33668) = 0;
    *(undefined4 *)(param_1 + 0x33678) = 0;
  }
  return 1;
}

