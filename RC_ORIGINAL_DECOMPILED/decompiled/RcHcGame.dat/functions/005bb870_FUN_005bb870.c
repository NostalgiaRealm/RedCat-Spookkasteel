/*
 * FUN_005bb870 at 005bb870
 * undefined FUN_005bb870(void)
 * Address ranges: 005bb870-005bb8d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb870(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x39058) == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x111,
                 &DAT_006b3f70,0);
    return 0;
  }
  FUN_005c1be0();
  iVar1 = FUN_005d6df0(*(undefined4 *)(param_1 + 0x39058),param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3904c) = 1;
  }
  return 1;
}

