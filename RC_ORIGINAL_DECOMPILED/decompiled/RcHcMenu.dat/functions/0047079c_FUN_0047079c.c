/*
 * FUN_0047079c at 0047079c
 * uint __register FUN_0047079c(int param_1)
 * Address ranges: 0047079c-004707b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0047079c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0046f970(param_1);
  if ((char)uVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_0040514c((VARIANTARG *)(param_1 + 0x18));
  return uVar2;
}

