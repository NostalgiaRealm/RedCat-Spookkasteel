/*
 * FUN_00474614 at 00474614
 * uint __register FUN_00474614(int * param_1)
 * Address ranges: 00474614-00474638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 24 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 24 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

uint FUN_00474614(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00496b64(param_1);
  uVar2 = FUN_004746c4((int)param_1,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}

