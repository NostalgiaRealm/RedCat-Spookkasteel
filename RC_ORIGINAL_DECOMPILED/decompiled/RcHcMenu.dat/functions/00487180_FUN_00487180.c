/*
 * FUN_00487180 at 00487180
 * undefined1 __register FUN_00487180(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00487180-004871bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00487180(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(short *)(param_1 + 0x222) != 0) && (*(short *)(param_1 + 0x222) != 0)) {
    (**(code **)(param_1 + 0x220))(*(undefined4 *)(param_1 + 0x224),param_3,param_2);
  }
  return 0;
}

