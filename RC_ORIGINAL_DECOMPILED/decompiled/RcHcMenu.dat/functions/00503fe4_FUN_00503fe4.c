/*
 * FUN_00503fe4 at 00503fe4
 * undefined __register FUN_00503fe4(int * param_1, ushort param_2, char param_3)
 * Address ranges: 00503fe4-00504052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503914 slot 46 for TDaviComboBoxPopup. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503914 slot 46 for
   TDaviComboBoxPopup. Original bytes unchanged; names and types still inferred. */

void FUN_00503fe4(int *param_1,ushort param_2,char param_3)

{
  char local_b;
  ushort local_a;
  
  local_b = param_3;
  local_a = param_2;
  if ((param_2 == 0x21) && (param_3 == '\x04')) {
    local_a = 0x24;
    local_b = '\0';
  }
  if ((local_a == 0x22) && (local_b == '\x04')) {
    local_a = 0x23;
  }
  FUN_0050234c((int *)param_1[0x88]);
  FUN_00502eec(param_1,local_a);
  return;
}

