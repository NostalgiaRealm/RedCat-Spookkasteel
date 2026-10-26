/*
 * FUN_005d6ce0 at 005d6ce0
 * undefined FUN_005d6ce0(void)
 * Address ranges: 005d6ce0-005d6d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d6ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005d5c60();
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    FUN_005cc290(iVar1);
    iVar1 = FUN_005c1dc0(param_3);
    if (iVar1 == 0) break;
    iVar1 = FUN_005c19b0(0);
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006ac648,0xb6,
                   &DAT_006b3f70,0);
      return 0;
    }
    iVar1 = FUN_005d5c60();
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006ac648,0xb0,
               &DAT_006b3f70,0);
  return 0;
}

