/*
 * FUN_005d1f30 at 005d1f30
 * undefined FUN_005d1f30(void)
 * Address ranges: 005d1f30-005d1f89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d1f30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0xa68);
  *(undefined4 **)(param_1 + 0x3b0) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac544,0x93,&DAT_006b3f70,0
                );
    return 0;
  }
  for (iVar2 = 0x29a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  FUN_005d35e0(param_1);
  return 1;
}

