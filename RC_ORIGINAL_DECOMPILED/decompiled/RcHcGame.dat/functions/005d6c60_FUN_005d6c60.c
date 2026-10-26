/*
 * FUN_005d6c60 at 005d6c60
 * undefined FUN_005d6c60(void)
 * Address ranges: 005d6c60-005d6cd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d6c60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005d5c60();
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    FUN_005cc290(iVar1);
    iVar1 = FUN_005c1df0(param_2);
    if (iVar1 == 0) break;
    iVar1 = FUN_005d5c60();
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006ac648,0x8e,
               &DAT_006b3f70,0);
  return 0;
}

