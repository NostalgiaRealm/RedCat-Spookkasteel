/*
 * FUN_005cf470 at 005cf470
 * undefined FUN_005cf470(void)
 * Address ranges: 005cf470-005cf582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005cf470(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x120);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x51,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006ac4cc,0xb6,&DAT_006b3f70,0
                );
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[0x47] = 0xfffffffe;
  iVar2 = FUN_005d1900();
  puVar1[2] = 0;
  puVar1[3] = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0xbf;
  }
  else {
    iVar2 = FUN_005cf3b0(0x8c);
    puVar1[0x46] = iVar2;
    if (iVar2 != 0) {
      puVar1[0x45] = 0;
      puVar1[7] = 0;
      puVar1[9] = 0;
      FUN_005cf590(puVar1);
      FUN_005cf5f0(0);
      puVar1[6] = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[4] = 0x3f800000;
      return puVar1;
    }
    uVar3 = 0xc5;
  }
  FUN_005cf220(0x51,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006ac4cc,uVar3,&DAT_006b3f70,0)
  ;
  if (puVar1[3] != 0) {
    FUN_005c8f80();
  }
  if (puVar1[0x46] != 0) {
    FUN_005cf400(puVar1[0x46]);
    puVar1[0x46] = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(puVar1);
  _DAT_007203c0 = 0;
  return (undefined4 *)0x0;
}

