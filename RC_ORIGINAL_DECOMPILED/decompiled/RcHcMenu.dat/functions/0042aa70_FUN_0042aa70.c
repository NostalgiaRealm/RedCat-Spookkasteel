/*
 * FUN_0042aa70 at 0042aa70
 * undefined __register FUN_0042aa70(int * param_1, int * param_2)
 * Address ranges: 0042aa70-0042aac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 36 for TCustomComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 36 for
   TCustomComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_0042aa70(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"COMBOBOX");
  param_2[1] = param_2[1] | 0x200240U |
               *(uint *)(&DAT_0056f714 + (uint)*(byte *)((int)param_1 + 0x1fa) * 4) |
               *(uint *)(&DAT_0056f734 + (uint)*(byte *)((int)param_1 + 0x1f9) * 4) |
               *(uint *)(&DAT_0056f728 + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}

