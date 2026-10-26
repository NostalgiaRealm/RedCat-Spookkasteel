/*
 * FUN_005c7e30 at 005c7e30
 * undefined FUN_005c7e30(void)
 * Address ranges: 005c7e30-005c7ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005c7e30(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0xcc,&DAT_006b3f70,0
                );
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  iVar2 = FUN_005c80e0(param_1);
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_005cf400(puVar1);
    _DAT_007203c0 = 0;
    FUN_005cf220(9,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0xd8,&DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar1[2] = 0x3f800000;
  return puVar1;
}

