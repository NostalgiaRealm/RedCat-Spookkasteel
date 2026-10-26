/*
 * FUN_00405db4 at 00405db4
 * void * __register FUN_00405db4(int param_1, undefined4 param_2, void * param_3)
 * Address ranges: 00405db4-00405dd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_00405db4(int param_1,undefined4 param_2,void *param_3)

{
  SAFEARRAY *psa;
  HRESULT HVar1;
  void **ppvData;
  void *local_8;
  
  ppvData = &local_8;
  local_8 = param_3;
  psa = (SAFEARRAY *)FUN_00405d4c(param_1);
  HVar1 = SafeArrayAccessData(psa,ppvData);
  if (HVar1 != 0) {
    FUN_00402874(CONCAT31((int3)((uint)HVar1 >> 8),0x13));
  }
  return local_8;
}

