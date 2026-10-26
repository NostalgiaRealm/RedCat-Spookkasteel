/*
 * FUN_10024bd0 at 10024bd0
 * undefined FUN_10024bd0(void)
 * Address ranges: 10024bd0-10024cb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10024bd0(void)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = FUN_10014a00(8);
  if (iVar1 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x8d,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_10014310(local_4 * local_8 + 8);
  if (piVar2 == (int *)0x0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x95,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  iVar1 = FUN_10014a00(local_4 * local_8);
  if (iVar1 == 0) {
    FUN_10014360(piVar2);
    _DAT_1003fde8 = 0;
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x9d,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  *piVar2 = local_8;
  piVar2[1] = local_4;
  return piVar2;
}

