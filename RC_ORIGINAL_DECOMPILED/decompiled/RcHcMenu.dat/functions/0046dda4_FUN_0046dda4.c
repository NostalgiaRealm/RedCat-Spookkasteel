/*
 * FUN_0046dda4 at 0046dda4
 * undefined4 __register FUN_0046dda4(int * param_1)
 * Address ranges: 0046dda4-0046ddd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465428 slot 24 for TDataSetField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465428 slot 24 for
   TDataSetField. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0046dda4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_00469070(param_1);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_0046dd04((int)param_1);
    if (iVar2 != 0) {
      uVar3 = FUN_004714b4(param_1[0x3b]);
      if ((char)uVar3 != '\0') {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return 0;
}

