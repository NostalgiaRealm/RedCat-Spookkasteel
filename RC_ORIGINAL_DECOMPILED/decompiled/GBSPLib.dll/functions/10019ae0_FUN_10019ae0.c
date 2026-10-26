/*
 * FUN_10019ae0 at 10019ae0
 * undefined FUN_10019ae0(void)
 * Address ranges: 10019ae0-10019bbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_10019ae0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)FUN_100203a0();
  if (*piVar1 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x10ab,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_100203d0();
  if (iVar2 * param_2 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x10b2,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_10014310(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = puVar3;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar3[2] = param_1;
  puVar3[3] = param_2;
  iVar2 = FUN_10014310(iVar2 * param_2);
  puVar3[7] = iVar2;
  if (iVar2 == 0) {
    FUN_10014360(puVar3);
    _DAT_1003fde8 = 0;
    return (undefined4 *)0x0;
  }
  *puVar3 = 0;
  puVar3[4] = 0;
  puVar3[1] = 1;
  return puVar3;
}

