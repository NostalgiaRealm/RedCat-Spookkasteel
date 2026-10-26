/*
 * FUN_00417568 at 00417568
 * undefined __register FUN_00417568(int param_1, undefined4 * param_2, char param_3, undefined * param_4, undefined4 param_5)
 * Address ranges: 00417568-0041758c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4112c0 slot 1 for TWriter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4112c0 slot 1 for TWriter.
   Original bytes unchanged; names and types still inferred. */

void FUN_00417568(int param_1,undefined4 *param_2,char param_3,undefined *param_4,undefined4 param_5
                 )

{
  if ((param_3 != '\0') && (param_4._2_2_ != 0)) {
    FUN_00418d9c(param_1,param_2);
    (*(code *)param_4)(param_5,param_1);
  }
  return;
}

