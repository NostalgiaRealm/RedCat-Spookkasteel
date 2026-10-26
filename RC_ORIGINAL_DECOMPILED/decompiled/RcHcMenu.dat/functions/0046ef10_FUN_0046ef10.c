/*
 * FUN_0046ef10 at 0046ef10
 * undefined __register FUN_0046ef10(int * param_1, int * param_2)
 * Address ranges: 0046ef10-0046ef3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x466014 slot 3 for TCheckConstraint. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x466014 slot 3 for
   TCheckConstraint. Original bytes unchanged; names and types still inferred. */

void FUN_0046ef10(int *param_1,int *param_2)

{
  FUN_00403e04(param_2,(undefined4 *)param_1[3]);
  if (*param_2 == 0) {
    FUN_00403e04(param_2,(undefined4 *)param_1[4]);
  }
  if (*param_2 == 0) {
    FUN_00412cbc(param_1,param_2);
  }
  return;
}

