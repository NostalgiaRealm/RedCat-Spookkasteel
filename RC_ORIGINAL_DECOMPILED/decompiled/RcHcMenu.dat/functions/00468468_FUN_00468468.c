/*
 * FUN_00468468 at 00468468
 * undefined __register FUN_00468468(int param_1)
 * Address ranges: 00468468-00468468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x4625dc slot 34 for TFieldDefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x4625dc
   slot 34 for TFieldDefList. Original bytes unchanged; names and types still inferred. */

void FUN_00468468(int param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  
  uVar1 = FUN_004714b4(*(int *)(param_1 + 0x30));
  uVar2 = extraout_ECX;
  if ((char)uVar1 != '\0') {
    FUN_00467f10(*(int **)(*(int *)(param_1 + 0x30) + 0x2c));
    uVar2 = extraout_ECX_00;
  }
  FUN_0046829c((undefined4 *)0x0,*(int *)(*(int *)(param_1 + 0x30) + 0x2c),uVar2,
               (int)&stack0xfffffffc);
  return;
}

