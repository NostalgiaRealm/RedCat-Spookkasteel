/*
 * FUN_004aecac at 004aecac
 * int __register FUN_004aecac(uint param_1)
 * Address ranges: 004aecac-004aeccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004aecac(uint param_1)

{
  bool bVar1;
  
  bVar1 = SCARRY4(DAT_005719c0,1);
  DAT_005719c0 = DAT_005719c0 + 1;
  if (bVar1) {
    thunk_FUN_00402874(param_1);
  }
  return DAT_005719c0;
}

