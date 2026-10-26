/*
 * FUN_00501f50 at 00501f50
 * undefined __register FUN_00501f50(int * param_1, short * param_2, byte param_3)
 * Address ranges: 00501f50-00502020
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 55 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 55 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_00501f50(int *param_1,short *param_2,byte param_3)

{
  char cVar1;
  
  if ((((*param_2 == 0x73) && (param_3 == 0)) || ((*param_2 == 0x28 && ((param_3 & 2) != 0)))) ||
     ((*param_2 == 0x26 && ((param_3 & 2) != 0)))) {
    if ((*(byte *)(param_1 + 0x97) & 2) == 0) {
      (**(code **)(*param_1 + 0x134))();
      *param_2 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x130))(param_1,0);
      *param_2 = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x97) & 2) != 0) {
    if (*param_2 == 0xd) {
      cVar1 = (**(code **)(*param_1 + 0xfc))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x130))(param_1,1);
        *param_2 = 0;
      }
    }
    if (*param_2 == 0x1b) {
      (**(code **)(*param_1 + 0x130))(param_1,0);
      *param_2 = 0;
    }
  }
  return;
}

