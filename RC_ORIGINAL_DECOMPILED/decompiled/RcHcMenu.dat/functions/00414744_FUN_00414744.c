/*
 * FUN_00414744 at 00414744
 * undefined __register FUN_00414744(int * param_1, char param_2)
 * Address ranges: 00414744-00414753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 12 for TStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 12 for
   TStringList. Original bytes unchanged; names and types still inferred. */

void FUN_00414744(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}

