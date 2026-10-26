/*
 * FUN_0047463c at 0047463c
 * undefined __register FUN_0047463c(int * param_1)
 * Address ranges: 0047463c-00474678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 25 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 25 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_0047463c(int *param_1)

{
  FUN_00495f74(param_1);
  if (param_1[0xe] != 0) {
    FUN_00494340((int *)param_1[0xe]);
    FUN_004746c4((int)param_1,'\0');
    return;
  }
  FUN_004746c4((int)param_1,'\x01');
  return;
}

