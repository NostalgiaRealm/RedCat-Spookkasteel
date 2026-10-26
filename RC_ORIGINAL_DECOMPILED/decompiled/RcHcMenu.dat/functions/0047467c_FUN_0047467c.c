/*
 * FUN_0047467c at 0047467c
 * uint __register FUN_0047467c(int * param_1)
 * Address ranges: 0047467c-004746a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 26 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 26 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

uint FUN_0047467c(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00496d60(param_1);
  uVar2 = FUN_004746c4((int)param_1,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}

