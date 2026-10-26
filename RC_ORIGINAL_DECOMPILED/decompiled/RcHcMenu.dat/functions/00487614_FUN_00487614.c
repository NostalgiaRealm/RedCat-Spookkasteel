/*
 * FUN_00487614 at 00487614
 * undefined __register FUN_00487614(int * param_1, char param_2)
 * Address ranges: 00487614-00487655
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 91 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 91 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487614(int *param_1,char param_2)

{
  (**(code **)(*param_1 + 0x268))(param_1,0,1);
  FUN_00483e18(param_1,param_2);
  FUN_0048797c(param_1,*(undefined1 *)((int)param_1 + 0x22b));
  if (*(char *)(param_1[0x8b] + 0x66) != '\0') {
    FUN_004879e8((int)param_1);
  }
  return;
}

