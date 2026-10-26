/*
 * FUN_10002bc0 at 10002bc0
 * undefined __cdecl FUN_10002bc0(int param_1)
 * Address ranges: 10002bc0-10002c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002bc0(int param_1)

{
  if (DAT_100e3a54 != param_1) {
    switch(param_1) {
    case 1:
      _guTexCombineFunction_8(DAT_101f55a0,10);
      if (1 < DAT_101f55c4) {
        _guTexCombineFunction_8(DAT_101f55a4,0);
        DAT_100e3a54 = param_1;
        return;
      }
      break;
    case 2:
      _guTexCombineFunction_8(DAT_101f55a0,1);
      if (1 < DAT_101f55c4) {
        _guTexCombineFunction_8(DAT_101f55a4,0);
        DAT_100e3a54 = param_1;
        return;
      }
      break;
    case 3:
      _guTexCombineFunction_8(DAT_101f55a0,4);
      _guTexCombineFunction_8(DAT_101f55a4,1);
      DAT_100e3a54 = param_1;
      return;
    case 4:
      _guTexCombineFunction_8(DAT_101f55a0,2);
      _guTexCombineFunction_8(DAT_101f55a4,1);
    }
    DAT_100e3a54 = param_1;
  }
  return;
}

