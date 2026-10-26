/*
 * FUN_004235a8 at 004235a8
 * undefined __register FUN_004235a8(int param_1, int param_2, char param_3)
 * Address ranges: 004235a8-004235d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x423534 slot 4 for TComponentListNexus. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x423534 slot 4 for
   TComponentListNexus. Original bytes unchanged; names and types still inferred. */

void FUN_004235a8(int param_1,int param_2,char param_3)

{
  if ((param_3 == '\x01') && (*(short *)(param_1 + 0x2a) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1,param_2);
  }
  FUN_0041922c(param_1,param_2,param_3);
  return;
}

