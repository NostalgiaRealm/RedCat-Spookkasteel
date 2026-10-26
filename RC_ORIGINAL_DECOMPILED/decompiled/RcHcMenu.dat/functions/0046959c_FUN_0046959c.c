/*
 * FUN_0046959c at 0046959c
 * undefined __register FUN_0046959c(int param_1, int param_2, char param_3)
 * Address ranges: 0046959c-004695c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 4 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 4 for TField.
   Original bytes unchanged; names and types still inferred. */

void FUN_0046959c(int param_1,int param_2,char param_3)

{
  FUN_0041922c(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == *(int *)(param_1 + 0x58))) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

