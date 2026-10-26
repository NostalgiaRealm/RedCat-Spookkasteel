/*
 * FUN_00417590 at 00417590
 * undefined __register FUN_00417590(int param_1, undefined4 * param_2, char param_3, undefined * param_4, undefined4 param_5)
 * Address ranges: 00417590-004175b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4112c0 slot 2 for TWriter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4112c0 slot 2 for TWriter.
   Original bytes unchanged; names and types still inferred. */

void FUN_00417590(int param_1,undefined4 *param_2,char param_3,undefined *param_4,undefined4 param_5
                 )

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((param_3 != '\0') && (param_4._2_2_ != 0)) {
    FUN_00418d9c(param_1,param_2);
    FUN_00417670(param_1,extraout_EDX,extraout_ECX,param_4,param_5);
  }
  return;
}

