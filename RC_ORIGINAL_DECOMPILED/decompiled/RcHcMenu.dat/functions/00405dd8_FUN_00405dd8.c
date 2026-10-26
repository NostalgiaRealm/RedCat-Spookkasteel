/*
 * FUN_00405dd8 at 00405dd8
 * undefined __register FUN_00405dd8(int param_1)
 * Address ranges: 00405dd8-00405df4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405dd8(int param_1)

{
  SAFEARRAY *psa;
  HRESULT HVar1;
  
  psa = (SAFEARRAY *)FUN_00405d4c(param_1);
  HVar1 = SafeArrayUnaccessData(psa);
  if (HVar1 != 0) {
    FUN_00402874(CONCAT31((int3)((uint)HVar1 >> 8),0x13));
  }
  return;
}

