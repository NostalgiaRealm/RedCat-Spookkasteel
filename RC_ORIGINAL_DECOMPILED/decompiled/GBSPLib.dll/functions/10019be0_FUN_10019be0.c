/*
 * FUN_10019be0 at 10019be0
 * undefined FUN_10019be0(void)
 * Address ranges: 10019be0-10019cb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_10019be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_1c [8];
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  puVar1 = (undefined4 *)FUN_10014310(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1[3] = param_3;
  puVar1[8] = param_1;
  iVar2 = FUN_10017480(param_1,param_3,1,1,param_2,0,0,0,0,8);
  puVar1[9] = iVar2;
  if (iVar2 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x10f8,&DAT_10265ce0,0);
    FUN_10014360(puVar1);
    _DAT_1003fde8 = 0;
    return (undefined4 *)0x0;
  }
  (**(code **)(param_1 + 0x54))(local_1c);
  puVar1[2] = uStack_c;
  puVar1[4] = uStack_10 & 1;
  puVar1[5] = uStack_14;
  puVar1[6] = 0xffffffff;
  puVar1[1] = 1;
  return puVar1;
}

