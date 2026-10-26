/*
 * FUN_00405d8c at 00405d8c
 * LONG __register FUN_00405d8c(int param_1, UINT param_2, LONG param_3)
 * Address ranges: 00405d8c-00405db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG FUN_00405d8c(int param_1,UINT param_2,LONG param_3)

{
  SAFEARRAY *psa;
  HRESULT HVar1;
  LONG *plUbound;
  LONG local_c;
  
  plUbound = &local_c;
  local_c = param_3;
  psa = (SAFEARRAY *)FUN_00405d4c(param_1);
  HVar1 = SafeArrayGetUBound(psa,param_2,plUbound);
  if (HVar1 != 0) {
    FUN_00402874(CONCAT31((int3)((uint)HVar1 >> 8),0x14));
  }
  return local_c;
}

