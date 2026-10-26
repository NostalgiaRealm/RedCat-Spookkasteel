/*
 * FUN_10002b50 at 10002b50
 * undefined __cdecl FUN_10002b50(int param_1)
 * Address ranges: 10002b50-10002ba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002b50(int param_1)

{
  if (DAT_100e3a50 != param_1) {
    switch(param_1) {
    case 1:
      _guColorCombineFunction_4(2);
      DAT_100e3a50 = param_1;
      return;
    case 2:
      _guColorCombineFunction_4(4);
      DAT_100e3a50 = param_1;
      return;
    case 3:
      _guColorCombineFunction_4(6);
      DAT_100e3a50 = param_1;
      return;
    case 4:
      _guColorCombineFunction_4(8);
    }
    DAT_100e3a50 = param_1;
  }
  return;
}

