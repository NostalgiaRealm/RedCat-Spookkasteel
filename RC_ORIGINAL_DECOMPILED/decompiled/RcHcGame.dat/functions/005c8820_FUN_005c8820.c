/*
 * FUN_005c8820 at 005c8820
 * undefined FUN_005c8820(void)
 * Address ranges: 005c8820-005c8883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c8820(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0x24;
  param_2[1] = 0x100e8;
  iVar1 = FUN_005c8890(param_1,param_2 + 4,param_3,param_2 + 2);
  if (iVar1 == 0) {
    FUN_005cf220(0xc,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x340,&DAT_006b3f70,0
                );
    return 0;
  }
  return 1;
}

