/*
 * FUN_0046befc at 0046befc
 * undefined __register FUN_0046befc(int * param_1, int param_2)
 * Address ranges: 0046befc-0046bf5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 40 for TDateTimeField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 40 for
   TDateTimeField. Original bytes unchanged; names and types still inferred. */

void FUN_0046befc(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    if ((char)param_1[0xd] == '\t') {
      FUN_0040c53c(param_2);
    }
    else if ((char)param_1[0xd] == '\n') {
      FUN_0040c58c(param_2);
    }
    else {
      FUN_0040c5dc(param_2);
    }
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}

