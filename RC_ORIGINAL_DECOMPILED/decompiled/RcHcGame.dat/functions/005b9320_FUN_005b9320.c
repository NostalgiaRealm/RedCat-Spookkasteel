/*
 * FUN_005b9320 at 005b9320
 * undefined FUN_005b9320(void)
 * Address ranges: 005b9320-005b93a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005b9320(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x1d5e0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x81a,&DAT_006b3f70,
                 0);
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x7578; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_005d5d90(param_1,puVar1 + 0x32);
  if (iVar2 == 0) {
    FUN_005cf220(0x12,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x822,&DAT_006b3f70,
                 0);
    return (undefined4 *)0x0;
  }
  return puVar1;
}

