/*
 * FUN_005d9680 at 005d9680
 * undefined FUN_005d9680(void)
 * Address ranges: 005d9680-005d971f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_005d9680(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_005cf370(0x20);
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar1[1] = 0;
  *puVar1 = param_1 + 3U & 0xfffffffc;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x10;
  puVar1[3] = param_3;
  puVar1[7] = 0;
  uVar2 = FUN_005cf370(0x40);
  puVar1[6] = uVar2;
  if (uVar2 == 0) {
    FUN_005cf400(puVar1);
    _DAT_007203c0 = 0;
    return (uint *)0x0;
  }
  iVar3 = FUN_005d9850(puVar1,param_2);
  if (iVar3 == 0) {
    FUN_005cf400(puVar1[6]);
    puVar1[6] = 0;
    _DAT_007203c0 = 0;
    FUN_005cf400(puVar1);
    _DAT_007203c0 = 0;
    return (uint *)0x0;
  }
  return puVar1;
}

