/*
 * FUN_005cd4d0 at 005cd4d0
 * undefined FUN_005cd4d0(void)
 * Address ranges: 005cd4d0-005cd678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005cd4d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(100);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x66,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,0x113,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar4 = puVar1;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1[1] = 0;
  puVar1[4] = 3;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xbe4ccccd;
  puVar1[7] = 0x3f800000;
  puVar1[8] = 0x3ecccccd;
  FUN_005b2f20();
  puVar1[9] = 0x3e800000;
  puVar1[10] = 0x3e800000;
  puVar1[0xb] = 0x3e800000;
  puVar1[0xc] = 1;
  puVar1[0x16] = 0x437f0000;
  puVar1[0x17] = 0xbf800000;
  puVar1[0xd] = 0x3dcccccd;
  puVar1[0xe] = 0x3dcccccd;
  puVar1[0xf] = 0x3dcccccd;
  puVar1[0x10] = 1;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0xffffffff;
  *puVar1 = param_1;
  puVar1[0x18] = param_2;
  iVar3 = FUN_005cd680();
  if (iVar3 == 0) {
    FUN_005cf400(puVar1);
    _DAT_007203c0 = 0;
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_005dfe10();
  puVar1[1] = uVar2;
  if (puVar1[1] == 0) {
    FUN_005cf220(0x66,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,0x13e,
                 &DAT_006b3f70,0);
    FUN_005cd7b0();
    return (undefined4 *)0x0;
  }
  DAT_006cc5e8 = DAT_006cc5e8 + 1;
  return puVar1;
}

