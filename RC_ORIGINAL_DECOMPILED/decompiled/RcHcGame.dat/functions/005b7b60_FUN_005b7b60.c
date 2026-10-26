/*
 * FUN_005b7b60 at 005b7b60
 * undefined FUN_005b7b60(void)
 * Address ranges: 005b7b60-005b7ba9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005b7b60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a94ec,0x26,&DAT_006b3f70,0
                );
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_1 != 0) {
    puVar1[0xd] = param_1;
  }
  return puVar1;
}

