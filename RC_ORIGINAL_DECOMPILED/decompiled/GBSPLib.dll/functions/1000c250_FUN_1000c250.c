/*
 * FUN_1000c250 at 1000c250
 * undefined FUN_1000c250(void)
 * Address ranges: 1000c250-1000c2d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1000c250(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (1000 < param_1) {
    (*DAT_1014e358)(s_Bogus_verts___i_10038a1c,param_1);
    return (int *)0x0;
  }
  piVar1 = (int *)FUN_10014310(8);
  if (piVar1 == (int *)0x0) {
    (*DAT_1014e358)(s_AllocPoly__Not_enough_memory__100389fc);
    return (int *)0x0;
  }
  iVar2 = FUN_10014310(param_1 * 0xc);
  piVar1[1] = iVar2;
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_kCAllocPoly__Not_enough_memory_f_100389ca + 2,param_1);
    FUN_10014360(piVar1);
    _DAT_1003fde8 = 0;
    return (int *)0x0;
  }
  *piVar1 = param_1;
  return piVar1;
}

