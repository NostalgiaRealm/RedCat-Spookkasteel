/*
 * FUN_004a60a0 at 004a60a0
 * undefined __register FUN_004a60a0(void)
 * Address ranges: 004a60a0-004a60de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a60a0(void)

{
  float10 fVar1;
  int local_8;
  
  local_8 = 0;
  do {
    fVar1 = _DAT_004a60e8 * ((float10)local_8 / (float10)256.0) * (float10)2.0;
    FUN_00402b04();
    *(double *)(&DAT_00573a44 + local_8 * 8) = (double)fVar1;
    local_8 = local_8 + 1;
  } while (local_8 != 0x100);
  return;
}

