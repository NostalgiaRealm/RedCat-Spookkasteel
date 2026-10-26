/*
 * FUN_004705c0 at 004705c0
 * bool __register FUN_004705c0(int param_1)
 * Address ranges: 004705c0-004705db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004705c0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0046f970(param_1);
  if ((char)uVar2 != '\0') {
    return false;
  }
  bVar1 = FUN_004051b8((VARIANTARG *)(param_1 + 0x18));
  return bVar1;
}

